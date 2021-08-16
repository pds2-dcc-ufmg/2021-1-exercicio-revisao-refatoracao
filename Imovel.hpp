#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
        double _area;
        int _quartos;
        int _banheiros;
        int _vagas;
        double _valor_m2;
        double _valor;
        double _comissao;
        Cliente _Vendedor;
        string _corretor;

        void Print() {
            cout << "[Vendedor]" << endl;
            _Vendedor.Print();
            cout << "[Corretor]" << endl;
            cout << "  " + _corretor << endl;
        }
};

#endif