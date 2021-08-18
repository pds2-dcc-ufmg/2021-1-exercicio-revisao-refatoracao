CC=g++
CFLAGS=-std=c++11 -Wall
TARGET=vpl_execution

BUILD_DIR    = ./build

${BUILD_DIR}/${TARGET}: ${BUILD_DIR}/Apartamento.o ${BUILD_DIR}/Casa.o ${BUILD_DIR}/Cliente.o ${BUILD_DIR}/Cobertura.o ${BUILD_DIR}/Imovel.o ${BUILD_DIR}/main.o
	${CC} ${CFLAGS} -o ${TARGET} ${BUILD_DIR}/*.o

${BUILD_DIR}/Apartamento.o: Apartamento.hpp Apartamento.cpp
	${CC} ${CFLAGS} -I -c Apartamento.cpp -o ${BUILD_DIR}/Apartamento.o
  
${BUILD_DIR}/Casa.o: Casa.hpp Casa.cpp
	${CC} ${CFLAGS} -I -c Casa.cpp -o ${BUILD_DIR}/Casa.o

${BUILD_DIR}/Cliente.o: Cliente.hpp Cliente.cpp
	${CC} ${CFLAGS} -I -c Cliente.cpp -o ${BUILD_DIR}/Cliente.o

${BUILD_DIR}/Cobertura.o: Cobertura.hpp Cobertura.cpp
	${CC} ${CFLAGS} -I -c Cobertura.cpp -o ${BUILD_DIR}/Cobertura.o

${BUILD_DIR}/Imovel.o: Imovel.hpp Imovel.cpp
	${CC} ${CFLAGS} -I -c Imovel.cpp -o ${BUILD_DIR}/Imovel.o

${BUILD_DIR}/main.o: Apartamento.hpp Casa.hpp Cliente.hpp Cobertura.hpp Imovel.hpp main.cpp
	${CC} ${CFLAGS} -I -c main.cpp -o ${BUILD_DIR}/main.o

# Rule for cleaning files generated during compilation. 
# Call 'make clean' to use it
clean:
	rm -f *  
