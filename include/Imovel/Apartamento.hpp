#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel
{
    public: 
        Apartamento();
        Apartamento(double area, int quartos, int banheiros, int vagas, double valor_m2, Cliente vendedor, string corretor);

        void print() override;

        double comissao() override;

        static double _taxa_de_comissao;
        static string _tipo_de_imovel;
};

#endif