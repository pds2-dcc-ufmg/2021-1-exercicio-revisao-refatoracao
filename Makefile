CC=g++
CFLAGS=-std=c++11 -Wall

BUILD = ./build
SRC = ./src
SRC_IMOVEIS = ./src/Imoveis
INCLUDE_IMOVEIS = ./include/Imoveis
SRC_CLIENTE = ./src/Cliente
INCLUDE_CLIENTE = ./include/Cliente
INCLUDE = ./include
EXEC=execution


all: ${EXEC} clean


${BUILD}/Cliente.o:  ${INCLUDE_CLIENTE}/Cliente.hpp ${SRC_CLIENTE}/Cliente.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_CLIENTE} -c ${SRC_CLIENTE}/Cliente.cpp -o ${BUILD}/Cliente.o

${BUILD}/Apartamento.o:  ${INCLUDE_IMOVEIS}/Apartamento.hpp ${SRC_IMOVEIS}/Apartamento.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_IMOVEIS} -c ${SRC_IMOVEIS}/Apartamento.cpp -o ${BUILD}/Apartamento.o

${BUILD}/Casa.o:  ${INCLUDE_IMOVEIS}/Casa.hpp ${SRC_IMOVEIS}/Casa.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_IMOVEIS} -c ${SRC_IMOVEIS}/Casa.cpp -o ${BUILD}/Casa.o

${BUILD}/Cobertura.o:  ${INCLUDE_IMOVEIS}/Cobertura.hpp ${SRC_IMOVEIS}/Cobertura.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_IMOVEIS} -c ${SRC_IMOVEIS}/Cobertura.cpp -o ${BUILD}/Cobertura.o

${BUILD}/Imovel.o:  ${INCLUDE_IMOVEIS}/Imovel.hpp ${SRC_IMOVEIS}/Imovel.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_IMOVEIS} ${INCLUDE_CLIENTE} -c ${SRC_IMOVEIS}/Imovel.cpp -o ${BUILD}/Imovel.o


${BUILD}/main.o: ${SRC}/main.cpp
	${CC} ${CFLAGS} -I ${INCLUDE}/Cliente ${INCLUDE}/Imoveis -c ${SRC}/main.cpp -o ${BUILD}/main.o


${EXEC}: ${BUILD}/Cliente.o ${BUILD}/Apartamento.o ${BUILD}/Casa.o ${BUILD}/Cobertura.o ${BUILD}/Imovel.o ${BUILD}/main.o
	${CC} ${CFLAGS} -o ./${EXEC} ${BUILD}/*.o

clean:
	rm -f ${BUILD}/*