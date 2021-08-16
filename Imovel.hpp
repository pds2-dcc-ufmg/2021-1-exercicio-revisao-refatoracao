#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
    /*setar as variaveis*/

        void set_area(double Area);

        void set_quartos(int Quartos);

        void set_banehiros(int Banheiros);

        void set_vagas(int Vagas);

        void set_valorm2(double Valor_m2);

        void set_valordevenda(double Valor_de_venda);

        void set_valorcomissao(double Valor_comissao);

        void set_vendedor(Cliente Vendedor);

        void set_corretor(string Corretor);

    /*funcao que imprime os valores necessarios*/

        void print();
    
    protected:

    double _Area;
    int _Quartos;
    int _Banheiros; 
    int _Vagas;
    double _Valor_m2;
    double _Valor_de_venda;
    double _Valor_comissao;
    double _Taxa_de_comissao;
    Cliente _Vendedor;
    string _Corretor;
};

#endif
