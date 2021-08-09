#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"

using namespace std;

class Casa : public Imovel {

    public:
        Casa(double area,
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
            this->_percentualComissao = 0.06;
            this->_comissao = this->calcularComissao();
            this->_valorVenda = this->calcularValorVenda();
            this->_nome = "Casa";
        }      
};

#endif