#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"
#include <string>

class Imovel {
    public:
        double Area;
        int Quartos;
        int Banheiros;
        int Vagas;
        double Valor_do_m2;
        Cliente vendedor;
        string corretor;
        double Comissao;
        double valorVenda;
        double taxa;
        
        //Retorna valor sem a taxa de comissão
        double getValor();
        //Retorna valor com taxa de comissão
        double getComissao();
        //Vendedor e Corretor do imovel
        void print();
};

#endif