#include "Cobertura.hpp"

Cobertura::Cobertura(int quartos,
                   int banheiros,
                   int vagas,
                   double area,
                   double valor_m2,
                   Cliente vendedor,
                   std::string corretor): Imovel(quartos, banheiros, vagas, area, valor_m2, vendedor, TAXA_COMISSAO_COBERTURA, corretor) {}

void Cobertura::print() {
    std::cout << "[Cobertura]" << std::endl;
    Imovel::print();
    this->print_detalhes();
}   