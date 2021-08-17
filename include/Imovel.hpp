#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    protected:
        double areaImovel;
        int qtdQuartos;
        int qtdBanheiros;
        int qtdVagas;
        double valorM2;
        double valorVenda;
        double valorComissao;
        Cliente vendedor;
        string corretor;

    public:
        double getValor();

        double getComissao();

        // Setter dos dados dos imóveis
        void setImovel(string _corretor, double _areaImovel, int _qtdQuartos, int _qtdBanheiros, int _qtdVagas,
        double _valorM2, double _valorComissao, double _valorVenda, Cliente _vendedor);
        
        void print();
};

#endif