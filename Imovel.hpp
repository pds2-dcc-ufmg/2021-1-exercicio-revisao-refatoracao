#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using std::fixed;
using std::setprecision;

class Imovel {

    public:
        double calculaValor();
        virtual void print() {}

        virtual void setArea(double input);
        void setNumeroDeQuartos(int input);
        void setNumeroDeBanheiros(int input);
        void setNumeroDeVagas(int input);
        void setValorMetro(double input);

        double getArea();
        int getNumeroDeQuartos();
        int getNumeroDeBanheiros();
        int getNumeroDeVagas();
        double getValorMetro();
        double getComissao();
        double getValorDeVenda();
        double calculaComissao();

        Cliente vendedor;
        string corretor; 

    protected:

        double area;
        int numeroDeQuartos;
        int numeroDeBanheiros;
        int numeroDeVagas;
        double valorMetro;
        double valorDeVenda;
        double comissao;

    
};

class Cobertura : public Imovel {
    public:

    Cobertura::Cobertura(){
        comissao = 0.10;
    }

    void print() override {}
};

class Casa : public Imovel {
    public:

    Casa::Casa(){
        comissao = 0.06;
    }

    void print() override {}
};

class Apartamento : public Imovel {
    public: 

    Apartamento::Apartamento() {
        comissao = 0.04;
    }

    void print() override {}
};

#endif