#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"

using namespace std;

class Apartamento : public Imovel {

    public:
        Apartamento( double area,
            int numeroQuartos,
            int numeroBanheiros,
            int numeroVagas,
            double valorMetroQuadrado,
            Cliente vendedor,
            string corretor):
            Imovel(area, 
                numeroQuartos,
                numeroBanheiros,
                numeroVagas,
                valorMetroQuadrado,
                vendedor,
                corretor) {
            this->_percentualComissao = 0.04;
            this->_comissao = this->calcularComissao();
            this->_valorVenda = this->calcularValorVenda();
            this->_nome = "Apartamento";
        }
};

#endif