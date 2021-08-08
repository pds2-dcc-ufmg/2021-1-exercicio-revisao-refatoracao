#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

/*
Super-classe que representa imóveis
*/
class Imovel {
    protected:
        // Propriedades do imóvel
        double area, valorM2, valor, comissao;
        // Quartos, banheiros e vagas
        int Q, B, V;
        // Cliente vendendo o imóvel
        Cliente* vendedor;
        // Nome do corretor
        string corretor;

    public:
        // Getters
        double getArea();
        double getValorM2();
        double getValor();
        double getComissao();
        // Setters
        void setArea(double area);
        void setValorM2(double valorM2);
        void setValor(double valor);
        void setComissao(double comissao);
        // Funções de cálculo de propriedades do imóvel
        double calcValor();
        double calcComissao(double pct);
        // Abstração de print
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