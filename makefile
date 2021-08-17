CC=g++
CFLAGS=-std=c++11 -Wall
TARGET=app

BUILD_DIR=build
INCLUDE_DIR=include
SRC_DIR=src

${TARGET}: ${BUILD_DIR}/Apartamento.o ${BUILD_DIR}/Casa.o ${BUILD_DIR}/Cliente.o ${BUILD_DIR}/Cobertura.o ${BUILD_DIR}/Historico.o ${BUILD_DIR}/Imovel.o ${BUILD_DIR}/main.o
	${CC} ${CFLAGS} ${BUILD_DIR}/*.o -o ${TARGET}

${BUILD_DIR}/Apartamento.o: ${INCLUDE_DIR}/Apartamento.hpp ${BUILD_DIR}/Imovel.o
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/Apartamento.cpp -o ${BUILD_DIR}/Apartamento.o

${BUILD_DIR}/Casa.o: ${INCLUDE_DIR}/Casa.hpp ${SRC_DIR}/Casa.cpp ${BUILD_DIR}/Imovel.o
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/Casa.cpp -o ${BUILD_DIR}/Casa.o

${BUILD_DIR}/Cliente.o: ${INCLUDE_DIR}/Cliente.hpp ${SRC_DIR}/Cliente.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/Cliente.cpp -o ${BUILD_DIR}/Cliente.o

${BUILD_DIR}/Cobertura.o: ${INCLUDE_DIR}/Cobertura.hpp ${SRC_DIR}/Cobertura.cpp ${BUILD_DIR}/Imovel.o
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/Cobertura.cpp -o ${BUILD_DIR}/Cobertura.o

${BUILD_DIR}/Historico.o: ${INCLUDE_DIR}/Historico.hpp ${SRC_DIR}/Historico.cpp ${BUILD_DIR}/Apartamento.o ${BUILD_DIR}/Casa.o ${BUILD_DIR}/Cobertura.o
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/Historico.cpp -o ${BUILD_DIR}/Historico.o

${BUILD_DIR}/Imovel.o: ${INCLUDE_DIR}/Imovel.hpp ${SRC_DIR}/Imovel.cpp ${BUILD_DIR}/Cliente.o
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/Imovel.cpp -o ${BUILD_DIR}/Imovel.o

${BUILD_DIR}/main.o: ${INCLUDE_DIR}/Cliente.hpp ${SRC_DIR}/Cliente.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o

clean:
	rm -rf ${BUILD_DIR}/*.o
