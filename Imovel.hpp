#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
        Imovel(
            string corretor,
            double area,
            int qtdQuarto,
            int qtdBanheiro,
            int qtdVaga,
            double valorM2,
            double taxaComissao,
            Cliente vendedor
        ) : 
            _corretor(corretor),
            _area(area),
            _qtdQuarto(qtdQuarto),
            _qtdBanheiro(qtdBanheiro),
            _qtdVaga(qtdVaga),
            _valorM2(valorM2),
            _taxaComissao(taxaComissao),
            _vendedor(vendedor) {}

        double getArea() { return _area; };
        int getQtdQuarto() { return _qtdQuarto; };
        int getQtdBanheiro() { return _qtdBanheiro; };
        int getQtdVaga() { return _qtdVaga; };
        double getValorM2() { return _valorM2; };
        double getTaxaComissao() { return _taxaComissao; };
        Cliente getVendedor() { return _vendedor; };
        string getCorretor() { return _corretor; };

        void setArea(double area) { _area = area; };
        void setQtdQuarto(int qtdQuarto) { _qtdQuarto = qtdQuarto; };
        void setQtdBanheiro(int qtdBanheiro) { _qtdBanheiro = qtdBanheiro; };
        void setQtdVaga(int qtdVaga) { _qtdVaga = qtdVaga; };
        void setValorM2(double valorM2) { _valorM2 = valorM2; };
        void setTaxaComissao(double taxaComissao) { _taxaComissao = taxaComissao; };
        void setVendedor(Cliente vendedor) { _vendedor = vendedor; };
        void setCorretor(string corretor) { _corretor = corretor; };

        void print();

        double valor();
        double comissao();

    private:
        double _area;
        int _qtdQuarto;
        int _qtdBanheiro;
        int _qtdVaga;
        double _valorM2;
        int _taxaComissao;
        Cliente _vendedor;
        string _corretor;
};

#endif