#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
    
        double getValor();

        double getComissao();

        string getTipo();
        
        void print();
        
        void setArea(double a);

        void setQuartos(int q);

        void setBanheiros(int b);

        void setVagas(int vg);

        void setValorM2(double m2);

        void setValor(double val);

        void setComissao(double c);

        void setVendedor(Cliente vend);

        void setCorretor(string corr);


    protected:
        //variaveis que serao determinadas de acordo com o tipo de imovel (subclasse)
        int TaxaComissao;
        string TipoImovel;

    private:
        //variaveis: area do imovel, numero de quartos, numero de banheiros, numero de vagas, ...
        //...valos por metro quadrado, valor total do imovel, valor de comissao, vendedor e corretor.
        double Area;
        int Quartos;
        int Banheiros;
        int Vagas;
        double ValorM2;
        double Valor;
        double Comissao;
        Cliente Vendedor;
        string Corretor;

};

#endif