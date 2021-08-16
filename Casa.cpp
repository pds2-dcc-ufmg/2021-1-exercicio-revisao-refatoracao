#include "Imovel.hpp"
#include "Cliente.hpp"
#include "Casa.hpp"

Casa::Casa() {}

double Casa::ValorTotalM2 (){
    return Area * Valorm2;
}
double Casa::ValorComissao() {
    return Comissao = ValorTotalM2() * FatorComissao;
}
double Casa::ValorVenda() {
    return PrecoVenda = Comissao + ValorTotalM2();
}

void Casa::print() {
    std::cout 
        << "[Casa]" << std::endl
        << "[Cliente]" << std::endl;
        InfosCliente.print();
    std::cout 
    << "[Corretor]" << std::endl
    << "  " + Corretor << std::endl
    << "Area: " << Area << std::endl
    << "  Quartos: " << Quartos << std::endl
    << "  Banheiros: " << Banheiros << std::endl
    << "  Vagas: " << Vagas << std::endl
    << "Taxa de Comissão: " << 6 << "%" << std::endl
        << "Valor Comissão: R$ " << std::fixed << std::setprecision(2) << Comissao << std::endl
        << "Valor de Venda: R$ " << std::fixed << std::setprecision(2) << ValorVenda 
    << std::endl;
}
/* void Casa::IncrementarQuantidade() {
    QuantidadeCasas += 1;
}
int Casa::Quantidade() {
    return QuantidadeCasas;
} */