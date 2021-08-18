#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    
    public:
    
    double AREA;
    int Qnt_Quartos;
    int Qnt_Banheiros;
    int Qnt_Vagas;
    double VALORm2;
    double Valor;
    double Valor_Comissao;
    virtual double valor()=0;
		virtual double comissao()=0;
    void print();
    Cliente vendedor;
    string corretor;
};

#endif
