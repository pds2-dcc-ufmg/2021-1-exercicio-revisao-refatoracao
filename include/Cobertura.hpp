#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
    
    public:

        //Calcula o valor da cobertura
        double valor() override;

        //Acessa a taxa de comissão da cobertura
        double get_taxa_cobertura();

        //Calcula a comissão de acordo com o valor da cobertura
        double comissao();

        //Imprime na tela as informações da cobertura
        void print() override;

    private:

        //Valor da taxa de comissão da cobertura
        double taxa_cobertura = 0.10;

};



#endif