#include "Casa.hpp"

int Casa::numCasa = 0;
double Casa::pctComissao = 0.06;

int Casa::getNumCasa() { return Casa::numCasa; }

// Função que printa o relatório de uma casa
void Casa::print()  {
    std::cout << "[Casa]" << endl;

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