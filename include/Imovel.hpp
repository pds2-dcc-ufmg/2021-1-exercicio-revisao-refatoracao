#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

class Imovel{
    public:
        double Area;
        //Quantidade de cada componente:
        int Quartos; 
        int Banheiros;
        int Vagas;
        double Valor_por_m2; //Valor do imóvel por metro quadrado
        double Valor_venda; // Comissão + valor
        double Comissao; //Valor da comissão do vendedor
        Cliente vendedor;
        string corretor;

        //Função responsável por fornecer o valor do imóvel, sem a comissão
        double getValor();

        //Função responsável por fornecer o valor da comissão
        double getComissao();

        //Imprimir o nome do vendedor e corretor
        void print();
};

#endif