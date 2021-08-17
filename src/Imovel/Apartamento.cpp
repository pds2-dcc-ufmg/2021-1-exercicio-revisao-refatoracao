#include "Apartamento.hpp"

double Apartamento::valor() {
    return area * valorMetroQuadrado;
}

double Apartamento::comissao(){
    return area * valorMetroQuadrado * COMISSAOAPARTAMENTO;
}

void Apartamento::imprimeApartamento(){
    std::cout << "[Apartamento]" << endl;
    Imovel::imprimeImovel();
    std::cout << "Area: " << area << endl
            << "  Quartos: " << numQuartos << endl
            << "  Banheiros: " << numBanheiros << endl
            << "  Vagas: " << numVagas << endl
            << "Taxa de Comissão: " << 4 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << valorComissao << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << valorImovel << endl;
}