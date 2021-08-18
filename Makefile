CC=g++
CFLAGS=-std=c++11 -Wall -lm
TARGET=sistema

BUILD_DIR    = ./build
SRC_DIR    = ./src
INCLUDE_DIR  = ./include

${TARGET}: ${BUILD_DIR}/Cliente.o ${BUILD_DIR}/Imovel.o ${BUILD_DIR}/main.o ${BUILD_DIR}/Cobertura.o ${BUILD_DIR}/Apartamento.o ${BUILD_DIR}/Casa.o
	${CC} ${CFLAGS} -o ${TARGET} ${BUILD_DIR}/*.o

${BUILD_DIR}/Cobertura.o: ${INCLUDE_DIR}/Cobertura.hpp ${SRC_DIR}/entidades/Cobertura.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/entidades/Cobertura.cpp -o ${BUILD_DIR}/Cobertura.o

${BUILD_DIR}/Cliente.o: ${INCLUDE_DIR}/Cliente.hpp ${SRC_DIR}/entidades/Cliente.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/entidades/Cliente.cpp -o ${BUILD_DIR}/Cliente.o
	
${BUILD_DIR}/Imovel.o: ${INCLUDE_DIR}/Imovel.hpp ${SRC_DIR}/entidades/Imovel.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/entidades/Imovel.cpp -o ${BUILD_DIR}/Imovel.o

${BUILD_DIR}/Casa.o: ${INCLUDE_DIR}/Casa.hpp ${SRC_DIR}/entidades/Casa.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/entidades/Casa.cpp -o ${BUILD_DIR}/Casa.o

${BUILD_DIR}/Apartamento.o: ${INCLUDE_DIR}/Apartamento.hpp ${SRC_DIR}/entidades/Apartamento.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/entidades/Apartamento.cpp -o ${BUILD_DIR}/Apartamento.o

$(BUILD_DIR)/main.o : $(SRC_DIR)/main.cpp $(INCLUDE_DIR)/Apartamento.hpp $(INCLUDE_DIR)/Casa.hpp $(INCLUDE_DIR)/Cliente.hpp $(INCLUDE_DIR)/Cobertura.hpp $(INCLUDE_DIR)/Imovel.hpp 
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o

# Rule for cleaning files generated during compilation. 
# Call 'make clean' to use it
clean:
	rm ${BUILD_DIR}/*
