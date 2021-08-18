#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
    private:
        const double taxa = 0.10;

    
    public:
        Cobertura(string _corr, double _area, int _q, int _b, int _v, double _vrm2, Cliente _vndr);

        void print();
        double valor();
        double comissao();
};

#endif