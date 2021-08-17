#include "Casa.hpp"

double Casa::valor() {
    return area * valorMetroQuadrado;
}

double Casa::comissao(){
    return area * valorMetroQuadrado * COMISSAOCASA;
}

void Casa::imprimeCasa(){
    std::cout << "[Casa]" << endl;
    Imovel::imprimeImovel();
    std::cout << "Area: " << area << endl
            << "  Quartos: " << numQuartos << endl
            << "  Banheiros: " << numBanheiros << endl
            << "  Vagas: " << numVagas << endl
            << "Taxa de Comissão: " << 6 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << valorComissao << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << valorImovel << endl;
}