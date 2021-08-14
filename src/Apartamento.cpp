#include "Apartamento.hpp"

double Apartamento::calculaValor() {
    double v = area * valorMetroQuadrado;
    return v;
}

double Apartamento::calculaComissao() {
    double c = area * valorMetroQuadrado;
    return c * 0.04;  
}

void Apartamento::imprimeInformacoes() {
    std::cout << "[Apartamento]" << endl;
    Imovel::imprimeInformacoes();
    std::cout << "Area: " << area << endl
            << "  Quartos: " << numQuartos << endl
            << "  Banheiros: " << numBanheiros << endl
            << "  Vagas: " << numVagas << endl
            << "Taxa de Comissão: " << 4 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << valorComissao << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << valorVenda << endl;
}
