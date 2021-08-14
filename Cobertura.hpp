#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Cobertura : public Imovel {
    
    public:
        Cobertura(string corretor, double area, int quartos, int banheiros, int vagas, double valor_m2, Cliente vendedor) {
            this->corretor = corretor;
            this->area = area;
            this->qtd_quartos = quartos;
            this->qtd_banheiros = banheiros;
            this->qtd_vagas = vagas;
            this->valor_m2 = valor_m2;
            this->vendedor = vendedor;
            this->taxa_comissao = 0.10;
        }
    
        void print() {
            std::cout << "[Cobertura]" << endl;
            Imovel::print();
        }
};

#endif