#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {

    public: 
        Apartamento(){
            this->taxa_comissao = 0.04;
            this->valor_comissao = getComissao();
            this->valor_venda = getValor() + valor_comissao;
        }
    
        void print() {
            std::cout << "[Apartamento]" << endl;
            Imovel::print(); 
        }
};  

#endif