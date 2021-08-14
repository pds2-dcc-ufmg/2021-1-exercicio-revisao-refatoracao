#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {

    public: 

        Apartamento(string corretor, double area, int quartos, int banheiros, int vagas, double valor_m2, Cliente vendedor) {
            this->corretor = corretor;
            this->area = area;
            this->qtd_quartos = quartos;
            this->qtd_banheiros = banheiros;
            this->qtd_vagas = vagas;
            this->valor_m2 = valor_m2;
            this->vendedor = vendedor;
            this->taxa_comissao = 0.04;
        }
    
        void print() {
            std::cout << "[Apartamento]" << endl;
            Imovel::print(); 
        }
};  

#endif