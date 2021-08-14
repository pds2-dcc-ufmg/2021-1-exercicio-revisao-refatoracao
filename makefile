CC = g++
CFLAGS = -std=c++11 -Wall
CPPFLAGS = ''

SDIR = ./src
IDIR = ./include
BUILDIR = ./build
DEPDIR = ./dep

CPP = $(SDIR)/main.cpp $(wildcard $(SDIR)/*.cpp)

OBJ = $(CPP:$(SDIR)/%.cpp=$(BUILDIR)/%.o)

DEP = $(OBJ:$(BUILDIR)/%.o=$(DEPDIR)/%.d)

all: depend programa

depend: $(DEP)

# Formação dos arquivos de dependência. 
# ===> OBS: POR ALGUM MORIVO A FUNCÃO patsubst NÃO FUNCIONA QUANDO A CHAMO
#      COM OS SEGUINTES PARAMS: $(patsubst $(DEPDIR)/%.d,$(BUILDIR)/%.o,$@). NÃO DEVERIA SER A MESMA COISA?
#      MAS AGORA ESTÁ FUNCIONAL. 
# ===> OBS: Outro problema é que para toda chamada de make estão sendo recriados TODOS os arquivos .d.
#           Este problema deve ser resolvido
./$(DEPDIR)/%.d: $(SDIR)/%.cpp
	$(CC) -I $(IDIR) -MM -MT '$(patsubst dep/%.d,$(BUILDIR)/%.o,$@)' -MF $@ $< 

# Linkagem dos arquivos .o
programa: $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

# Compilação de cada um dos arquivos .cpp
$(BUILDIR)/%.o: $(SDIR)/%.cpp
	$(CC) $(CFLAGS) -I $(IDIR) -o $@ -c $<	

# Inclusão dos .hpp
-include $(DEP)

# Limpeza do Diretório
.PHONY: clean
clean:
	rm $(BUILDIR)/*.o
	rm $(DEPDIR)/*.d