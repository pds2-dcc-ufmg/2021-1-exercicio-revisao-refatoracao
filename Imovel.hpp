
#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    private:
        double area;
        int Q;//?
        int B;//?
        int V;//?
        double valorm2;
        double valor;
        double C;//?
        Cliente vendedor;
        string corretor;

    public:
        //imprime informacoes sobre vendedor e corretor
        void print();
};

#endif