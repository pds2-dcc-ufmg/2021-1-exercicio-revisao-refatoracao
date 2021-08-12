CC = g++
CFLAGS = -std=c++11 -Wall

all: programa

# Linkagem dos arquivos .o
programa: main.o Imovel.o DadosValorArea.o DadosComodos.o Cobertura.o Cliente.o Casa.o Apartamento.o
	$(CC) $(CFLAGS) $^ -o $@

# Compilação de cada um dos arquivos .cpp
%.o: %.cpp
	$(CC) $(CFLAGS) -c $<

# Dependências de cada um dos arquivos .o
main.o: Imovel.hpp DadosValorArea.hpp DadosComodos.hpp Cobertura.hpp Cliente.hpp Casa.hpp Apartamento.hpp
Imovel.o: Imovel.hpp DadosValorArea.hpp DadosComodos.hpp Cliente.hpp
DadosValorArea.o: DadosValorArea.hpp
DadosComodos.o: DadosComodos.hpp
Cobertura.o:  Imovel.hpp DadosValorArea.hpp DadosComodos.hpp Cliente.hpp
Cliente.o: Cliente.hpp
Casa.o:  Imovel.hpp DadosValorArea.hpp DadosComodos.hpp Cliente.hpp
Apartamento.o:  Imovel.hpp DadosValorArea.hpp DadosComodos.hpp Cliente.hpp

# Limpeza do Diretório
.PHONY: clean
clean:
	rm -f *.o *.gch