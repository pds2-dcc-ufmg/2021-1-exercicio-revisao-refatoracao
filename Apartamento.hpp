#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {
   
    private:

       double TX_APTO = 0.04;


    public:

       double valor() override;

       double comissao() override;

       void print() override;
};

#endif
