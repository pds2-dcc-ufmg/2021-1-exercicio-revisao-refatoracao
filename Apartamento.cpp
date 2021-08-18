#include "Apartamento.hpp"

const double taxaComissaoApartamento = 0.04;


// Construtor
Apartamento::Apartamento() {
    set_quartos(0);
    set_banheiros(0);
    set_vagas(0);
    set_area(0);
    set_valor_m2(0);
    set_total(0);
    set_comissao(0);
}


double Apartamento::valor() {
    return get_area() * get_valor_m2();
}

double Apartamento::comissao() {
    return (get_area() * get_valor_m2()) * taxaComissaoApartamento;
}

void Apartamento::print() {
    std::cout << "[Apartamento]" << std::endl;
        Imovel::print();
        std::cout << "Area: "        << get_area()       << std::endl
                  << "  Quartos: "   << get_quartos()    << std::endl
                  << "  Banheiros: " << get_banheiros()  << std::endl
                  << "  Vagas: "     << get_vagas()      << std::endl
                  << "Taxa de Comissão: " << 4 << "%"    << std::endl
                  << "Valor Comissão: R$ " << std::fixed << std::setprecision(2) << get_comissao() << std::endl
                  << "Valor de Venda: R$ " << std::fixed << std::setprecision(2) << get_total()    << std::endl;
}
