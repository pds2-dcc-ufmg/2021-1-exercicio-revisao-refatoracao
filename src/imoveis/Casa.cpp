#include"Casa.hpp"

Casa::Casa(): Imovel(){}
Casa::Casa(const int& qq, const int& qb, const int& qv, const double& a, const double& vm, const Cliente& v, const string& c): 
Imovel(qq, qb, qv, a, vm, v, c){}

double Casa::valor_comissao() {

    double valor_comissao = this->get_area() * this->get_valor_metro2();
    return valor_comissao * taxa_comissao;     
}
double Casa::valor_imovel_sem_comissao() {

    double valor_comissao = this->get_area() * this->get_valor_metro2();
    return valor_comissao;    
}
double Casa::valor_total_venda() {
   
    double valor_total = this->valor_imovel_sem_comissao() + this->valor_comissao();
    return valor_total;
}

void Casa::print() {

    std::cout << "[Casa]" << endl;
    Imovel::print();
    std::cout << "Area: " << this->get_area() << endl
            << "  Quartos: " << this->get_quartos() << endl
            << "  Banheiros: " << this->get_banheiros() << endl
            << "  Vagas: " << this->get_vagas() << endl
            << "Taxa de Comissão: " << taxa_comissao*100 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << this->valor_comissao() << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << this->valor_total_venda() << endl;
}