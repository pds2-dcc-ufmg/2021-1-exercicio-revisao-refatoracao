CC = g++
CFLAGS = 

TARGET = main
BUILD_DIR = ./build
INCLUDE_DIR = ./include
SRC_DIR = ./src

${TARGET}: ${BUILD_DIR}/Cliente.o ${BUILD_DIR}/Imovel.o ${BUILD_DIR}/main.o
	${CC} ${CFLAGS} -o ${TARGET} ${BUILD_DIR}/*.o -g

${BUILD_DIR}/Cliente.o: ${INCLUDE_DIR}/Cliente.hpp ${SRC_DIR}/Cliente.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/Cliente.cpp -o ${BUILD_DIR}/Cliente.o
	
${BUILD_DIR}/Imovel.o: ${INCLUDE_DIR}/Imovel.hpp ${SRC_DIR}/Imovel.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/Imovel.cpp -o ${BUILD_DIR}/Imovel.o

${BUILD_DIR}/main.o: ${INCLUDE_DIR}/Apartamento.hpp ${INCLUDE_DIR}/Casa.hpp ${INCLUDE_DIR}/Cliente.hpp ${INCLUDE_DIR}/Cobertura.hpp ${INCLUDE_DIR}/Imovel.hpp ${SRC_DIR}/Cliente.cpp main.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c main.cpp -o ${BUILD_DIR}/main.o 

clean:
	rm -f ${BUILD_DIR}/*
	rm -f main

