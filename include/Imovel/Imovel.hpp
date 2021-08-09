#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel 
{
    public:
        virtual void print() = 0;

        Imovel();

        void setArea(double area);
        void setQuartos(int quartos);
        void setBanheiros(int banheiros);
        void setVagas(int vagas);
        void setValor_M2(double valor_m2);
        void setVendedor(Cliente vendedor);
        void setCorretor(string corretor);

        double getArea();
        int getQuartos();
        int getBanheiros();
        int getVagas();
        double getValor_M2();
        Cliente getVendedor();
        string getCorretor();

        double valor();
        virtual double comissao() = 0;

    protected:
        double _area;
        int _quartos;
        int _banheiros;
        int _vagas;
        double _valor_m2;
        Cliente _vendedor;
        string _corretor;
};

#endif