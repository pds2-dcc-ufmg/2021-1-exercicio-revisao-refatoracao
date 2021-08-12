#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {

    public: 
        double valor();
        double comissao();
        void print();

    private:
        const double kTaxaComissao = 0.04;
};

#endif