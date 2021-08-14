#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;


class Imovel {
    public:
        void set_imovel(double areaImovel,int numeroQuartos, int numeroBanheiros 
        ,int numeroVagas, double valorM2,Cliente vendedor, string corretor);
        virtual string tipoImovel()=0;
        double valor();
        double comissao();
        virtual double taxaComissao()=0;
        void print();

    protected:
        double areaImovel_;
        int numeroQuartos_;
        int numeroBanheiros_;
        int numeroVagas_;
        double valorM2_;
        double valorImovel_;
        double valorComissao_;
        Cliente vendedor_;
        string corretor_;
        const double TRASFORMAR_EM_PROCENTAGEM = 0.01;
};

#endif