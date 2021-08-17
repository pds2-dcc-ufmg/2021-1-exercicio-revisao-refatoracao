#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    protected:
        double area, valorM2, comissao;
        int quartos, banheiros, vagas;
        Cliente vendedor;
        string corretor;

    public:

        Imovel(string _corretor, double _area, double _valorM2, int _quartos, int _banheiros, int _vagas,
                Cliente _vendedor, double _comissao);

        double calcularValor();
        double calcularComissao();

        void print();

};

#endif