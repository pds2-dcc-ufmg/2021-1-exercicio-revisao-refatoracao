#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
        Imovel(
            double area,
            int quartos,
            int banheiros,
            int vagas,
            double valor_m2,
            Cliente vendedor,
            string corretor
        ):
            area(area),
            quartos(quartos),
            banheiros(banheiros),
            vagas(vagas),
            valor_m2(valor_m2),
            comissao_imovel(comissao()),
            valor_total(valor()+comissao()),
            vendedor(vendedor),
            corretor(corretor){}
        
        double area;
        int quartos;
        int banheiros;
        int vagas;
        double valor_m2;
        double valor_total;
        double comissao_imovel;
        Cliente vendedor;
        string corretor;

        virtual double comissao();

        virtual double valor();

        void print() {
            cout << "[Vendedor]" << endl;
            vendedor.print();
            cout << "[Corretor]" << endl;
            cout << "  " + corretor << endl;
        }
};

#endif