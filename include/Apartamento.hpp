#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : private Imovel {
    private:
        const double taxa = 0.04;

    public: 
        Apartamento(string _corr, double _area, int _q, int _b, int _v, double _vrm2, Cliente _vndr);

        void print();
        double valor();
        double comissao();

};

#endif