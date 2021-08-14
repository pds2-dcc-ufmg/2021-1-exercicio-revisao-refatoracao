#include "Imovel.hpp"

Imovel::Imovel(int quartos,
               int banheiros,
               int vagas,
               double area,
               double valor_m2,
               Cliente vendedor,
               double taxa_corretagem,
               std::string corretor) {

    this->_taxa_corretagem = taxa_corretagem;
                
    this->area = area;
    this->quartos = quartos;
    this->banheiros = banheiros;
    this->vagas = vagas;
    this->valor_m2 = valor_m2;
    this->vendedor = vendedor;
    this->corretor = corretor;
}

double Imovel::get_valor_bruto() {
    return this->valor_m2 * this->area;
}

double Imovel::get_valor_comissao() {
    return this->get_valor_bruto() * this->_taxa_corretagem;
}

double Imovel::get_valor_final() {
    return this->get_valor_bruto() + this->get_valor_comissao();
}

void Imovel::print() {
    std::cout << "[Vendedor]" << std::endl;
    this->vendedor.print();
    std::cout << "[Corretor]" << std::endl;
    std::cout << "  " + this->corretor << std::endl;
}

void Imovel::print_detalhes() {
    std::cout << "Area: " << this->area << std::endl;
    std::cout << "  Quartos: " << this->quartos << std::endl;
    std::cout << "  Banheiros: " << this->banheiros << std::endl;
    std::cout << "  Vagas: " << this->vagas << std::endl;
    std::cout << "Taxa de Comissão: " << std::fixed << std::setprecision(0) << (this->_taxa_corretagem * 100) << "%" << std::endl;
    std::cout << "Valor Comissão: R$ " << std::fixed << std::setprecision(2) << this->get_valor_comissao() << std::endl;
    std::cout << "Valor de Venda: R$ " << std::fixed << std::setprecision(2) << this->get_valor_final() << std::endl;
}