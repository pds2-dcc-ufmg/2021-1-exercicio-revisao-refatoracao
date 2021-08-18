#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    public:

    double valor () override;

    double comissao() override;

    void print() override;

    private:
    double txa_comissao_casa = 0.06;

};


#endif
