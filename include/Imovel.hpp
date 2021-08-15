#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
        double calcular_valor();

        virtual double calcular_comissao();

        void print(double taxa_comissao);

        void set_area(double area);

        double get_area();

        void set_quantidade_quartos(int quantidade_quartos);

        int get_quantidade_quartos();

        void set_quantidade_banheiros(int quantidade_banheiros);

        int get_quantidade_banheiros();

        void set_quantidade_vagas(int quantidade_vagas);

        int get_quantidade_vagas();

        void set_valor_m2(double valor_m2);

        double get_valor_m2();

        void set_valor();

        double get_valor();

        void set_valor_comissao();

        double get_valor_comissao();

        void set_vendedor(Cliente vendedor);

        Cliente get_vendedor();

        void set_corretor(string corretor);

        string set_corretor();

    protected:
        double area;
        int quantidade_quartos;
        int quantidade_banheiros;
        int quantidade_vagas;
        double valor_m2;
        double valor;
        double valor_comissao;
        Cliente vendedor;
        string corretor;
};

#endif