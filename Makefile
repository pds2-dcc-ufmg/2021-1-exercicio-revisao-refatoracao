CC=g++
CFLAGS =-std=c++11 -Wall
TARGET=program

INCLUDE_DIR = ./include
SRC_DIR    = ./src
IMOVEIS_DIR = ./src/imoveis
ENTIDADES_DIR = ./src/entidades
BUILD_DIR    = ./build

${TARGET}: ${BUILD_DIR}/main.o ${BUILD_DIR}/Apartamento.o ${BUILD_DIR}/Casa.o ${BUILD_DIR}/Cliente.o ${BUILD_DIR}/Cobertura.o ${BUILD_DIR}/Imovel.o 
	${CC} ${CFLAGS} -o ${TARGET} ${BUILD_DIR}/main.o ${BUILD_DIR}/Apartamento.o ${BUILD_DIR}/Casa.o ${BUILD_DIR}/Cliente.o ${BUILD_DIR}/Cobertura.o ${BUILD_DIR}/Imovel.o 
${BUILD_DIR}/Apartamento.o: ${INCLUDE_DIR}/Apartamento.hpp ${IMOVEIS_DIR}/Apartamento.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${IMOVEIS_DIR}/Apartamento.cpp -o ${BUILD_DIR}/Apartamento.o
${BUILD_DIR}/Casa.o: ${INCLUDE_DIR}/Casa.hpp ${IMOVEIS_DIR}/Casa.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${IMOVEIS_DIR}/Casa.cpp -o ${BUILD_DIR}/Casa.o
${BUILD_DIR}/Cliente.o: ${INCLUDE_DIR}/Cliente.hpp ${ENTIDADES_DIR}/Cliente.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${ENTIDADES_DIR}/Cliente.cpp -o ${BUILD_DIR}/Cliente.o
${BUILD_DIR}/Cobertura.o: ${INCLUDE_DIR}/Cobertura.hpp ${IMOVEIS_DIR}/Cobertura.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${IMOVEIS_DIR}/Cobertura.cpp -o ${BUILD_DIR}/Cobertura.o
${BUILD_DIR}/Imovel.o: ${INCLUDE_DIR}/Imovel.hpp ${IMOVEIS_DIR}/Imovel.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${IMOVEIS_DIR}/Imovel.cpp -o ${BUILD_DIR}/Imovel.o
${BUILD_DIR}/main.o: ${INCLUDE_DIR}/Apartamento.hpp ${INCLUDE_DIR}/Casa.hpp ${INCLUDE_DIR}/Cliente.hpp ${INCLUDE_DIR}/Cobertura.hpp ${INCLUDE_DIR}/Imovel.hpp ${SRC_DIR}/main.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o

clean:
	rm -f ${BUILD_DIR}/*.o 
	rm -f program
