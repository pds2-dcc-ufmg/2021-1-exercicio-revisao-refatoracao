#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
        double calculaValorTotal();

        double calculaValorDaArea();

        double calculaComissao();

        void setArea(double _area);
        void setQuartos(double _quartos);
        void setBanheiros(int _banheiros);
        void setVagas(int _vagas);
        void setValorm2(double _valorm2);
        void setValorTotal(double _valorTotal);
        void setValorDaComissao(double _valorDaComissao);
        void setVendedor(Cliente _vendedor);
        void setCorretor(string corretor);

    protected:
        double area;
        int quartos;
        int banheiros;
        int vagas;
        double valorm2;
        double valorTotal;
        double valorDaComissao;
        Cliente vendedor;
        string corretor;
        double taxaDeComissao;

        void printImovel();

};

#endif