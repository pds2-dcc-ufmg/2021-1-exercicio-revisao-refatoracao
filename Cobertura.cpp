#include "Cobertura.hpp"

double Cobertura::comissao(){ 
    double valor_total = this->valor();

    return valor_total * comissao_taxa;
}

void Cobertura::print(){
    std::cout << "[Cobertura]" << endl;
    Imovel::print();
    std::cout << "Area: " << _area << endl
            << "  Quartos: " << _quartos << endl
            << "  Banheiros: " << _banheiros << endl
            << "  Vagas: " << _vagas << endl
            << "Taxa de Comissão: " << comissao_taxa * 100 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << _valor_comissao << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << _valor_venda << endl;
}