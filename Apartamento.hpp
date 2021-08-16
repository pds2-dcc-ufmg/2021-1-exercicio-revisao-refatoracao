#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {

    public: 
    static constexpr double TAXA_COMISSAO_APARTAMENTO = 0.04;

    double calculaComissao();

    double calculaValorVenda();

    void print();

    Apartamento(double area, int quartos, int banheiros, 
                int vagas, double valorMetroQuadrado, 
                Cliente vendedor, string corretor);

};

#endif