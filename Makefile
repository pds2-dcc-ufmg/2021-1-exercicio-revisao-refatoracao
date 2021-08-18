CC=g++
CFLAGS=-std=c++11 -Wall
TARGET=teste

BUILD_DIR    = ./build
SRC_DIR    = ./src
HEADERS_DIR  = ./headers

${TARGET}: ${BUILD_DIR}/Cliente.o ${BUILD_DIR}/Cobertura.o ${BUILD_DIR}/Casa.o ${BUILD_DIR}/Apartamento.o ${BUILD_DIR}/Imovel.o ${BUILD_DIR}/main.o
	${CC} ${CFLAGS} -o ${TARGET} ${BUILD_DIR}/*.o

${BUILD_DIR}/Cobertura.o: ${HEADERS_DIR}/Cobertura.hpp ${SRC_DIR}/Cobertura.cpp
	${CC} ${CFLAGS} -I ${HEADERS_DIR} -c ${SRC_DIR}/Cobertura.cpp -o ${BUILD_DIR}/Cobertura.o

${BUILD_DIR}/Casa.o: ${HEADERS_DIR}/Casa.hpp ${SRC_DIR}/Casa.cpp
	${CC} ${CFLAGS} -I ${HEADERS_DIR} -c ${SRC_DIR}/Casa.cpp -o ${BUILD_DIR}/Casa.o

${BUILD_DIR}/Apartamento.o: ${HEADERS_DIR}/Apartamento.hpp ${SRC_DIR}/Apartamento.cpp
	${CC} ${CFLAGS} -I ${HEADERS_DIR} -c ${SRC_DIR}/Apartamento.cpp -o ${BUILD_DIR}/Apartamento.o

${BUILD_DIR}/Cliente.o: ${HEADERS_DIR}/Cliente.hpp ${SRC_DIR}/Cliente.cpp
	${CC} ${CFLAGS} -I ${HEADERS_DIR} -c ${SRC_DIR}/Cliente.cpp -o ${BUILD_DIR}/Cliente.o
	
${BUILD_DIR}/Cliente.o: ${HEADERS_DIR}/Cliente.hpp ${SRC_DIR}/Cliente.cpp
	${CC} ${CFLAGS} -I ${HEADERS_DIR} -c ${SRC_DIR}/Cliente.cpp -o ${BUILD_DIR}/Cliente.o

${BUILD_DIR}/Imovel.o: ${HEADERS_DIR}/Imovel.hpp ${SRC_DIR}/Imovel.cpp
	${CC} ${CFLAGS} -I ${HEADERS_DIR} -c ${SRC_DIR}/Imovel.cpp -o ${BUILD_DIR}/Imovel.o

${BUILD_DIR}/main.o: ${HEADERS_DIR}/Cliente.hpp ${HEADERS_DIR}/Apartamento.hpp ${HEADERS_DIR}/Casa.hpp ${HEADERS_DIR}/Cobertura.hpp ${HEADERS_DIR}/Imovel.hpp ${SRC_DIR}/main.cpp
	${CC} ${CFLAGS} -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o

clean:
	rm -f ${BUILD_DIR}/* 
