
CC=g++
TARGET=program

BUILD_DIR = ./build
SRC_DIR = ./src
INCLUDE_DIR = ./include

#Linkagem
${TARGET}: ${BUILD_DIR}/main.o ${BUILD_DIR}/Imovel.o ${BUILD_DIR}/Casa.o ${BUILD_DIR}/Apartamento.o ${BUILD_DIR}/Cobertura.o ${BUILD_DIR}/Cliente.o ${BUILD_DIR}/Relatorio.o
	${CC} ${BUILD_DIR}/*.o -o ${TARGET}

#Compilacao
${BUILD_DIR}/main.o: ${SRC_DIR}/main.cpp
	${CC} -I ${INCLUDE_DIR} -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o

${BUILD_DIR}/Imovel.o: ${SRC_DIR}/Imovel.cpp
	${CC} -I ${INCLUDE_DIR} -c ${SRC_DIR}/Imovel.cpp -o ${BUILD_DIR}/Imovel.o

${BUILD_DIR}/Casa.o: ${SRC_DIR}/Casa.cpp
	${CC} -I ${INCLUDE_DIR} -c ${SRC_DIR}/Casa.cpp -o ${BUILD_DIR}/Casa.o

${BUILD_DIR}/Apartamento.o: ${SRC_DIR}/Apartamento.cpp
	${CC} -I ${INCLUDE_DIR} -c ${SRC_DIR}/Apartamento.cpp -o ${BUILD_DIR}/Apartamento.o

${BUILD_DIR}/Cobertura.o: ${SRC_DIR}/Cobertura.cpp
	${CC} -I ${INCLUDE_DIR} -c ${SRC_DIR}/Cobertura.cpp -o ${BUILD_DIR}/Cobertura.o

${BUILD_DIR}/Cliente.o: ${SRC_DIR}/Cliente.cpp
	${CC} -I ${INCLUDE_DIR} -c ${SRC_DIR}/Cliente.cpp -o ${BUILD_DIR}/Cliente.o

${BUILD_DIR}/Relatorio.o: ${SRC_DIR}/Relatorio.cpp
	${CC} -I ${INCLUDE_DIR} -c ${SRC_DIR}/Relatorio.cpp -o ${BUILD_DIR}/Relatorio.o

#Clean
cleanall:
	rm ${BUILD_DIR}/*.o ${TARGET}

clean:
	rm ${BUILD_DIR}/*.o