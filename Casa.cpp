#include "Imovel.hpp"
#include "Cliente.hpp"
#include "Casa.hpp"

Casa::Casa(){
    casa = new Imovel();
}

void Casa::print() {
    std::cout << "[Casa]" << endl;
    Imovel::print();
    std::cout << "Area: "              << casa->getArea()           << endl
              << "  Quartos: "         << casa->getComodo('q')      << endl
              << "  Banheiros: "       << casa->getComodo('b')      << endl
              << "  Vagas: "           << casa->getComodo('v')      << endl
              << "Taxa de Comissão: "  << casa->getComissao() * 100 << "%"             << endl
              << "Valor Comissão: R$ " << fixed                     << setprecision(2) << casa->getComissao() << endl
              << "Valor de Venda: R$ " << fixed                     << setprecision(2) << casa->getValor()    << endl;
}