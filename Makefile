CC=g++
CFLAGS=-std=c++11 -Wall
TARGET=program

BUILD_DIR = ./build
SRC_DIR = ./src
INCLUDE_DIR = ./include


${TARGET}: ${BUILD_DIR}/Imovel.o ${BUILD_DIR}/Pessoa.o ${BUILD_DIR}/main.o
		${CC} ${CFLAGS} -o ${TARGET} ${BUILD_DIR}/*.o

${BUILD_DIR}/Imovel.o: ${INCLUDE_DIR}/Imovel.hpp ${SRC_DIR}/Imovel.cpp ${INCLUDE_DIR}/Pessoa.hpp
		${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/Imovel.cpp -o ${BUILD_DIR}/Imovel.o

${BUILD_DIR}/Pessoa.o: ${INCLUDE_DIR}/Pessoa.hpp ${SRC_DIR}/Pessoa.cpp
		${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/Pessoa.cpp -o ${BUILD_DIR}/Pessoa.o

${BUILD_DIR}/main.o: ${INCLUDE_DIR}/Imovel.hpp ${INCLUDE_DIR}/Apartamento.hpp ${INCLUDE_DIR}/Casa.hpp ${INCLUDE_DIR}/Cobertura.hpp ${INCLUDE_DIR}/Pessoa.hpp ${SRC_DIR}/main.cpp
		${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o
