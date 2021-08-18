#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
        Imovel(string corretor,
            double area,
            int qtdQuartos,
            int qtdBanheiros,
            int qtdVagas,
            double valorMetro2,
            Cliente vendedor):
            _area(area),
            _qtdQuartos(qtdQuartos),
            _qtdBanheiros(qtdBanheiros),
            _qtdVagas(qtdVagas),
            _valorMetro2(valorMetro2),
            _vendedor(vendedor),
            _corretor(corretor) {}
        
        double valor();

        double comissao();

        void print();

        protected:

            double _area;
            int _qtdQuartos;
            int _qtdBanheiros;
            int _qtdVagas;
            double _valorMetro2;
            double _valor;
            Cliente _vendedor;
            string _corretor;
            double _taxaComissao;
            double _porcentagemComissao;
};

#endif