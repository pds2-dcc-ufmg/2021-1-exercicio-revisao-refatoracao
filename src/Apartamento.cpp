#include "Apartamento.hpp"
Apartamento::Apartamento (  double area,
                            int numeroQuartos,
                            int numeroBanheiros,
                            int numeroVagas,
                            double valorMetroQuadrado,
                            Cliente vendedor,
                            string corretor):
                            Imovel( area, 
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