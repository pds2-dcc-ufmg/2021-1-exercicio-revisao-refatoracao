#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {

    public:

        Imovel(double area, int quantQuartos, int quantBanheiros,
        int quantVagas, double valorm2, Cliente vendedor, string corretor, double taxaComissao): 
        _area(area), _quantQuartos(quantQuartos), _quantBanheiros(quantBanheiros),
        _quantVagas(quantVagas), _valorm2(valorm2), _vendedor(vendedor), _corretor(corretor), _taxaComissao(taxaComissao) {

            _valor = valor() + comissao();
            _comissao = comissao();

        }

        double valor() { return _area*_valorm2; }
        double comissao() { return valor()*_taxaComissao; }

        void print() {
            cout << "[Vendedor]" << endl;
            _vendedor.print();
            cout << "[Corretor]" << endl;
            cout << "  " + _corretor << endl;
        }

    protected:

        double _area;
        int _quantQuartos;
        int _quantBanheiros;
        int _quantVagas;
        double _valorm2;
        double _valor;
        double _comissao;
        Cliente _vendedor;
        string _corretor;

        double _taxaComissao;
};

#endif
