#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
        double area;
        int quartos;
        int banheiros;
        int vagas;
        double valorm2;
        double valorVenda = 0;
        double valorComissao = 0;
        Cliente* vendedor;
        string corretor;
		double valorTotal;

	protected:
		Imovel(double area, int quartos, int banheiros, int vagas, double valorm2, Cliente *vendedor, string corretor);
		void print() const;
};

#endif