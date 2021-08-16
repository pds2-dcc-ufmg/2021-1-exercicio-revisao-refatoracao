CXX       := g++

SRC		:= ./src
ENTIDADES     := ./src/entidades
INCLUDE_DIR := ./include
BUILD_DIR	:= ./build
EXECUTABLE  := main.exe

$(EXECUTABLE): $(BUILD_DIR)/Apartamento.o $(BUILD_DIR)/Cartorio.o $(BUILD_DIR)/Casa.o $(BUILD_DIR)/Cliente.o $(BUILD_DIR)/Cobertura.o $(BUILD_DIR)/Imovel.o $(BUILD_DIR)/main.o
	$(CXX) -o $@  $^ -I $(INCLUDE_DIR) 

$(BUILD_DIR)/Apartamento.o : $(ENTIDADES)/Apartamento.cpp $(INCLUDE_DIR)/Apartamento.hpp
	$(CXX) -I $(INCLUDE_DIR) -c $(ENTIDADES)/Apartamento.cpp -o $(BUILD_DIR)/Apartamento.o

$(BUILD_DIR)/Cartorio.o : $(ENTIDADES)/Cartorio.cpp $(INCLUDE_DIR)/Cartorio.hpp
	$(CXX) -I $(INCLUDE_DIR) -c $(ENTIDADES)/Cartorio.cpp -o $(BUILD_DIR)/Cartorio.o

$(BUILD_DIR)/Casa.o : $(ENTIDADES)/Casa.cpp $(INCLUDE_DIR)/Casa.hpp
	$(CXX) -I $(INCLUDE_DIR) -c $(ENTIDADES)/Casa.cpp -o $(BUILD_DIR)/Casa.o

$(BUILD_DIR)/Cliente.o : $(ENTIDADES)/Cliente.cpp $(INCLUDE_DIR)/Cliente.hpp
	$(CXX) -I $(INCLUDE_DIR) -c $(ENTIDADES)/Cliente.cpp -o $(BUILD_DIR)/Cliente.o

$(BUILD_DIR)/Cobertura.o : $(ENTIDADES)/Cobertura.cpp $(INCLUDE_DIR)/Cobertura.hpp
	$(CXX) -I $(INCLUDE_DIR) -c $(ENTIDADES)/Cobertura.cpp -o $(BUILD_DIR)/Cobertura.o

$(BUILD_DIR)/Imovel.o : $(ENTIDADES)/Imovel.cpp $(INCLUDE_DIR)/Imovel.hpp
	$(CXX) -I $(INCLUDE_DIR) -c $(ENTIDADES)/Imovel.cpp -o $(BUILD_DIR)/Imovel.o

$(BUILD_DIR)/main.o : $(SRC)/main.cpp $(INCLUDE_DIR)/Apartamento.hpp $(INCLUDE_DIR)/Cartorio.hpp $(INCLUDE_DIR)/Casa.hpp $(INCLUDE_DIR)/Cliente.hpp $(INCLUDE_DIR)/Cobertura.hpp $(INCLUDE_DIR)/Imovel.hpp 
	$(CXX) -I $(INCLUDE_DIR) -c $(SRC)/main.cpp -o $(BUILD_DIR)/main.o
	
clean:
	-rm $(BUILD_DIR)/*