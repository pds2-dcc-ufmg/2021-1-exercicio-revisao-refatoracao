CC = g++
CFLAGS = -std=c++11 -Wall
TARGET = Corretora

BUILD_DIR = ./build
SRC_DIR = ./src
INCLUDE_DIR = ./include
LIB_DIR = ./lib

$(LIB_DIR)/$(TARGET): $(BUILD_DIR)/main.o $(BUILD_DIR)/Cliente.o $(BUILD_DIR)/Imovel.o $(BUILD_DIR)/Casa.o $(BUILD_DIR)/Apartamento.o $(BUILD_DIR)/Cobertura.o 
	$(CC) $(CFLAGS) -o $(LIB_DIR)/$(TARGET) $(BUILD_DIR)/*.o

$(BUILD_DIR)/Cliente.o: $(INCLUDE_DIR)/Cliente.hpp $(SRC_DIR)/Cliente.cpp
	$(CC) $(CFLAGS) -I $(INCLUDE_DIR)/ -c $(SRC_DIR)/Cliente.cpp -o $(BUILD_DIR)/Cliente.o

$(BUILD_DIR)/Casa.o: $(INCLUDE_DIR)/Casa.hpp $(SRC_DIR)/imoveis/Casa.cpp
	$(CC) $(CFLAGS) -I $(INCLUDE_DIR)/ -c $(SRC_DIR)/imoveis/Casa.cpp -o $(BUILD_DIR)/Casa.o

$(BUILD_DIR)/Apartamento.o: $(INCLUDE_DIR)/Apartamento.hpp $(SRC_DIR)/imoveis/Apartamento.cpp
	$(CC) $(CFLAGS) -I $(INCLUDE_DIR)/ -c $(SRC_DIR)/imoveis/Apartamento.cpp -o $(BUILD_DIR)/Apartamento.o

$(BUILD_DIR)/Cobertura.o: $(INCLUDE_DIR)/Cobertura.hpp $(SRC_DIR)/imoveis/Cobertura.cpp
	$(CC) $(CFLAGS) -I $(INCLUDE_DIR)/ -c $(SRC_DIR)/imoveis/Cobertura.cpp -o $(BUILD_DIR)/Cobertura.o

$(BUILD_DIR)/Imovel.o: $(INCLUDE_DIR)/Imovel.hpp $(SRC_DIR)/imoveis/Imovel.cpp
	$(CC) $(CFLAGS) -I $(INCLUDE_DIR)/ -c $(SRC_DIR)/imoveis/Imovel.cpp -o $(BUILD_DIR)/Imovel.o

$(BUILD_DIR)/main.o: $(INCLUDE_DIR)/Cliente.hpp $(INCLUDE_DIR)/Imovel.hpp $(INCLUDE_DIR)/Casa.hpp $(INCLUDE_DIR)/Apartamento.hpp $(INCLUDE_DIR)/Cobertura.hpp $(SRC_DIR)/main.cpp
	$(CC) $(CFLAGS) -I $(INCLUDE_DIR)/ -c $(SRC_DIR)/main.cpp -o $(BUILD_DIR)/main.o


clean:
	rm -f $(BUILD_DIR)/* $(LIB_DIR)/*


