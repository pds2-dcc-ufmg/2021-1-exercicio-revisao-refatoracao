#include "Imovel.hpp"

double parsePercentage(int value) {
    return (double) value / 100;
}

void Imovel::print() {
    cout << "[Vendedor]" << endl;
    _vendedor.print();
    cout << "[Corretor]" << endl;
    cout << "  " + _corretor << endl;
    cout 
        << "  Area: " << _area << endl
        << "  Quartos: " << _qtdQuarto << endl
        << "  Banheiros: " << _qtdBanheiro << endl
        << "  Vagas: " << _qtdVaga << endl
        << "  Taxa de Comissão: " << _taxaComissao << "%" << endl
        << "  Valor Comissão: R$ " << fixed << setprecision(2) << comissao() << endl
        << "  Valor de Venda: R$ " << fixed << setprecision(2) << valor() + comissao() << endl;
}

double Imovel::comissao() {
    double c = _area * _valorM2;
    return c * parsePercentage(_taxaComissao);
}

double Imovel::valor() {
    double v = _area * _valorM2;
    return v;
}