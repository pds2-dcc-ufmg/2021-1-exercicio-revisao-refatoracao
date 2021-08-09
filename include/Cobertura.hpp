#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"

using namespace std;

class Cobertura : public Imovel {
    
    public:
        Cobertura(
            double area,
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
            this->_percentualComissao = 0.10;
            this->_comissao = this->calcularComissao();
            this->_valorVenda = this->calcularValorVenda();
            this->_nome = "Cobertura";
        }
};

#endif