#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {
    
    public:
        Casa(string corretor, double area, int quartos, int banheiros, int vagas, double valor_m2, Cliente vendedor) {
            this->corretor = corretor;
            this->area = area;
            this->qtd_quartos = quartos;
            this->qtd_banheiros = banheiros;
            this->qtd_vagas = vagas;
            this->valor_m2 = valor_m2;
            this->vendedor = vendedor;
            this->taxa_comissao = 0.06;
        }

        void print() {
            std::cout << "[Casa]" << endl;
            Imovel::print();
        }
};

#endif