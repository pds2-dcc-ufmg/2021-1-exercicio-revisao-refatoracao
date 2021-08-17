#include "Cobertura.hpp"

Cobertura::Cobertura(double _area,
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
                                  _corretor) {this->taxaComissao = 10;};

void Cobertura::imprimeInformacoes() {
    std::cout << "[Cobertura]" << std::endl;
    Imovel::imprimeInformacoes();
}