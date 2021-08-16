#include "Apartamento.hpp"

Apartamento::Apartamento() {}

double Apartamento::ValorTotalM2 () {
    return Area * Valorm2;
}

void Apartamento::ValorComissao() {
    Comissao = ValorTotalM2() * FatorComissao;
}

void Apartamento::ValorVenda() {
    PrecoVenda = Comissao + ValorTotalM2();
}

void Apartamento::print() {
    std::cout 
        << "[Apartamento]" << std::endl
        << "[Cliente]" << std::endl;
        InfosCliente.print();
    std::cout 
        << "[Corretor]" << std::endl
        << "  " + getCorretor() << std::endl
        << "Area: " << getArea() << std::endl
        << "  Quartos: " << getQuartos() << std::endl
        << "  Banheiros: " << getBanheiros() << std::endl
        << "  Vagas: " << getVagas() << std::endl
        << "Taxa de Comissão: " << 6 << "%" << std::endl
        << "Valor Comissão: R$ " << std::fixed << std::setprecision(2) << getValorComissao() << std::endl
        << "Valor de Venda: R$ " << std::fixed << std::setprecision(2) << getValorVenda() 
    << std::endl;
}