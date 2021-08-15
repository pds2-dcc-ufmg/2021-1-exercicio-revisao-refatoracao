CC=g++
CFLAGS=-std=c++11 -Wall
EXEC=exec

SRC=./src
SRC_CLIENTE=./src/Cliente
SRC_IMOVEIS=./src/Imoveis
INCLUDE=./include
BUILD=./build

all: ${EXEC}

${EXEC}: ${BUILD}/main.o ${BUILD}/Utilitarios.o ${BUILD}/Cliente.o ${BUILD}/Imovel.o ${BUILD}/Cobertura.o ${BUILD}/Casa.o ${BUILD}/Apartamento.o
	${CC} -o ${EXEC} ${BUILD}/*.o

${BUILD}/Cliente.o: ${SRC_CLIENTE}/Cliente.cpp ${INCLUDE}/Cliente/Cliente.hpp
	${CC} -I ${INCLUDE}/Cliente/ -c ${SRC_CLIENTE}/Cliente.cpp -o ${BUILD}/Cliente.o

${BUILD}/Imovel.o: ${SRC_IMOVEIS}/Imovel.cpp ${INCLUDE}/Imoveis/Imovel.hpp ${INCLUDE}/Cliente/Cliente.hpp
	${CC} -I ${INCLUDE}/Imoveis/ -I ${INCLUDE}/Cliente/ -c ${SRC_IMOVEIS}/Imovel.cpp -o ${BUILD}/Imovel.o

${BUILD}/Cobertura.o: ${SRC_IMOVEIS}/Cobertura.cpp ${INCLUDE}/Imoveis/Cobertura.hpp ${INCLUDE}/Cliente/Cliente.hpp
	${CC} -I ${INCLUDE}/Imoveis/ -I ${INCLUDE}/Cliente/ -c ${SRC_IMOVEIS}/Cobertura.cpp -o ${BUILD}/Cobertura.o

${BUILD}/Casa.o: ${SRC_IMOVEIS}/Casa.cpp ${INCLUDE}/Imoveis/Casa.hpp ${INCLUDE}/Cliente/Cliente.hpp
	${CC} -I ${INCLUDE}/Imoveis/ -I ${INCLUDE}/Cliente/ -c ${SRC_IMOVEIS}/Casa.cpp -o ${BUILD}/Casa.o

${BUILD}/Apartamento.o: ${SRC_IMOVEIS}/Apartamento.cpp ${INCLUDE}/Imoveis/Apartamento.hpp ${INCLUDE}/Cliente/Cliente.hpp
	${CC} -I ${INCLUDE}/Imoveis/ -I ${INCLUDE}/Cliente/ -c ${SRC_IMOVEIS}/Apartamento.cpp -o ${BUILD}/Apartamento.o

${BUILD}/Utilitarios.o: ${SRC}/Utilitarios.cpp ${INCLUDE}/Utilitarios.hpp ${INCLUDE}/Cliente/*.hpp ${INCLUDE}/Imoveis/*.hpp
	${CC} -I ${INCLUDE}/Imoveis/ -I ${INCLUDE}/Cliente/ -I ${INCLUDE}/ -c ${SRC}/Utilitarios.cpp -o ${BUILD}/Utilitarios.o

${BUILD}/main.o: ${SRC}/main.cpp ${INCLUDE}/Cliente/*.hpp ${INCLUDE}/Imoveis/*.hpp ${INCLUDE}/*.hpp
	${CC} -I ${INCLUDE}/Imoveis/ -I ${INCLUDE}/Cliente/ -I ${INCLUDE}/  -c ${SRC}/main.cpp -o ${BUILD}/main.o

clean:
	rm ${EXEC} ${BUILD}/*