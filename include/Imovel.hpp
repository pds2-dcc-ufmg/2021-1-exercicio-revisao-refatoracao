#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
        Imovel( double area,
                int numeroQuartos,
                int numeroBanheiros,
                int numeroVagas,
                double valorMetroQuadrado,
                Cliente vendedor,
                string corretor):
                _area(area), 
                _numeroQuartos(numeroQuartos),
                _numeroBanheiros(numeroBanheiros),
                _numeroVagas(numeroVagas),
                _valorMetroQuadrado(valorMetroQuadrado),
                _vendedor(vendedor),
                _corretor(corretor) {}

        double calcularValorTotal();

        double calcularComissao();

        double calcularValorVenda();

    protected:
        double _area;
        int _numeroQuartos;
        int _numeroBanheiros;
        int _numeroVagas;
        double _valorMetroQuadrado;
        double _valorVenda;
        double _comissao;
        double _percentualComissao;
        Cliente _vendedor;
        string _corretor;

        void print() {
            cout << "[Vendedor]" << endl;
            _vendedor.print();
            cout << "[Corretor]" << endl;
            cout << "  " + _corretor << endl;
        }
};

#endif