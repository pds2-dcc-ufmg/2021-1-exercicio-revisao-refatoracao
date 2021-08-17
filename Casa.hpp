#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {
    public:
        Casa(double area, int quarto, int banheiro, int vagas, double valorm2, double valor, double comissao, Cliente vendedor, string corretor);
        Casa() = default;
        double valor();
        double comissao();
        void print();
};

#endif