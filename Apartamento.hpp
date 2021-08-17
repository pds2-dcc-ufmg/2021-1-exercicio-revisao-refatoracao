#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

const double COMISSAO_APARTAMENTO_TAXA = 0.04; //taxa de comissão para ganho do vendedor
const double COMISSAO_APARTAMENTO_PERCENT = COMISSAO_APARTAMENTO_TAXA*100; //comissão percentual para ganho do vendedor

class Apartamento : public Imovel {
    public: 
		double valor() override;
		double comissao() override;
		void print();
		Apartamento(string corret,double a, int q, int b, int v, double valorm2,Cliente vended);
};

#endif