#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {

    protected:

        double Area;
        int Quartos;
        int Banheiros;
        int Vagas;
        int Taxa_Comissao;
        double Valor_m2;
        double Valor_Venda;
        double Valor_Comissao;
        Cliente vendedor;
        string corretor;

    public:

        double valor();

        double comissao();

        void Impressao_Imovel();

        void Inicializar_Nomes(string corretor, Cliente vendedor);

        void Inicializar_Inteiros(int Quartos, int Banheiros, int Vagas, int Taxa_Comissao);

        void Inicializar_Double(double Area, double Valor_m2, double Valor_Comissao, double Valor_Venda);


};

#endif