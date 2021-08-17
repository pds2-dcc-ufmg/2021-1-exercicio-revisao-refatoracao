#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
        void mostrar_informacoes();
        void calcular_valores();
        void set_tipo_imovel(string _tipo_imovel);
        void set_taxa_comissao(double _taxa_comissao);

        double get_valor_imovel();
        double get_comissao();
    protected:
        string tipo_imovel;
        Cliente vendedor;
        string corretor;

        double area;
        int quant_quartos;
        int quant_banheiros;
        int quant_vagas;

        double valor_metro_quadrado;
        double taxa_comissao;
        double valor_imovel;
        double valor_comissao;
        double valor_total;

};

#endif
