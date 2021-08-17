#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {


    public: 
    
        //Calcula o valor do apartamento
        double valor() override;
        
        //Acessa a taxa de comissão do apartamento
        double get_taxa_apartamento();

        //Calcula a comissão de acordo com o valor do apartamento
        double comissao(); 

        //Imprime na tela as informações do apartamento
        void print() override;


    private:

        //Valor da taxa de comissão do apartamento
        double taxa_apartamento = 0.04;

};

#endif