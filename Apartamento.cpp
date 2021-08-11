#include <iostream>
#include "Apartamento.hpp"

double Apartamento::comissao() const {
    return kTaxaComissaoApartamento * valor();
}

void Apartamento::PrintarDados() const {
    std::cout << "[Apartamento]" << endl;
    PrintarDadosDaVenda();
    PrintarDadosDoImovel();
    std::cout << "Taxa de Comiss�o: " << static_cast<int>(kTaxaComissaoApartamento * 100) << "%" << endl
        << "Valor Comiss�o: R$ " << fixed << setprecision(2) << comissao() << endl
        << "Valor de Venda: R$ " << fixed << setprecision(2) << valor_final() << endl;
}
