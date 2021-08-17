#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {
    public: 
        Apartamento(double area, int quarto, int banheiro, int vagas, double valorm2, double valor, double comissao, Cliente vendedor, string corretor);
        Apartamento() = default;
        double valor();
        double comissao();
        void print();
};

#endif