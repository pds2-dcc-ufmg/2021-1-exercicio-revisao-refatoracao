#include "Imovel.hpp"
#include "Cliente.hpp"
#include "Cobertura.hpp"

using namespace std;

Cobertura::Cobertura(){
    cobertura = new Imovel();
}

void Cobertura::print() {
    std::cout << "[Cobertura]" << endl;
    Imovel::print();
    std::cout << "Area: "              << cobertura->getArea()           << endl
              << "  Quartos: "         << cobertura->getComodo('q')      << endl
              << "  Banheiros: "       << cobertura->getComodo('b')      << endl
              << "  Vagas: "           << cobertura->getComodo('v')      << endl
              << "Taxa de Comissão: "  << cobertura->getComissao() * 100 << "%"             << endl
              << "Valor Comissão: R$ " << fixed                          << setprecision(2) << cobertura->getComissao() << endl
              << "Valor de Venda: R$ " << fixed                          << setprecision(2) << cobertura->getValor()    << endl;
}