#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
        double area;
        double valorMetroQuadrado;
        double valorDeVenda;
        double valorDaComissao;

        int quartos;
        int banheiros;
        int vagasDeEstacionamento;

        Cliente vendedor;
        string corretor;

        void print() {
            cout << "[Vendedor]" << endl;
            vendedor.print();
            cout << "[Corretor]" << endl;
            cout << "  " + corretor << endl;
        }

        virtual double calculaValorDeVenda() { 
            valorDeVenda = area * valorMetroQuadrado;
            return valorDeVenda;
        }
        virtual double calculaValorDaComissao() {};
};

#endif