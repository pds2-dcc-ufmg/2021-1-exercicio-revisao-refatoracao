#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

class Imovel {
    private:
        double _taxa_corretagem;

    protected:
        double area;
        int quartos;
        int banheiros;
        int vagas;
        double valor_m2;
        Cliente vendedor;
        std::string corretor;

    public:
        Imovel(int quartos,
               int banheiros,
               int vagas,
               double area,
               double valor_m2,
               Cliente vendedor,
               double taxa_corretagem,
               std::string corretor);

        // valor do imóvel sem a comissão
        double get_valor_bruto();
        
        double get_valor_comissao();

        // considera o valor bruto do apartamento mais a comissão do corretor
        double get_valor_final();

        void print();

        void print_detalhes();
};

#endif