#include <iostream>
#include "Cobertura.hpp"

double Cobertura::comissao() const {
    return kTaxaComissaoCobertura * valor();
}

void Cobertura::PrintarDados() const {
    std::cout << "[Cobertura]" << endl;
    PrintarDadosDaVenda();
    PrintarDadosDoImovel();
    std::cout << "Taxa de Comissão: " << static_cast<int>(kTaxaComissaoCobertura * 100) << "%" << endl
        << "Valor Comissão: R$ " << fixed << setprecision(2) << comissao() << endl
        << "Valor de Venda: R$ " << fixed << setprecision(2) << valor_final() << endl;
}
