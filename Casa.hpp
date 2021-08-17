#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

const double COMISSAO_CASA_TAXA = 0.06;//taxa de comissão para ganho do vendedor
const double COMISSAO_CASA_PERCENT = COMISSAO_CASA_TAXA*100; //comissão percentual para ganho do vendedor

class Casa : public Imovel {
    public:
    double valor() override;
    double comissao() override;
    void print();
	
	Casa(string corret,double a, int q, int b, int v, double valorm2,Cliente vended);
};

#endif