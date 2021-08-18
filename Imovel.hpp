#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

class Imovel {
    private:
        // Atributos
        int     _quartos;
        int     _banheiros;
        int     _vagas;
        double  _area;
        double  _valor_m2;
        double  _total;
        double  _comissao;
        std::string _corretor;
        Cliente _vendedor;
    public:
        // Construtores
        Imovel(); // construtor default
        Imovel(int&, int&, int&, double&, double&, double&, double&, std::string&, Cliente&); // construtor que pode ser inicializado com valores

        // Setters e Getters
        int get_quartos();
        int get_banheiros();
        int get_vagas();
        double get_area();
        double get_valor_m2();
        double get_total();
        double get_comissao();
        std::string get_corretor();
        Cliente get_vendedor();

        void set_area(double area);
        void set_quartos(int quartos);
        void set_banheiros(int banheiros);
        void set_vagas(int vagas);
        void set_valor_m2(double valor_m2);
        void set_total(double total);
        void set_comissao(double comissao);
        void set_corretor(std::string corretor);
        void set_vendedor(Cliente vendedor);

        // Metodos virtual
        virtual void print();
};

#endif
