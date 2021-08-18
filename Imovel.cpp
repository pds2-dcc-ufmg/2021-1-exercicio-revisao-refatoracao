#include "Imovel.hpp"

double Imovel::valor() {
    return _area * _valorMetro2;
}

double Imovel::comissao() {
    return this->valor() * _taxaComissao;
}

void Imovel::print(){
    cout << "[Vendedor]" << endl;
    _vendedor.print();
    cout << "[Corretor]" << endl;
    cout << "  " + _corretor << endl;
    std::cout << "Area: " << _area << endl
              << "  Quartos: " << _qtdQuartos << endl
              << "  Banheiros: " << _qtdBanheiros << endl
              << "  Vagas: " << _qtdVagas << endl
              << "Taxa de Comissão: " << _porcentagemComissao << "%" << endl
              << "Valor Comissão: R$ " << fixed << setprecision(2) << comissao() << endl
              << "Valor de Venda: R$ " << fixed << setprecision(2) << comissao() + valor() << endl;
}