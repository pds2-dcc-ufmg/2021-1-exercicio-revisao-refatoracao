#include "Cobertura.hpp"

double Cobertura::valor() {
    return area * VALORm2;
}

double Cobertura::comissao(){
    return area * VALORm2 * comissaoCobertura;
}

void Cobertura::print(){
    std::cout << "[Cobertura]" << endl;
    Imovel::print();
    std::cout << "Area: " << area << endl
            << "  Quartos: " << Quartos << endl
            << "  Banheiros: " << Banheiros << endl
            << "  Vagas: " << Vagas << endl
            << "Taxa de Comissão: " << 10 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << ComissaoValor << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << ValorImovel << endl;
} 