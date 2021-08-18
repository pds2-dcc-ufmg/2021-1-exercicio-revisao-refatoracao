#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    
    public:
        double AREA;
        int Quartos;
        int Banheiros;
        int Vagas;
        double VALORm2;
        double Valor;
        double Comissao;
        Cliente vendedor;
        string corretor;

        double valor();
        virtual void print();

};

#endif