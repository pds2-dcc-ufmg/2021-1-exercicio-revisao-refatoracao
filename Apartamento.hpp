#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {

    public: 
    
    /*retorna o valor do apartamento calculado pela variavel Valor_apartamento */

    double valor();

    /*calcula a comissao recebida pelo vendedor ao vender um Apartamento a partir de
    seu valor definido pela variavel Valor_apartamento e da porcentagem relacionada a 
    essa venda, de 4% */

    double comissao();

    /*Imprime os valores relacionados ao Apartamento*/

    void print();

    private:

    /*variavel que calcula o valor do apartamento a partir de sua area e o valor do metro quadrado*/
    
    double Valor_apartamento;
    
}; 

#endif
