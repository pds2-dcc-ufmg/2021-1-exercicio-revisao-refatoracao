#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

class Imovel {
    protected:
        double _area;
        int _quartos;
        int _banheiros;
        int _vagas;
        double _valor_m2;
        double _valor_venda;
        double _valor_comissao;
        Cliente _vendedor;
        string _corretor;

    public:
        Imovel(double area, int quartos, int banheiros, int vagas, double valor_m2, double valor_venda, double valor_comissao, Cliente vendedor, string corretor);
        virtual void print(); 
        double valor(); // Função que retorna o preço do imóvel
        virtual double comissao() = 0; // Função que retorna a comissão cobrada pela venda do imóvel
};

#endif