#include "Imovel.hpp"

void Imovel::print(double taxa_comissao) {
    cout << "[Vendedor]" << endl;
    vendedor.print();
    cout << "[Corretor]" << endl;
    cout << "  " + corretor << endl;
    std::cout << "Area: " << area << endl
    << "  Quartos: " << quantidade_quartos << endl
    << "  Banheiros: " << quantidade_banheiros << endl
    << "  Vagas: " << quantidade_vagas << endl
    << "Taxa de Comissão: " <<  fixed << setprecision(0) << taxa_comissao << "%" << endl
    << "Valor Comissão: R$ " << fixed << setprecision(2) << valor_comissao << endl
    << "Valor de Venda: R$ " << fixed << setprecision(2) << valor << endl;
}

double Imovel::calcular_valor() {
    double v = area * valor_m2;
    return v;
}

double Imovel::calcular_comissao(){return 0.0;}

void Imovel::set_area(double area){
    this->area = area;
}

double Imovel::get_area(){
    return this->area;
}

void Imovel::set_quantidade_quartos(int quantidade_quartos){
    this->quantidade_quartos = quantidade_quartos;
}

int Imovel::get_quantidade_quartos(){
    return this->quantidade_quartos;
}

void Imovel::set_quantidade_banheiros(int quantidade_banheiros){
    this->quantidade_banheiros = quantidade_banheiros;
}

int Imovel::get_quantidade_banheiros(){
    return this->quantidade_banheiros;
}

void Imovel::set_quantidade_vagas(int quantidade_vagas){
    this->quantidade_vagas = quantidade_vagas;
}

int Imovel::get_quantidade_vagas(){
    return this->quantidade_vagas;
}

void Imovel::set_valor_m2(double valor_m2){
    this->valor_m2 = valor_m2;
}

double Imovel::get_valor_m2(){
    return this->valor_m2;
}

void Imovel::set_valor(){
    this->valor = this->calcular_valor() + this->calcular_comissao();
}

double Imovel::get_valor(){
    return this->valor;
}

void Imovel::set_valor_comissao(){
    this->valor_comissao = this->calcular_comissao();
}

double Imovel::get_valor_comissao(){
    return this->valor_comissao;
}

void Imovel::set_vendedor(Cliente vendedor){
    this->vendedor = vendedor;
}

Cliente Imovel::get_vendedor(){
    return this->vendedor;
}

void Imovel::set_corretor(string corretor){
    this->corretor = corretor;
}

string Imovel::set_corretor(){
    return this->corretor;
}