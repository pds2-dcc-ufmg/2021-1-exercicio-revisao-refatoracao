#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    private:
        Cliente vendedor;
        string corretor;
    
    protected:
        Imovel(
            double area,
            int quartos,
            int banheiros,
            int vagas,
            double valor_m2,
            Cliente vendedor,
            string corretor
        );
        
        virtual double comissao();

        virtual double valor();
        
        double area;
        int quartos;
        int banheiros;
        int vagas;
        double valor_m2;
        double valor_total;
        double comissao_imovel;
    
    public:
        void print();
};

#endif