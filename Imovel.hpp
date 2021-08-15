
#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    private:
        double area;
        int numero_quartos;
        int numero_banheiros;
        int vagas;
        double valorm2;
        double valor;
        double comissao;
        Cliente vendedor;
        string corretor;
        
    protected:
        double perc_comissao;

    public:
        //imprime informacoes sobre vendedor e corretor
        Imovel();
        Imovel(string _corretor, double _area, int _numero_quartos, int _numero_banheiros, int _vagas, 
               double _valorm2, double _comissao, double _valor, Cliente _vendedor);
        double calc_valor();
        double calc_comissao();
        void print();
        void set_area(double _area);
        void set_numero_quartos(int _numero_quartos);
        void set_numero_banheiros(int _numero_banheiros);
        void set_vagas(int _vagas);
        void set_valorm2(double _valorm2);
        void set_valor(double _valor);
        void set_comissao(double _comissao);
        void set_corretor(string _corretor);
        Cliente get_vendedor();
        double get_area();
        int get_numero_quartos();
        int get_numero_banheiros();
        int get_vagas();
        double get_valorm2();
        double get_valor();
        double get_comissao();
        string get_corretor();
};

#endif