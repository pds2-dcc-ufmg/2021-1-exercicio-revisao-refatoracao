#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    public:
    static constexpr double TAXA_COMISSAO_CASA = 0.06;

    double calculaComissao();

    double calculaValorVenda();

    void print();

    Casa(double area, int quartos, int banheiros, 
        int vagas, double valorMetroQuadrado, 
        Cliente vendedor, string corretor);

};

#endif