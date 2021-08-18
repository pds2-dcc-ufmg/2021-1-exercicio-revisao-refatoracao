#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : private Imovel {
    private:
        const double taxa = 0.06;

    public:
        Casa(string _corr, double _area, int _q, int _b, int _v, double _vrm2, Cliente _vndr);

        void print();
        double valor();
        double comissao();

};

#endif