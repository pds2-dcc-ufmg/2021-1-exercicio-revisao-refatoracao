CC=g++
CFLAGS=-std=c++11 -Wall
TARGET=vpl2

BUILD_DIR	 = ./build
SRC_DIR 	= ./src
INCLUDE_DIR 	= ./include

${TARGET}: ${BUILD_DIR}/cria_cliente.o  ${BUILD_DIR}/Cliente.o ${BUILD_DIR}/Casa.o ${BUILD_DIR}/Apartamento.o ${BUILD_DIR}/Cobertura.o  ${BUILD_DIR}/Imovel.o ${BUILD_DIR}/main.o
	${CC} ${CFLAGS} -o ${TARGET} ${BUILD_DIR}/*.o

${BUILD_DIR}/Cliente.o: ${INCLUDE_DIR}/Cliente.hpp ${SRC_DIR}/Cliente.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/Cliente.cpp -o ${BUILD_DIR}/Cliente.o 

${BUILD_DIR}/Casa.o: ${INCLUDE_DIR}/Cliente.hpp ${INCLUDE_DIR}/Imovel.hpp ${INCLUDE_DIR}/Casa.hpp ${SRC_DIR}/Casa.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/Casa.cpp -o ${BUILD_DIR}/Casa.o 

${BUILD_DIR}/Apartamento.o: ${INCLUDE_DIR}/Cliente.hpp ${INCLUDE_DIR}/Imovel.hpp ${INCLUDE_DIR}/Apartamento.hpp ${SRC_DIR}/Apartamento.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/Apartamento.cpp -o ${BUILD_DIR}/Apartamento.o 

${BUILD_DIR}/Cobertura.o: ${INCLUDE_DIR}/Cliente.hpp ${INCLUDE_DIR}/Imovel.hpp ${INCLUDE_DIR}/Cobertura.hpp ${SRC_DIR}/Cobertura.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/Cobertura.cpp -o ${BUILD_DIR}/Cobertura.o 

${BUILD_DIR}/Imovel.o: ${INCLUDE_DIR}/Imovel.hpp ${INCLUDE_DIR}/Cliente.hpp ${SRC_DIR}/Imovel.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/Imovel.cpp -o ${BUILD_DIR}/Imovel.o 

${BUILD_DIR}/cria_cliente.o: ${INCLUDE_DIR}/cria_cliente.hpp ${SRC_DIR}/cria_cliente.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/cria_cliente.cpp -o ${BUILD_DIR}/cria_cliente.o 

# ${BUILD_DIR}/cria_imovel.o: ${INCLUDE_DIR}/Imovel.hpp  ${INCLUDE_DIR}/Cliente.hpp ${INCLUDE_DIR}/Casa.hpp ${INCLUDE_DIR}/Cobertura.hpp ${INCLUDE_DIR}/Apartamento.hpp ${INCLUDE_DIR}/cria_imovel.hpp ${SRC_DIR}/cria_imovel.cpp
# 	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/cria_imovel.cpp -o ${BUILD_DIR}/cria_imovel.o 

${BUILD_DIR}/main.o: ${INCLUDE_DIR}/Casa.hpp ${INCLUDE_DIR}/Apartamento.hpp ${INCLUDE_DIR}/Cobertura.hpp  ${INCLUDE_DIR}/Cliente.hpp ${INCLUDE_DIR}/cria_cliente.hpp ${INCLUDE_DIR}/cria_imovel.hpp ${INCLUDE_DIR}/Imovel.hpp ${SRC_DIR}/main.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o 
	

# Rule for cleaning files generated during compilation. 
# Call 'make clean' to use it
clean:
	rm -f ${BUILD_DIR}/* 