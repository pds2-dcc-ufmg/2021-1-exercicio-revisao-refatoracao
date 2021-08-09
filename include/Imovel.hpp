#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
    Imovel(){}

    double calcularValorTotal() {
        return area * valorMetroQuadrado;
    }

    double calcularComissao() {
        return area * valorMetroQuadrado * percentualComissao;
    }

    double calcularValorVenda() {
        return this->calcularValorTotal()+this->calcularComissao();
    }

        double area;
        int numeroQuartos;
        int numeroBanheiros;
        int numeroVagas;
        double valorMetroQuadrado;
        double valorVenda;
        double comissao;
        double percentualComissao;
        Cliente vendedor;
        string corretor;

        void print() {
            cout << "[Vendedor]" << endl;
            vendedor.print();
            cout << "[Corretor]" << endl;
            cout << "  " + corretor << endl;
        }
};

#endif