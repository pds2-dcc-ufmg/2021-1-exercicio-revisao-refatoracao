#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {
    public: 
        static constexpr int TAXA_COMISSAO = 4;

        Apartamento(
            string corretor,
            double area,
            int qtdQuarto,
            int qtdBanheiro,
            int qtdVaga,
            double valorM2,
            Cliente vendedor
        ) : Imovel(
            corretor,
            area,
            qtdQuarto,
            qtdBanheiro,
            qtdVaga,
            valorM2,
            TAXA_COMISSAO,
            vendedor
        ) {}

        void print() {
            std::cout << "[Apartamento]" << endl;
            Imovel::print();
        }
};

#endif