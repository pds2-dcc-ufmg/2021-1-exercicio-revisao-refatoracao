#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    private:
        string corretor;
        double AREA;
        int Quartos;
        int Banheiros;
        int VagasNaGaragem;
        double VALORm2;
        Cliente vendedor;
    protected:
        double C;
        double Valor;
    public:
        Imovel();
        Imovel(string corretor, double area, int quartos, int banheiros, int vagasnagaragem, double valorm2, Cliente vendedor);
        ~Imovel();
        double getArea();
        int getQuartos();
        int getBanheiros();
        int getVagasnagaragem();
        double getValorm2();
        double getValor();
        double getC();
        Cliente getVendedor();
        string getCorretor();
        virtual void print();
        virtual double valor()=0;
        virtual double comissao()=0;
};

#endif