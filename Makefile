CC     = g++
CFLAGS = -std=c++11 -Wall
TARGET = main

BUILD_DIR   = ./build
SRC_DIR     = ./src
INCLUDE_DIR = ./include

all: ${TARGET}

${BUILD_DIR}/Cliente.o: ${INCLUDE_DIR}/pessoa/Cliente.hpp ${SRC_DIR}/pessoa/Cliente.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/pessoa/ -c ${SRC_DIR}/pessoa/Cliente.cpp -o ${BUILD_DIR}/Cliente.o

${BUILD_DIR}/Imovel.o: ${INCLUDE_DIR}/imovel/Imovel.hpp ${SRC_DIR}/imovel/Imovel.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/imovel/ -I ${INCLUDE_DIR}/pessoa/ -c ${SRC_DIR}/imovel/Imovel.cpp -o ${BUILD_DIR}/Imovel.o

${BUILD_DIR}/Apartamento.o: ${INCLUDE_DIR}/imovel/Apartamento.hpp ${SRC_DIR}/imovel/Apartamento.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/imovel/ -I ${INCLUDE_DIR}/pessoa/ -c ${SRC_DIR}/imovel/Apartamento.cpp -o ${BUILD_DIR}/Apartamento.o

${BUILD_DIR}/Casa.o: ${INCLUDE_DIR}/imovel/Casa.hpp ${SRC_DIR}/imovel/Casa.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/imovel/ -I ${INCLUDE_DIR}/pessoa/ -c ${SRC_DIR}/imovel/Casa.cpp  -o ${BUILD_DIR}/Casa.o

${BUILD_DIR}/Cobertura.o: ${INCLUDE_DIR}/imovel/Cobertura.hpp ${SRC_DIR}/imovel/Cobertura.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/imovel/ -I ${INCLUDE_DIR}/pessoa/ -c ${SRC_DIR}/imovel/Cobertura.cpp -o ${BUILD_DIR}/Cobertura.o

${BUILD_DIR}/main.o: ${SRC_DIR}/main.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/imovel/ -I ${INCLUDE_DIR}/pessoa/ -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o

${TARGET}: ${BUILD_DIR}/Cliente.o  ${BUILD_DIR}/main.o ${BUILD_DIR}/Imovel.o ${BUILD_DIR}/Apartamento.o ${BUILD_DIR}/Casa.o ${BUILD_DIR}/Cobertura.o
	${CC} ${CFLAGS} -o ${TARGET} ${BUILD_DIR}/*.o

# Rule for cleaning files generated during compilation. 
# Call 'make clean' to use it
clean:
	rm -f ${BUILD_DIR}/*