#include"Apartamento.hpp"

Apartamento::Apartamento(): Imovel(){
    taxa_comissao = comissao_apartamento;
}
Apartamento::Apartamento(const int& qq, const int& qb, const int& qv, const double& a, const double& vm, const Cliente& v, const string& c): 
Imovel(qq, qb, qv, a, vm, v, c){
    taxa_comissao = comissao_apartamento;
}

void Apartamento::print() const{

    std::cout << "[Apartamento]" << endl;
    Imovel::print();
    std::cout << "Area: " << this->get_area() << endl
            << "  Quartos: " << this->get_quartos() << endl
            << "  Banheiros: " << this->get_banheiros() << endl
            << "  Vagas: " << this->get_vagas() << endl
            << "Taxa de Comissão: " << taxa_comissao*100 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << this->valor_comissao() << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << this->valor_total_venda() << endl;
}