
CC=g++
TARGET=program

BUILD_DIR = ./build
SRC_DIR = ./src
INCLUDE_DIR = ./include

program: main.o Imovel.o Casa.o Apartamento.o Cobertura.o Cliente.o Relatorio.o
	g++ main.o Imovel.o Casa.o Apartamento.o Cobertura.o Cliente.o Relatorio.o -o program