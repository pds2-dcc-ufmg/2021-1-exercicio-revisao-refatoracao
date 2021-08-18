CC = g++
CFLAGS=-std=c++11 -Wall
TARGET = main.exe

BUILD_DIR = ./build
SRC_DIR = ./src
INCLUDE_DIR = ./include

${TARGET}: ${BUILD_DIR}/Imovel.o ${BUILD_DIR}/Cliente.o ${BUILD_DIR}/main.o
	${CC} ${CFLAGS} -o ${TARGET} ${BUILD_DIR}/*.o

${BUILD_DIR}/Imovel.o: ${INCLUDE_DIR}/Cliente.hpp ${INCLUDE_DIR}/Imovel.hpp ${SRC_DIR}/entidades/Imovel.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/entidades/Imovel.cpp -o ${BUILD_DIR}/Imovel.o

${BUILD_DIR}/Cliente.o: ${INCLUDE_DIR}/Cliente.hpp ${SRC_DIR}/entidades/Cliente.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/entidades/Cliente.cpp -o ${BUILD_DIR}/Cliente.o

${BUILD_DIR}/main.o: ${INCLUDE_DIR}/Imovel.hpp ${INCLUDE_DIR}/Apartamento.hpp ${INCLUDE_DIR}/Cobertura.hpp ${INCLUDE_DIR}/Casa.hpp ${INCLUDE_DIR}/Cliente.hpp ${SRC_DIR}/main.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o

clean:
	rm -f ${BUILD_DIR}/*