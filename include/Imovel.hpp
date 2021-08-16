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
        virtual ~Imovel() {}
        double calcularValorTotal();
        double calcularComissao();
        double calcularValorVenda();
        void print();

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
        string _nome;
};

#endif