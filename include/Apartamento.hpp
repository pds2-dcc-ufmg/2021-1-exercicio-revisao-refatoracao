#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"

class Apartamento : public Imovel {

public:
    Apartamento();
    Apartamento(const int&, const int&, const int&, const double&, const double&, const Cliente&, const string&);

    double valor_comissao() override;
    double valor_imovel_sem_comissao() override;
    double valor_total_venda() override;

    void print() override;

private: 
    const float taxa_comissao = 0.04;
};

#endif