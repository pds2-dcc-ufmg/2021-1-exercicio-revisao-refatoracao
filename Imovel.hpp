#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    protected:
        double AREA;
        int Q;
        int B;
        int V;
        double VALOR_m2;
        double VALOR;
        double C;
        Cliente VENDEDOR;
        string CORRETOR;

	public:
		virtual double valor()=0;				//Retorna o valor total do imóvel
		virtual double comissao()=0;			//Retorna o valor comissionado ao vendedor
        void print();							//Imprime dados do gerais do vendedor e corretor
		Imovel(string corret,double a, int q, int b, int v, double valorm2,Cliente vended); //Construtor padrão de imóveis
};

#endif