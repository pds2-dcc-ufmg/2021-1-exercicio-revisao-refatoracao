#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"

//Imovel
void Imovel::print_cabecalho() {
    cout << "[Vendedor]" << endl;
    vendedor.print_cliente();
    cout << "[Corretor]" << endl;
    cout << "  " + corretor << endl;
}
void Imovel::print_all(){
    std::cout << get_tipo() << endl;
    print_cabecalho();
    std::cout << "Area: " << get_area() << endl
                << "  Quartos: " << get_quartos() << endl
                << "  Banheiros: " << get_banheiros() << endl
                << "  Vagas: " << get_vagas() << endl
                << "Taxa de Comissão: " << get_taxa() << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << get_valorComissao() << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << get_valorVenda() << endl;
}
double Imovel::valor() {
    return area * valorMetragem;
}
double Imovel::comissao(){
    return valor() * get_taxa() * 0.01;
}

double Imovel::get_area() {
    return area;
}
int Imovel::get_quartos() {
    return quartos;
}
int Imovel::get_banheiros() {
    return banheiros;
}
int Imovel::get_vagas() {
    return vagas;
}
double Imovel::get_valorMetragem() {
    return valorMetragem;
}
double Imovel::get_valorVenda() {
    return valorVenda;
}
double Imovel::get_valorComissao() {
    return valorComissao;
}
Cliente Imovel::get_vendedor() {
    return vendedor;
}
string Imovel::get_corretor() {
    return corretor;
}

void Imovel::set_area(double a) {
    area = a;
}
void Imovel::set_quartos(int q) {
    quartos = q;
}
void Imovel::set_banheiros(int b) {
    banheiros = b;
}
void Imovel::set_vagas(int v) {
    vagas = v;
}
void Imovel::set_valorMetragem(double valorM) {
    valorMetragem = valorM;
}
void Imovel::set_valorVenda(double valorV) {
    valorVenda = valorV;
}
void Imovel::set_valorComissao(double valorC) {
    valorComissao = valorC;
}
void Imovel::set_vendedor(Cliente c) {
    vendedor = c;
}
void Imovel::set_corretor(string c) {
    corretor = c;
}