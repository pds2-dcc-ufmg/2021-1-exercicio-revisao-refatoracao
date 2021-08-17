#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

const double COMISSAO_COBERTURA_TAXA = 0.10;//taxa de comissão para ganho do vendedor
const double  COMISSAO_COBERTURA_PERCENT = COMISSAO_COBERTURA_TAXA*100; //comissão percentual para ganho do vendedor

class Cobertura : public Imovel {
    public:
    double valor() override;
    double comissao() override;
    void print();

	Cobertura(string corret,double a, int q, int b, int v, double valorm2,Cliente vended);
};

#endif