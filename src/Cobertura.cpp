#include "Cobertura.hpp"

double Cobertura::calculaValor() {
    double v = area * valorMetroQuadrado;
    return v;
}

double Cobertura::calculaComissao() {
    double c = area * valorMetroQuadrado;
    return c * 0.10;  
}

void Cobertura::imprimeInformacoes() {
    std::cout << "[Cobertura]" << endl;
    Imovel::imprimeInformacoes();
    std::cout << "Area: " << area << endl
            << "  Quartos: " << numQuartos << endl
            << "  Banheiros: " << numBanheiros << endl
            << "  Vagas: " << numVagas << endl
            << "Taxa de Comissão: " << 10 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << valorComissao << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << valorVenda << endl;
}