#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    public:

    /*retorna o valor da casa calculado pela variavel Valor_casa */

    double valor();
 
    /*calcula a comissao recebida pelo vendedor ao vender uma Casa a partir de
    seu valor definido pela variavel Valor_casa e da porcentagem relacionada a 
    essa venda, de 6% */

    double comissao();

    /*Imprime os valores relacionados à Casa*/

    void print();

    private:

    /*variavel que calcula o valor da casa a partir de sua area e o valor do metro quadrado*/

    double Valor_casa;

};

#endif
