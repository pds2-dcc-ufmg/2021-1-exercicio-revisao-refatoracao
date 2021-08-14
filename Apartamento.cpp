#include "Apartamento.hpp"

double Apartamento::valor() {
    return get_area() * get_valorm2();
}

double Apartamento::comissao() {
    return valor() * PORCENTAGEM_COMISSAO;
}

void Apartamento::print() {
    std::cout << "[Apartamento]" << endl;
    Imovel::print();
    std::cout << "Area: " << get_area() << endl
                << "Quartos: " << get_numero_quartos() << endl
                << "Banheiros: " << get_numero_banheiros() << endl
                << "Vagas: " << get_vagas() << endl
                << "Taxa de Comissão: " << PORCENTAGEM_COMISSAO*100 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << get_comissao() << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << get_valor() << endl;
}