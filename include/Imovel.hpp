#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include "Cliente.hpp"

class Imovel {
    private:
        double area;
        double valor_m2;
        int num_quartos;
        int num_banheiros;
        int num_vagas;
        Cliente vendedor;
        std::string corretor;

    public:
        double valor();
        void print();

        // getters
        double get_area();
        double get_valor_m2();
        int get_num_quartos();
        int get_num_banheiros();
        int get_num_vagas();
        Cliente get_vendedor();
        std::string get_corretor();

        // setters
        void set_area(double);
        void set_valor_m2(double);
        void set_num_quartos(int);
        void set_num_banheiros(int);
        void set_num_vagas(int);
        void set_vendedor(Cliente);
        void set_corretor(std::string);
};

#endif