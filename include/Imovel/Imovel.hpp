#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    protected:
        double area, valorM2, valor, comissao;
        int Q, B, V;
        Cliente* vendedor;
        string corretor;

    public:
        double getArea();
        double getValorM2();
        double getValor();
        double getComissao();

        void setArea(double area);
        void setValorM2(double valorM2);
        void setValor(double valor);
        void setComissao(double comissao);

        double calcValor();
        double calcComissao(double pct);

        virtual void print() = 0;

        Imovel(double area, 
               double vm2, 
               int q, 
               int b, 
               int v, 
               string corretor, 
               Cliente* vendedor,
               double pctCorretagem) {
            this->area = area;
            this->valorM2 = vm2;
            this->comissao = this->calcComissao(pctCorretagem);
            this->valor = this->calcValor() + this->comissao;
            this->Q = q;
            this->B = b;
            this->V = v;
            this->corretor = corretor;
            this->vendedor = vendedor;
        }
};

#endif