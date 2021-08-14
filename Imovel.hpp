#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using std::string;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

class Imovel {
    public:
        string _corretor;
        double _area;
        int _quartos;
        int _banheiros;
        int _vagas;
        double _valorm2;
        double _comissao;
        double _valor;
        Cliente _vendedor;
        double _porcComissao;
        int _taxa;
        
        double valor();

        double comissao();

        void print();
        
        Imovel(string, double, int, int, int, double, Cliente);
};

#endif
