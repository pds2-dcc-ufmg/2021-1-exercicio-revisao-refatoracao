#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {

    public:
        //Metódos get e set para as variáveis   
        void setArea(double Area);
        double getArea();
        void setQtd_quartos(int _Qtd_quartos);
        int getQtd_quartos();
        void setQtd_banheiros(int _Qtd_banheiros);
        int getQtd_banheiros();
        void setQtd_vagas(int _Qtd_vagas);
        int getQtd_vagas();
        void setValorM2(double _ValorM2);
        double getValorM2();
        void setValor(double _Valor);
        double getValor();
        void setComissao_valor(double _Comissao_valor);
        double getComissao_valor();
        void setVendedor(Cliente _vendedor);
        Cliente getVendedor();
        void setCorretor(string _corretor);
        string getCorretor();

        //Metódo que calcula a comissão do imóvel
        virtual double comissao();
        //Metódo que calcula o valor do imóvel
        virtual double valor();
        //Metódo que escreve as informações do imóvel
        virtual void print();

    protected:
        double AREA;
        int Qtd_quartos;
        int Qtd_banheiros;
        int Qtd_vagas;
        double VALORm2;
        double Valor;
        double Comissao_valor;
        Cliente vendedor;
        string corretor;
};

#endif