#include "Imovel.hpp"

// Getter dos valores de venda e comissão dos imóveis
double Imovel::getValor() {
    return areaImovel * valorM2;
}

double Imovel::getComissao(){
    return 0.0;
}

// Setter dos dados dos imóveis
void Imovel::setImovel(string _corretor, double _areaImovel, int _qtdQuartos, int _qtdBanheiros, int _qtdVagas,
double _valorM2, double _valorComissao, double _valorVenda, Cliente _vendedor) {
    corretor = _corretor;
    areaImovel = _areaImovel;
    qtdQuartos = _qtdQuartos;
    qtdBanheiros = _qtdBanheiros;
    qtdVagas = _qtdVagas;
    valorM2 = _valorM2;
    valorComissao = this->getComissao();
    valorVenda = this->getValor();
    vendedor = _vendedor;
}

void Imovel::print() {
    cout << "[Vendedor]" << endl;
    vendedor.print();
    cout << "[Corretor]" << endl;
    cout << "  " + corretor << endl;
}