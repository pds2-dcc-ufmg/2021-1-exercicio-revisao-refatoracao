#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Models/Imovel/Imovel.hpp"
#include "Models/Pessoa/Pessoa.hpp"

using namespace std;

class Apartamento : public Imovel {

    public:
    double TAXA_COMISSAO = 0.4;

    double getTaxaComissao() override;

    void print() override;
};

#endif