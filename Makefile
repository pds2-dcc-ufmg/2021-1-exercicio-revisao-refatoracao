CC=g++
CFLAGS=-std=c++14 -Wall
TARGET=program

BUILD_DIR=./build
INCLUDE_DIR=./include
SRC_DIR=./src
IMOVEL_DIR=./Imovel
CLIENTE_DIR=./Cliente

${TARGET}: ${BUILD_DIR}/Cliente.o ${BUILD_DIR}/Imovel.o ${BUILD_DIR}/Casa.o ${BUILD_DIR}/Apartamento.o ${BUILD_DIR}/Cobertura.o ${BUILD_DIR}/main.o
	${CC} ${CFLAGS} -o  ${TARGET} ${BUILD_DIR}/*.o

${BUILD_DIR}/Cliente.o: ${INCLUDE_DIR}/${CLIENTE_DIR}/Cliente.hpp ${SRC_DIR}/${CLIENTE_DIR}/Cliente.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/${CLIENTE_DIR}/ -c ${SRC_DIR}/${CLIENTE_DIR}/Cliente.cpp -o ${BUILD_DIR}/Cliente.o

${BUILD_DIR}/Imovel.o: ${INCLUDE_DIR}/${CLIENTE_DIR}/Cliente.hpp ${INCLUDE_DIR}/${IMOVEL_DIR}/Imovel.hpp ${SRC_DIR}/${IMOVEL_DIR}/Imovel.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/${IMOVEL_DIR}/ -I ${INCLUDE_DIR}/${CLIENTE_DIR}/ -c ${SRC_DIR}/${IMOVEL_DIR}/Imovel.cpp -o ${BUILD_DIR}/Imovel.o

${BUILD_DIR}/Casa.o: ${INCLUDE_DIR}/${CLIENTE_DIR}/Cliente.hpp ${INCLUDE_DIR}/${IMOVEL_DIR}/Casa.hpp ${SRC_DIR}/${IMOVEL_DIR}/Casa.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/${IMOVEL_DIR}/ -I ${INCLUDE_DIR}/${CLIENTE_DIR}/ -c ${SRC_DIR}/${IMOVEL_DIR}/Casa.cpp -o ${BUILD_DIR}/Casa.o

${BUILD_DIR}/Apartamento.o: ${INCLUDE_DIR}/${CLIENTE_DIR}/Cliente.hpp ${INCLUDE_DIR}/${IMOVEL_DIR}/Apartamento.hpp ${SRC_DIR}/${IMOVEL_DIR}/Apartamento.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/${IMOVEL_DIR}/ -I ${INCLUDE_DIR}/${CLIENTE_DIR}/ -c ${SRC_DIR}/${IMOVEL_DIR}/Apartamento.cpp -o ${BUILD_DIR}/Apartamento.o

${BUILD_DIR}/Cobertura.o: ${INCLUDE_DIR}/${CLIENTE_DIR}/Cliente.hpp ${INCLUDE_DIR}/${IMOVEL_DIR}/Cobertura.hpp ${SRC_DIR}/${IMOVEL_DIR}/Cobertura.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/${IMOVEL_DIR}/ -I ${INCLUDE_DIR}/${CLIENTE_DIR}/ -c ${SRC_DIR}/${IMOVEL_DIR}/Cobertura.cpp -o ${BUILD_DIR}/Cobertura.o

${BUILD_DIR}/main.o: ${INCLUDE_DIR}/${CLIENTE_DIR}/Cliente.hpp ${INCLUDE_DIR}/${IMOVEL_DIR}/Imovel.hpp ${INCLUDE_DIR}/${IMOVEL_DIR}/Casa.hpp ${INCLUDE_DIR}/${IMOVEL_DIR}/Apartamento.hpp ${INCLUDE_DIR}/${IMOVEL_DIR}/Cobertura.hpp ${SRC_DIR}/main.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/${IMOVEL_DIR}/ -I ${INCLUDE_DIR}/${CLIENTE_DIR}/ -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o