CC=g++
CFLAGS=-std=c++11 -Wall
EXEC=exec

SRC=./src
SRC_CLIENTE=./src/Cliente
SRC_INCLUDE=./src/Imoveis
INCLUDE=./include
BUILD=./build

all: ${EXEC}

${EXEC}: ${BUILD}/main.o ${BUILD}/Cliente.o ${BUILD}/Imovel.o ${BUILD}/Cobertura.o ${BUILD}/Casa.o ${BUILD}/Apartamento.o
	${CC} -o ${EXEC} ${BUILD}/*.o

${BUILD}/Cliente.o: ${SRC_CLIENTE}/Cliente.cpp ${INCLUDE}/Cliente/Cliente.hpp
	${CC} -I ${INCLUDE}/Cliente/ -c ${SRC_CLIENTE}/Cliente.cpp -o ${BUILD}/Cliente.o

${BUILD}/Imovel.o: ${SRC_INCLUDE}/Imovel.cpp ${INCLUDE}/Imoveis/Imovel.hpp ${INCLUDE}/Cliente/Cliente.hpp
	${CC} -I ${INCLUDE}/Imoveis/ -I ${INCLUDE}/Cliente/ -c ${SRC_INCLUDE}/Imovel.cpp -o ${BUILD}/Imovel.o

${BUILD}/Cobertura.o: ${SRC_INCLUDE}/Cobertura.cpp ${INCLUDE}/Imoveis/Cobertura.hpp ${INCLUDE}/Cliente/Cliente.hpp
	${CC} -I ${INCLUDE}/Imoveis/ -I ${INCLUDE}/Cliente/ -c ${SRC_INCLUDE}/Cobertura.cpp -o ${BUILD}/Cobertura.o

${BUILD}/Casa.o: ${SRC_INCLUDE}/Casa.cpp ${INCLUDE}/Imoveis/Casa.hpp ${INCLUDE}/Cliente/Cliente.hpp
	${CC} -I ${INCLUDE}/Imoveis/ -I ${INCLUDE}/Cliente/ -c ${SRC_INCLUDE}/Casa.cpp -o ${BUILD}/Casa.o

${BUILD}/Apartamento.o: ${SRC_INCLUDE}/Apartamento.cpp ${INCLUDE}/Imoveis/Apartamento.hpp ${INCLUDE}/Cliente/Cliente.hpp
	${CC} -I ${INCLUDE}/Imoveis/ -I ${INCLUDE}/Cliente/ -c ${SRC_INCLUDE}/Apartamento.cpp -o ${BUILD}/Apartamento.o



${BUILD}/main.o: ${SRC}/main.cpp ${INCLUDE}/Cliente/*.hpp ${INCLUDE}/Imoveis/*.hpp
	${CC} -I ${INCLUDE}/Imoveis/ -I ${INCLUDE}/Cliente/  -c ${SRC}/main.cpp -o ${BUILD}/main.o

clean:
	rm ${EXEC} ${BUILD}/*