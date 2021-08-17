#include "Apartamento.hpp"

Apartamento::Apartamento(double _area,
                         int _numQuartos,
                         int _numBanheiros,
                         int _numVagas,
                         double _valorMetroQuadrado,
                         Cliente _vendedor,
                         string _corretor)
                         : Imovel(_area,
                                  _numQuartos,
                                  _numBanheiros,
                                  _numVagas,
                                  _valorMetroQuadrado,
                                  _vendedor,
                                  _corretor) {this->taxaComissao = 4;};

void Apartamento::imprimeInformacoes() {
    std::cout << "[Apartamento]" << std::endl;
    Imovel::imprimeInformacoes();
}
