#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {
  public: 
    Apartamento(string _corretor, double a, int q, int b, int v, double _valorm2, Cliente _vendedor);
    double txComissaoApartamento = 0.04;
		double valor() override;
		double comissao() override;
		void print();
};

#endif