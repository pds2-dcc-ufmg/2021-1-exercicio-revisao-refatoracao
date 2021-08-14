in=./include
en=./src/entidades
bd=./build

all:main.out


./main.out: ${bd}/main.o ${bd}/Imovel.o ${bd}/Casa.o ${bd}/Cobertura.o ${bd}/Apartamento.o ${bd}/Cliente.o
	g++ -o main.out ${bd}/*.o

${bd}/main.o: ./src/main.cpp ${in}/Casa.hpp ${in}/Cobertura.hpp ${in}/Apartamento.hpp  ${in}/Cliente.hpp
	g++ -o ${bd}/main.o -I ${in}/ -c ./src/main.cpp

${bd}/Cliente.o: ${en}/Cliente.cpp ${in}/Cliente.hpp
	g++ -o ${bd}/Cliente.o -I ${in}/ -c ${en}/Cliente.cpp

${bd}/Imovel.o: ${en}/Imovel.cpp ${in}/Imovel.hpp
	g++ -o ${bd}/Imovel.o -I ${in}/ -c ${en}/Imovel.cpp

${bd}/Casa.o: ${en}/Casa.cpp ${in}/Casa.hpp
	g++ -o ${bd}/Casa.o -I ${in}/ -c ${en}/Casa.cpp

${bd}/Cobertura.o: ${en}/Cobertura.cpp ${in}/Cobertura.hpp
	g++ -o ${bd}/Cobertura.o -I ${in}/ -c ${en}/Cobertura.cpp

${bd}/Apartamento.o: ${en}/Apartamento.cpp ${in}/Apartamento.hpp
	g++ -o ${bd}/Apartamento.o -I ${in}/ -c ${en}/Apartamento.cpp



clean:
	cd ${bd} && rm *.o
	rm ./main.out