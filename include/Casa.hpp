#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    public:
        double valor();
        double comissao();
        void print();

    private:
        const double kTaxaComissao = 0.06;

};

#endif