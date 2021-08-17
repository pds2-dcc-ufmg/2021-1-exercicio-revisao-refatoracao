#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    private:

       double TX_CASA = 0.06;

    public:

       double valor();

       double comissao();

       void print();

};

#endif
