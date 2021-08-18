#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {

    public:

        double _area,_valorM2,_valorVenda, _valorComissao;
        int _quartos, _banheiros, _vagas, _taxa;
        Cliente _vendedor;
        string _corretor;

        void print(string lote) {
            cout << "[Vendedor]" << endl;
            _vendedor.print();
            cout << "[Corretor]" << endl;
            cout << "  " + _corretor << endl;
            cout << "[" << lote << "]" << endl;
            cout << "Area: " << _area << endl
                << "  Quartos: " << _quartos << endl
                << "  Banheiros: " << _banheiros << endl
                << "  Vagas: " << _vagas << endl
                << "Taxa de Comissão: " << _taxa << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << _valorComissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << _valorVenda << endl;
        }
};

#endif