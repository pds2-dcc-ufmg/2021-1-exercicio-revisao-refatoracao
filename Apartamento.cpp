
#include "Apartamento.hpp"

double Apartamento::valor() {
    return area * VALORm2;
}

double Apartamento::comissao(){
    return area * VALORm2 * comissaoApartamento;
}

void Apartamento::print(){
    std::cout << "[Apartamento]" << endl;
    Imovel::print();
    std::cout << "Area: " << area << endl
            << "  Quartos: " << Quartos << endl
            << "  Banheiros: " << Banheiros << endl
            << "  Vagas: " << Vagas << endl
            << "Taxa de Comissão: " << 4 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << ComissaoValor << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << ValorImovel << endl;
}