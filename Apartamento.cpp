#include "Imovel.hpp"
#include "Cliente.hpp"
#include "Apartamento.hpp"

Apartamento::Apartamento(){
    apartamento = new Imovel();
}

void Apartamento::print() {
    std::cout << "[Apartamento]" << endl;
    Imovel::print();
    std::cout << "Area: "              << apartamento->getArea()           << endl
              << "  Quartos: "         << apartamento->getComodo('q')      << endl
              << "  Banheiros: "       << apartamento->getComodo('b')      << endl
              << "  Vagas: "           << apartamento->getComodo('v')      << endl
              << "Taxa de Comissão: "  << apartamento->getComissao() * 100 << "%"             << endl
              << "Valor Comissão: R$ " << fixed                            << setprecision(2) << apartamento->getComissao() << endl
              << "Valor de Venda: R$ " << fixed                            << setprecision(2) << apartamento->getValor()    << endl;
}