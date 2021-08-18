CC=g++
CFLAGS=-std=c++11 -Wall
TARGET= revisao

BUILD_DIR    = ./build
SRC_DIR    = ./src
INCLUDE_DIR  = ./include

${TARGET}: ${BUILD_DIR}/Imovel.o ${BUILD_DIR}/Apartamento.o ${BUILD_DIR}/Cobertura.o ${BUILD_DIR}/Casa.o ${BUILD_DIR}/Cliente.o ${BUILD_DIR}/revisao.o ${BUILD_DIR}/main.o
	${CC} ${CFLAGS} -o ${TARGET} ${BUILD_DIR}/*.o

${BUILD_DIR}/Imovel.o: ${INCLUDE_DIR}/Cliente/Cliente.hpp ${INCLUDE_DIR}/Imoveis/Imovel.hpp ${SRC_DIR}/Imoveis/Imovel.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/Cliente/ -I ${INCLUDE_DIR}/Imoveis/ -c ${SRC_DIR}/Imoveis/Imovel.cpp -o ${BUILD_DIR}/Imovel.o

${BUILD_DIR}/Apartamento.o: ${INCLUDE_DIR}/Cliente/Cliente.hpp ${INCLUDE_DIR}/Imoveis/Apartamento.hpp ${SRC_DIR}/Imoveis/Apartamento.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/Cliente/ -I ${INCLUDE_DIR}/Imoveis/ -c ${SRC_DIR}/Imoveis/Apartamento.cpp -o ${BUILD_DIR}/Apartamento.o

${BUILD_DIR}/Cobertura.o: ${INCLUDE_DIR}/Cliente/Cliente.hpp ${INCLUDE_DIR}/Imoveis/Cobertura.hpp ${SRC_DIR}/Imoveis/Cobertura.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/Cliente/ -I ${INCLUDE_DIR}/Imoveis/ -c ${SRC_DIR}/Imoveis/Cobertura.cpp -o ${BUILD_DIR}/Cobertura.o

${BUILD_DIR}/Casa.o: ${INCLUDE_DIR}/Cliente/Cliente.hpp ${INCLUDE_DIR}/Imoveis/Casa.hpp ${SRC_DIR}/Imoveis/Casa.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/Cliente/ -I ${INCLUDE_DIR}/Imoveis/ -c ${SRC_DIR}/Imoveis/Casa.cpp -o ${BUILD_DIR}/Casa.o

${BUILD_DIR}/Cliente.o: ${INCLUDE_DIR}/Cliente/Cliente.hpp ${SRC_DIR}/Cliente/Cliente.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/Cliente/ -c ${SRC_DIR}/Cliente/Cliente.cpp -o ${BUILD_DIR}/Cliente.o

${BUILD_DIR}/revisao.o: ${INCLUDE_DIR}/*/*.hpp ${SRC_DIR}/revisao/revisao.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/Cliente/ -I ${INCLUDE_DIR}/Imoveis/ -I ${INCLUDE_DIR}/revisao/ -c ${SRC_DIR}/revisao/revisao.cpp -o ${BUILD_DIR}/revisao.o

${BUILD_DIR}/main.o: ${INCLUDE_DIR}/*/*.hpp ${SRC_DIR}/main.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/Cliente/ -I ${INCLUDE_DIR}/Imoveis/ -I ${INCLUDE_DIR}/revisao/ -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o
