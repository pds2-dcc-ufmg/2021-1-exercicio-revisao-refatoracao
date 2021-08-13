CC = g++
CFLAGS = -std=c++11 -Wall

SDIR = ./src
IDIR = ./include
BUILDIR = ./build
DEPDIR = ./dep

CPP = $(SDIR)/main.cpp $(wildcard $(SDIR)/*.cpp)

OBJ = $(CPP:$(SDIR)/%.cpp=$(BUILDIR)/%.o)

DEP = $(OBJ:$(BUILDIR)/%.o=$(DEPDIR)/%.d)

all: programa

# Linkagem dos arquivos .o
programa: $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

# Inclusão dos .hpp
-include $(DEP)

# Compilação de cada um dos arquivos .cpp
$(BUILDIR)/%.o: $(SDIR)/%.cpp
	$(CC) $(CFLAGS) -I $(IDIR) -o $@ -c $<

# Limpeza do Diretório
.PHONY: clean
clean:
	rm -f $(BUILDIR)/*.o programa.exe