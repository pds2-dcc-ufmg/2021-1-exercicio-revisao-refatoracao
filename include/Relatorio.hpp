#ifndef RELATORIO_H
#define RELATORIO_H
#include "Imovel.hpp"
class relatorio {
private:
  double valor{0};
  double comissao{0};
  int tamanho;
  Imovel *imoveis;

  // Para cada imóvel, o imprima e incremente o valor e a comissão
  // É privada pois é chamada diretamente no construtor
  void imprimeSomaValores();

public:
  relatorio(Imovel *imoveis, const int &tamanho);

  // Imprima dados gerais sobre o array
  void imprimeGeral() const;
};
#endif
