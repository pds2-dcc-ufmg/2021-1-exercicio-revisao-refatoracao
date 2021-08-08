#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
   public:
        static constexpr int TAXA_COMISSAO = 10;

        Cobertura(
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
            std::cout << "[Casa]" << endl;
            Imovel::print();
        };

};

#endif