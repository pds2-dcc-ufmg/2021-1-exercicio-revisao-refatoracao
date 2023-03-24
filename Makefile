#https://www.gnu.org/software/make/manual/html_node/Automatic-Variables.html

#CXX is the program I am using to compile
CXX=g++

#CPPFLAGS are the flags for my compiling program
#O -Wall impede que o programa compile se tiver alguns warning (específicos)
CPPFLAGS=-std=c++11 -Wall

TARGET=program

#auxiliary directories
#where the binary file is going to be placed
BUILD_DIR=build

#where the .cpp are going to be
SRC_DIR=src

#all the .hpp file are going to be
INCLUDE_DIR=include

ENTIDADES_DIR=src/entidades

#the executable that is created from the object files (final target)
${BUILD_DIR}/${TARGET}: $(BUILD_DIR)/Apartamento.o $(BUILD_DIR)/Casa.o $(BUILD_DIR)/Cliente.o $(BUILD_DIR)/Cobertura.o $(BUILD_DIR)/main.o
	${CXX} ${CPPFLAGS} -o $@ $^

#each object file is created in a specific target (this allows the object file be compiled separately)
${BUILD_DIR}/Apartamento.o: ${ENTIDADES_DIR}/Apartamento.cpp ${INCLUDE_DIR}/Apartamento.hpp
	${CXX} ${CPPFLAGS} -I ${INCLUDE_DIR} -c $< -o $@

${BUILD_DIR}/Casa.o: ${ENTIDADES_DIR}/Casa.cpp ${INCLUDE_DIR}/Casa.hpp
	${CXX} ${CPPFLAGS} -I ${INCLUDE_DIR} -c $< -o $@

${BUILD_DIR}/Cliente.o: ${ENTIDADES_DIR}/Cliente.cpp ${INCLUDE_DIR}/Cliente.hpp
	${CXX} ${CPPFLAGS} -I ${INCLUDE_DIR} -c $< -o $@

${BUILD_DIR}/Cobertura.o: ${ENTIDADES_DIR}/Cobertura.cpp ${INCLUDE_DIR}/Cobertura.hpp
	${CXX} ${CPPFLAGS} -I ${INCLUDE_DIR} -c $< -o $@

${BUILD_DIR}/main.o: ${SRC_DIR}/main.cpp ${INCLUDE_DIR}/Apartamento.hpp ${INCLUDE_DIR}/Casa.hpp ${INCLUDE_DIR}/Cliente.hpp ${INCLUDE_DIR}/Cobertura.hpp ${INCLUDE_DIR}/Imovel.hpp
	${CXX} ${CPPFLAGS} -I ${INCLUDE_DIR} -c $< -o $@

#it cleans all the binary files
clean:
	@echo "Clearing..."
	-rm -f $(BUILD_DIR)/*
