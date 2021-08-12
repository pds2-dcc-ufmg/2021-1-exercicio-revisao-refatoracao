#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
        Imovel();
        Imovel(string corretor, double area, int quartos, int banheiros, int vagas, 
               double  valor_por_metro_quadrado, Cliente vendedor);
        void print();
        double valor();
        double comissao();
    
    protected:
        double taxa_de_comissao_, area_, valor_por_metro_quadrado_, valor_de_venda_, valor_da_comissao_;
        int quartos_, banheiros_, vagas_;
        Cliente vendedor_;
        string corretor_;
};

#endif