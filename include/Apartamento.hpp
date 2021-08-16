#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"

class Apartamento : public Imovel {

public:
    Apartamento();
    Apartamento(const int&, const int&, const int&, const double&, const double&, const Cliente&, const string&);
    // Função para o cálculo do valor a ser pago de comissão ao corretor
    double valor_comissao() override;
    // Função para o cálculo do imóvel sem constar a comissão do corretor
    double valor_imovel_sem_comissao() override;
    // Função para o cálculo do valor total a ser pago no imóvel
    double valor_total_venda() override;
    // Função para printar informações essenciais a respeito do imóvel, como o valor total a ser pago, número de cômodos e etc
    void print() override;


private: 
    const float taxa_comissao = 0.04;
};

#endif