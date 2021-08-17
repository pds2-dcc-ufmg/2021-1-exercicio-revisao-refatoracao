#include "Casa.hpp"

double Casa::valor() {
    return area * VALORm2;
}

double Casa::comissao(){
    return area * VALORm2 * comissaoCasa;
}

void Casa::print(){
    std::cout << "[Casa]" << endl;
    Imovel::print();
    std::cout << "Area: " << area << endl
            << "  Quartos: " << Quartos << endl
            << "  Banheiros: " << Banheiros << endl
            << "  Vagas: " << Vagas << endl
            << "Taxa de Comissão: " << 6 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << ComissaoValor << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << ValorImovel << endl;
} 