#include "Cobertura.hpp"

double Cobertura::valor() {
    return area * valorMetroQuadrado;
}

double Cobertura::comissao(){
    return area * valorMetroQuadrado * COMISSAOCOBERTURA;
}

void Cobertura::print(){
    std::cout << "[Cobertura]" << endl;
    Imovel::print();
    std::cout << "Area: " << area << endl
            << "  Quartos: " << numQuartos << endl
            << "  Banheiros: " << numBanheiros << endl
            << "  Vagas: " << numVagas << endl
            << "Taxa de Comissão: " << 10 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << valorComissao << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << valorImovel << endl;
}