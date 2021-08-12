#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    public:

        double valor();

        double comissao();

        double comissaoCasa = 0.06;

        void print();

};

#endif