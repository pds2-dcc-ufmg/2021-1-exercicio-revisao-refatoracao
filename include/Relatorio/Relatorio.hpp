#ifndef RELATORIO_H
#define RELATORIO_H
#include "Imovel.hpp"
namespace Relatorios {
class relatorio {
private:
  double valor{0};
  double comissao{0};
  int tamanho;
  Imoveis::Imovel *imoveis;

  // Para cada imóvel, o imprima e incremente o valor e a comissão
  // É privada pois é chamada diretamente no construtor
  void imprimeSomaValores();

public:
  relatorio(Imoveis::Imovel *imoveis, const int &tamanho);

  // Imprima dados gerais sobre o array
  void imprimeGeral() const;
};
} // namespace Relatorios
#endif
