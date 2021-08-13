CXX=g++
TARGET=portifolio

BUILD_DIR=./build
INCLUDE_DIR=./include
SRC_DIR=./src

all: $(SRC_DIR)/$(TARGET)

$(SRC_DIR)/$(TARGET): $(BUILD_DIR)/Apartamento.o $(BUILD_DIR)/Casa.o $(BUILD_DIR)/Cliente.o $(BUILD_DIR)/Cobertura.o $(BUILD_DIR)/Imovel.o $(BUILD_DIR)/main.o 
	$(CXX) -o $(BUILD_DIR)/$(TARGET) $(BUILD_DIR)/*.o

$(BUILD_DIR)/Apartamento.o: $(INCLUDE_DIR)/Apartamento.hpp $(SRC_DIR)/Apartamento.cpp
	$(CXX) -I $(INCLUDE_DIR) -c $(SRC_DIR)/Apartamento.cpp -o $(BUILD_DIR)/Apartamento.o

$(BUILD_DIR)/Casa.o: $(INCLUDE_DIR)/Casa.hpp $(SRC_DIR)/Casa.cpp
	$(CXX) -I $(INCLUDE_DIR) -c $(SRC_DIR)/Casa.cpp -o $(BUILD_DIR)/Casa.o

$(BUILD_DIR)/Cliente.o: $(INCLUDE_DIR)/Cliente.hpp $(SRC_DIR)/Cliente.cpp
	$(CXX) -I $(INCLUDE_DIR) -c $(SRC_DIR)/Cliente.cpp -o $(BUILD_DIR)/Cliente.o

$(BUILD_DIR)/Cobertura.o: $(INCLUDE_DIR)/Cobertura.hpp $(SRC_DIR)/Cobertura.cpp
	$(CXX) -I $(INCLUDE_DIR) -c $(SRC_DIR)/Cobertura.cpp -o $(BUILD_DIR)/Cobertura.o

$(BUILD_DIR)/Imovel.o: $(INCLUDE_DIR)/Imovel.hpp $(SRC_DIR)/Imovel.cpp
	$(CXX) -I $(INCLUDE_DIR) -c $(SRC_DIR)/Imovel.cpp -o $(BUILD_DIR)/Imovel.o

$(BUILD_DIR)/main.o: $(SRC_DIR)/main.cpp $(INCLUDE_DIR)/Apartamento.hpp $(INCLUDE_DIR)/Casa.hpp $(INCLUDE_DIR)/Cliente.hpp $(INCLUDE_DIR)/Cobertura.hpp $(INCLUDE_DIR)/Imovel.hpp
	$(CXX) -I $(INCLUDE_DIR) -c $(SRC_DIR)/main.cpp -o $(BUILD_DIR)/main.o

clean:
	rm -f $(BUILD_DIR)/*.o portifolio
