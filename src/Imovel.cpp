#include "Imovel.hpp"

//Retorna o valor do imóvel baseado na área quadrada
double Imovel::valor() {
    double v = _area * _valorM2;
    return v;
}

//Retorna o valor da comissão
double Imovel::comissao() {
    double c = _area * _valorM2;
    return c * _commissionFee;
}

//Imprime dados do imóvel
void Imovel::print(){
    int commissionFeePercentage = _commissionFee*100;
    cout << "[Vendedor]" << endl;
    _vendedor.print();
    cout << "[Corretor]" << endl;
    cout << "  " + _corretor << endl;
    std::cout << "Area: " << _area << endl
              << "  Quartos: " << _numQuartos << endl
              << "  Banheiros: " << _numBanheiros << endl
              << "  Vagas: " << _numVagas << endl
              << "Taxa de Comissão: " << commissionFeePercentage << "%" << endl
              << "Valor Comissão: R$ " << fixed << setprecision(2) << comissao() << endl
              << "Valor de Venda: R$ " << fixed << setprecision(2) << comissao() + valor() << endl;
}