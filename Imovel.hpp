#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
        void print_cabecalho();
        void print_all();
        double valor();
        double comissao();

        virtual int get_taxa();
        virtual string get_tipo();

        double get_area();
        int get_quartos();
        int get_banheiros();
        int get_vagas();
        double get_valorMetragem();
        double get_valorVenda();
        double get_valorComissao();
        string get_corretor();

        void set_area(double a);
        void set_quartos(int q);
        void set_banheiros(int b);
        void set_vagas(int v);
        void set_valorMetragem(double valorM);
        void set_valorVenda(double valorV);
        void set_valorComissao(double valorC);
        void set_corretor(string c);

    protected:
        double area;
        int quartos;
        int banheiros;
        int vagas;
        double valorMetragem;
        double valorVenda;
        double valorComissao;
        Cliente vendedor;
        string corretor;
};

#endif