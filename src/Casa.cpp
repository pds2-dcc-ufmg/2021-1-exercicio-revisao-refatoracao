#include "Casa.hpp"

double Casa::calculaValor() {
    double v = area * valorMetroQuadrado;
    return v;
}

double Casa::calculaComissao() {
    double c = area * valorMetroQuadrado;
    return c * 0.06;
}

void Casa::imprimeInformacoes() {
    std::cout << "[Casa]" << endl;
    Imovel::imprimeInformacoes();
    std::cout << "Area: " << area << endl
            << "  Quartos: " << numQuartos << endl
            << "  Banheiros: " << numBanheiros << endl
            << "  Vagas: " << numVagas << endl
            << "Taxa de Comissão: " << 6 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << valorComissao << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << valorVenda << endl;
}
