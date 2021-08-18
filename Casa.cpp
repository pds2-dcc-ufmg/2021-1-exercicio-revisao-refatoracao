#include "Casa.hpp"

double taxaComissaoCasa = 0.06;


Casa::Casa(){
    set_quartos(0);
    set_banheiros(0);
    set_vagas(0);
    set_area(0);
    set_valor_m2(0);
    set_total(0);
    set_comissao(0);
}


double Casa::valor() {
    return get_area() * get_valor_m2();
}

double Casa::comissao() {
    //double taxaComissao = 0.06;
    return (get_area() * get_valor_m2()) * taxaComissaoCasa;
}

void Casa::print() {std::cout << "[Casa]" << std::endl;
        Imovel::print();
        std::cout << "Area: "        << get_area()       << std::endl
                  << "  Quartos: "   << get_quartos()    << std::endl
                  << "  Banheiros: " << get_banheiros()  << std::endl
                  << "  Vagas: "     << get_vagas()      << std::endl
                  << "Taxa de Comissão: "  << 6 << "%"   << std::endl
                  << "Valor Comissão: R$ " << std::fixed << std::setprecision(2) << get_comissao() << std::endl
                  << "Valor de Venda: R$ " << std::fixed << std::setprecision(2) << get_total()    << std::endl;
}
