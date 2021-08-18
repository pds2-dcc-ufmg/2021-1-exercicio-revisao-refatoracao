#include "Cobertura.hpp"

const double taxaComissaoCobertura = 0.10;

// Construtor
Cobertura::Cobertura() {
    set_quartos(0);
    set_banheiros(0);
    set_vagas(0);
    set_area(0);
    set_valor_m2(0);
    set_total(0);
    set_comissao(0);
}

double Cobertura::valor() {
    return get_area() * get_valor_m2();
}

double Cobertura::comissao() {
    //double taxaComissao = 0.10;
    return (get_area() * get_valor_m2()) * taxaComissaoCobertura;
}

void Cobertura::print() {
    std::cout << "[Cobertura]" << std::endl;
        Imovel::print();
        std::cout << "Area: "        << get_area()       << std::endl
                  << "  Quartos: "   << get_quartos()    << std::endl
                  << "  Banheiros: " << get_banheiros()  << std::endl
                  << "  Vagas: "     << get_vagas()      << std::endl
                  << "Taxa de Comissão: "  << 10 << "%"  << std::endl
                  << "Valor Comissão: R$ " << std::fixed << std::setprecision(2) << get_comissao() << std::endl
                  << "Valor de Venda: R$ " << std::fixed << std::setprecision(2) << get_total()    << std::endl;
}
