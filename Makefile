CC=g++ -g
TARGET=prog

SRC_DIR=./src
SRC_C_DIR=./src/Cliente
SRC_I_DIR=./src/Imovel
INC_DIR=./include
BLD_DIR=./build

${TARGET}: ${BLD_DIR}/main.o ${BLD_DIR}/Cliente.o ${BLD_DIR}/Imovel.o ${BLD_DIR}/Cobertura.o ${BLD_DIR}/Casa.o ${BLD_DIR}/Apartamento.o
	${CC} -o ${TARGET} ${BLD_DIR}/*.o



${BLD_DIR}/Cliente.o: ${SRC_C_DIR}/Cliente.cpp ${INC_DIR}/Cliente/Cliente.hpp
	${CC} -I ${INC_DIR}/Cliente/ -c ${SRC_C_DIR}/Cliente.cpp -o ${BLD_DIR}/Cliente.o



${BLD_DIR}/Imovel.o: ${SRC_I_DIR}/Imovel.cpp ${INC_DIR}/Imovel/Imovel.hpp ${INC_DIR}/Cliente/Cliente.hpp
	${CC} -I ${INC_DIR}/Imovel/ -I ${INC_DIR}/Cliente/ -c ${SRC_I_DIR}/Imovel.cpp -o ${BLD_DIR}/Imovel.o

${BLD_DIR}/Cobertura.o: ${SRC_I_DIR}/Cobertura.cpp ${INC_DIR}/Imovel/Cobertura.hpp ${INC_DIR}/Cliente/Cliente.hpp
	${CC} -I ${INC_DIR}/Imovel/ -I ${INC_DIR}/Cliente/ -c ${SRC_I_DIR}/Cobertura.cpp -o ${BLD_DIR}/Cobertura.o

${BLD_DIR}/Casa.o: ${SRC_I_DIR}/Casa.cpp ${INC_DIR}/Imovel/Casa.hpp ${INC_DIR}/Cliente/Cliente.hpp
	${CC} -I ${INC_DIR}/Imovel/ -I ${INC_DIR}/Cliente/ -c ${SRC_I_DIR}/Casa.cpp -o ${BLD_DIR}/Casa.o

${BLD_DIR}/Apartamento.o: ${SRC_I_DIR}/Apartamento.cpp ${INC_DIR}/Imovel/Apartamento.hpp ${INC_DIR}/Cliente/Cliente.hpp
	${CC} -I ${INC_DIR}/Imovel/ -I ${INC_DIR}/Cliente/ -c ${SRC_I_DIR}/Apartamento.cpp -o ${BLD_DIR}/Apartamento.o



${BLD_DIR}/main.o: ${SRC_DIR}/main.cpp ${INC_DIR}/Cliente/*.hpp ${INC_DIR}/Imovel/*.hpp
	${CC} -I ${INC_DIR}/Imovel/ -I ${INC_DIR}/Cliente/  -c ${SRC_DIR}/main.cpp -o ${BLD_DIR}/main.o

clean:
	rm ${BLD_DIR}/*