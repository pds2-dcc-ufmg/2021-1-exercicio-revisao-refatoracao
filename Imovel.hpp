#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

class Imovel {
    public:
        double valor();
        double comissao();
        virtual void print();

        void setArea(double);
        double getArea();
        void setQuartos(int);
        int getQuartos();
        void setBanheiros(int);
        int getBanheiros();
        void setVagas(int);
        int getVagas();
        void setValorM2(double);
        double getValorM2();
        void setValorVenda(double);
        double getValorVenda();
        void setValorComissao(double);
        double getValorComissao();
        void setVendedor(Cliente);
        Cliente getVendedor();
        void setCorretor(std::string);
        std::string getCorretor();
        void setTaxaComissao(double);
        double getTaxaComissao();

    protected:
        double _area;
        int _quartos;
        int _banheiros;
        int _vagas;
        double _valorM2;
        double _valorVenda;
        double _valorComissao;
        Cliente _vendedor;
        std::string _corretor;
        double _taxaComissao;
};

#endif