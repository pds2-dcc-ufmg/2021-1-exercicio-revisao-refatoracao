#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
    
    public:

    /*retorna o valor da Cobertura calculado pela variavel Valor_cobertura */

    double valor();

    /*calcula a comissao recebida pelo vendedor ao vender uma Cobertura a partir de
    seu valor definido pela variavel Valor_cobertura e da porcentagem relacionada a 
    essa venda, de 10% */

    double comissao();

     /*Imprime os valores relacionados à Cobertura*/

    void print();
 
    private:

    /*variavel que calcula o valor da cobertura a partir de sua area e o valor do metro quadrado*/

    double Valor_cobertura;
};

#endif
