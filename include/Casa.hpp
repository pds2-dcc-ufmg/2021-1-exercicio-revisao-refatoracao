#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    public:

        //Caclula o valor da casa
        double valor() override;

        //Acessa o valor da taxa de comissão da casa
        double get_taxa_casa();

        //Calcula a comissão de acordo com o valor da casa
        double comissao();

        //Imprime na tela as informações da casa
        void print()override;

    private:

        //Valor da taxa de comissão da casa
        double taxa_casa = 0.06;

};

#endif