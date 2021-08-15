#include "Casa.hpp"

Casa::Casa(int quartos,
           int banheiros,
           int vagas,
           double area,
           double valor_m2,
           Cliente vendedor,
           std::string corretor) : Imovel(quartos, banheiros, vagas, area, valor_m2, vendedor, TAXA_COMISSAO_CASA, corretor) {}

void Casa::print(){
    std::cout << "[Casa]" << std::endl;
    Imovel::print();
    this->print_detalhes();
}
