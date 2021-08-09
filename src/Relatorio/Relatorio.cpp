#include "Relatorio.hpp"
relatorio::relatorio(Imovel *imoveis, const int &tamanho) {
  this->imoveis = imoveis;
  this->tamanho = tamanho;
  this->imprimeSomaValores();
}
void relatorio::imprimeSomaValores() {
  for (int i = 0; i < tamanho; ++i) {
    imoveis[i].print();
    this->valor += imoveis[i].getValor();
    this->comissao += imoveis[i].getComissao();
  }
}
void relatorio::imprimeGeral() const {
  cout << "\n>>" << this->imoveis->getTipo() << "s<<\n"
       << "\n Quantidade: " << this->tamanho << "\n Valor Total: R$ " << fixed
       << setprecision(precisao) << this->valor << "\n Comissão Total: R$ "
       << this->comissao << endl;
}
