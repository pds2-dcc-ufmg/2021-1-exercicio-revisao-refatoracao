#include <iostream>
#include "Casa.hpp"

double Casa::comissao() const {
    return kTaxaComissaoCasa * valor();
}

void Casa::PrintarDados() const {
    std::cout << "[Casa]" << endl;
    PrintarDadosDaVenda();
    PrintarDadosDoImovel();
    std::cout << "Taxa de Comissão: " << static_cast<int>(kTaxaComissaoCasa * 100) << "%" << endl
        << "Valor Comissão: R$ " << fixed << setprecision(2) << comissao() << endl
        << "Valor de Venda: R$ " << fixed << setprecision(2) << valor_final() << endl;
}
