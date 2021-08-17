#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
  public:
    Imovel(string _corretor, double a, int q, int b, int v, double _valorm2,Cliente _vendedor);
		virtual double valor()=0;
		virtual double comissao()=0;
    void print();
    double AREA;
    int NUM_QUARTOS;
    int NUM_BANHEIROS;
    int NUM_VAGAS;
    double VALORm2;
    double Valor;
    double valorComissao;
    Cliente vendedor;
    string corretor;
};

#endif