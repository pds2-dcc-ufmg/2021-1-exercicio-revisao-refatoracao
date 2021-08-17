#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
        double AREA;
        int QUARTOS;
        int BANHEIROS;
        int VAGAS;
        double VALORm2;
        double Valor;
        double COMISSAO;
        Cliente vendedor;
        string corretor;
        void print();
        Imovel(double area, int quarto, int banheiro, int vagas, double valorm2, double valor, 
               double comissao, Cliente* vendedor, string corretor);
        Imovel() = default;

};

#endif