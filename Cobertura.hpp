#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Cobertura : public Imovel {
    
    public:
        Cobertura(){
            this->taxa_comissao = 0.10;
            this->valor_comissao = getComissao();
            this->valor_venda = getValor() + valor_comissao;
        }
    
        void print() {
            std::cout << "[Cobertura]" << endl;
            Imovel::print();
        }
};

#endif