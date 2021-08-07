#include "Apartamento.hpp"

int Apartamento::numApt = 0;
double Apartamento::pctComissao = 0.04;

int Apartamento::getNumApt() { return Apartamento::numApt; }

void Apartamento::print() {
    std::cout << "[Apartamento]" << endl;

    cout << "[Vendedor]" << endl;
    vendedor->print();
    cout << "[Corretor]" << endl;
    cout << "  " + corretor << endl;

    std::cout << "Area: " << area << endl
              << "  Quartos: " << Q << endl
              << "  Banheiros: " << B << endl
              << "  Vagas: " << V << endl
              << "Taxa de Comissão: " << fixed << setprecision(0) << pctComissao * 100 << "%" << endl
              << "Valor Comissão: R$ " << fixed << setprecision(2) << comissao << endl
              << "Valor de Venda: R$ " << fixed << setprecision(2) << valor << endl;
}
