#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    
    public:
        double Area;
        int Quartos;
        int Banheiros;
        int Vagas;
        double Valorm2;
        double Valor;
        double Comissao;
        Cliente vendedor;
        string corretor;

        double valor();
        virtual void print();

};

#endif