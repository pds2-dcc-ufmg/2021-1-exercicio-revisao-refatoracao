#ifndef RELATORIO_H
#define RELATORIO_H
#include "Imovel.hpp"
class relatorio {
private:
  double valor{0};
  double comissao{0};
  int tamanho;
  Imovel *imoveis;

  void imprimeSomaValores();

public:
  relatorio(Imovel *imoveis, const int &tamanho);
  void print() const;
};
#endif
