#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    
    public:

        void print();

        void setArea(double);

        void setQ(int);

        void setB(int);

        void setV(int);

        void setValorm2(double);

        void setValor(double);

        void setC(double);

        void setVendedor(Cliente);

        void setCorretor(string);

        double getArea();

        int getQ();

        int getV();

        int getB();

        double getValorm2();

        double getValor();

        double getC();

        Cliente getVendedor();

        string getCorretor();

    private:

        double area;

        int Q;

        int B;

        int V;

        double valorm2;

        double Valor;

        double C;

        Cliente vendedor;

        string corretor;

};

#endif