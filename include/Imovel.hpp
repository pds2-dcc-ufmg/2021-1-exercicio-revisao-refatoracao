#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

/*A classe Imovel representa um imóvel real, que possui uma área em metros quadrados, banheiros
quartos e um número de vagas. Além disso, cada imóvel possui valores de custo para cada metro quadrado
de área e um valor de comissao. Por fim, também possui uma pessoa responsável por vendê-lo e um corretor.*/

class Imovel {
    public:
        double area;
        int numQuartos;
        int numBanheiros;
        int numVagas;
        double valorMetroQuadrado;
        double valorImovel;
        double valorComissao;
        Cliente vendedor;
        string corretor;

        /* Imprime os dados sobre o cliente e o corretor do imóvel */
        void imprimeImovel();

        /* Retorna o valor do imóvel */
        virtual double valor() = 0;

        /* Retorna o valor de comissão do imóvel */
        virtual double comissao() = 0;
};

#endif