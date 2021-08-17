COMPILER=g++
CCFLAGS=-std=c++17 -Wall

BUILD_DIR = ./build
INCLUDE_DIR = ./include
SRC_DIR = ./src

${BUILD_DIR}/app : ${BUILD_DIR}/Cliente.o ${BUILD_DIR}/Imovel.o ${BUILD_DIR}/main.o
	${COMPILER} ${CCFLAGS} -o ${BUILD_DIR}/app ${BUILD_DIR}/*.o

${BUILD_DIR}/Cliente.o : ${INCLUDE_DIR}/Cliente.hpp ${SRC_DIR}/entidades/Cliente.cpp
	${COMPILER} ${CCFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/entidades/Cliente.cpp -o ${BUILD_DIR}/Cliente.o

${BUILD_DIR}/Imovel.o : ${INCLUDE_DIR}/Imovel.hpp ${SRC_DIR}/entidades/Imovel.cpp
	${COMPILER} ${CCFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/entidades/Imovel.cpp -o ${BUILD_DIR}/Imovel.o

${BUILD_DIR}/main.o : ${INCLUDE_DIR}/*.hpp ${SRC_DIR}/main.cpp
	${COMPILER} ${CCFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o

clean:
	rm -f ${BUILD_DIR}/*
