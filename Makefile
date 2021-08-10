CC     = g++
CFLAGS = -std=c++11 -Wall
TARGET = main.exe

BUILD_DIR   = ./build
SRC_DIR     = ./src
INCLUDE_DIR = ./include

all: ${TARGET}

${BUILD_DIR}/Cliente.o: ${INCLUDE_DIR}/Cliente.hpp ${SRC_DIR}/Cliente.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/Cliente.cpp -o ${BUILD_DIR}/Cliente.o

${BUILD_DIR}/Imovel.o: ${INCLUDE_DIR}/Imovel.hpp ${INCLUDE_DIR}/Cliente.hpp ${SRC_DIR}/Cliente.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${INCLUDE_DIR}/Imovel.hpp -o ${BUILD_DIR}/Imovel.o

${BUILD_DIR}/Apartamento.o: ${INCLUDE_DIR}/Imovel.hpp ${INCLUDE_DIR}/Apartamento.hpp ${INCLUDE_DIR}/Cliente.hpp ${SRC_DIR}/Cliente.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${INCLUDE_DIR}/Apartamento.hpp -o ${BUILD_DIR}/Apartamento.o

${BUILD_DIR}/Casa.o: ${INCLUDE_DIR}/Imovel.hpp ${INCLUDE_DIR}/Casa.hpp ${INCLUDE_DIR}/Cliente.hpp ${SRC_DIR}/Cliente.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${INCLUDE_DIR}/Casa.hpp  -o ${BUILD_DIR}/Casa.o

${BUILD_DIR}/Cobertura.o: ${INCLUDE_DIR}/Cobertura.hpp ${INCLUDE_DIR}/Cliente.hpp ${SRC_DIR}/Cliente.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${INCLUDE_DIR}/Cobertura.hpp -o ${BUILD_DIR}/Cobertura.o

${BUILD_DIR}/main.o: ${INCLUDE_DIR}/Cliente.hpp ${INCLUDE_DIR}/Imovel.hpp ${INCLUDE_DIR}/Apartamento.hpp ${INCLUDE_DIR}/Casa.hpp ${INCLUDE_DIR}/Cobertura.hpp ${SRC_DIR}/main.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o

${TARGET}: ${BUILD_DIR}/Cliente.o  ${BUILD_DIR}/main.o
	${CC} ${CFLAGS} -o ${TARGET} ${BUILD_DIR}/main.o ${BUILD_DIR}/Cliente.o

# Rule for cleaning files generated during compilation. 
# Call 'make clean' to use it
clean:
	rm -f ${BUILD_DIR}/*