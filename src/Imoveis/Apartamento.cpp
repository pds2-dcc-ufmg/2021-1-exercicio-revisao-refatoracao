#include "Apartamento.hpp"
Apartamento::Apartamento(int quartos,
                       int banheiros,
                       int vagas,
                       double area,
                       double valor_m2,
                       Cliente vendedor,
                       std::string corretor): Imovel(quartos, banheiros, vagas, area, valor_m2, vendedor, TAXA_COMISSAO_APT, corretor) {}

void Apartamento::print() {
    std::cout << "[Apartamento]" << std::endl;
    Imovel::print();
    this->print_detalhes();
}