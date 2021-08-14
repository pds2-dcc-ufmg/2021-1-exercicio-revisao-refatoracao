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
            this->numQuartos = quartos;
            this->numBanheiros = banheiros;
            this->numVagas = vagas;
            this->valorM2 = valor_m2;
            this->vendedor = vendedor;
            this->taxaComissao = 0.04;
            this->valorVenda = area*valorM2;
            this->valorComissao = area*valorM2*taxaComissao;
        }
    
        void print() {
            std::cout << "[Apartamento]" << endl;
            Imovel::print(); 
        }
};  

#endif