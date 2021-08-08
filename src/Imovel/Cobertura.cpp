#include "Cobertura.hpp"

int Cobertura::numCob = 0;
double Cobertura::pctComissao = 0.10;

int Cobertura::getNumCob() { return Cobertura::numCob; }

// Função que printa o relatório de uma cobertura
void Cobertura::print() {
    std::cout << "[Cobertura]" << endl;

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