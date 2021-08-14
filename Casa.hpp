#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {
    
    public:
        Casa(){
            this->taxa_comissao = 0.06;
            this->valor_comissao = getComissao();
            this->valor_venda = getValor() + valor_comissao;
        }

        void print() {
            std::cout << "[Casa]" << endl;
            Imovel::print();
        }
};

#endif