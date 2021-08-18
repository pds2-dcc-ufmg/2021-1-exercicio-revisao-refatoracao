#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
    	//Instancia de variaveis e objetos que serao utilizados
        double area;
        int quartos;
        int banheiros;
        int vagas;
        double valor_m2;
        double valor_venda;
        double valor_com;
        string corretor;
        Cliente vendedor;

		//Dados do vendedor do imovel e nome do corretor
        void print() {
            cout << "[Vendedor]" << endl;
            vendedor.print();
            cout << "[Corretor]" << endl;
            cout << "  " + corretor << endl;
        }
};

#endif