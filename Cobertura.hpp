#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {

    public:
    static constexpr double TAXA_COMISSAO_COBERTURA = 0.10;

    double calculaComissao();

    double calculaValorVenda();

    void print();

    Cobertura(double area, int quartos, int banheiros, int vagas, 
            double valorMetroQuadrado, Cliente vendedor, string corretor);
};

#endif