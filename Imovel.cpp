#include "Imovel.hpp"

Imovel::Imovel(){}

Imovel::Imovel(string _corretor, double _area, int _numero_quartos, int _numero_banheiros, 
               int _vagas, double _valorm2, Cliente _vendedor, double _perc_comissao): 
area(_area), numero_quartos(_numero_quartos), numero_banheiros(_numero_banheiros), vagas(_vagas), 
valorm2(_valorm2), vendedor(_vendedor), corretor(_corretor), perc_comissao(_perc_comissao){
    comissao = this->calc_comissao(); 
    valor = this->calc_valor() + comissao;
}

double Imovel::calc_valor() {
    return area * valorm2;
}

double Imovel::calc_comissao() {
    return area * valorm2 * perc_comissao;
}

void Imovel::set_area(double _area){
    area = _area;
}

void Imovel::set_numero_quartos(int _numero_quartos){
    numero_quartos = _numero_quartos;
}

void Imovel::set_numero_banheiros(int _numero_banheiros){
    numero_banheiros = _numero_banheiros;
}

void Imovel::set_vagas(int _vagas){
    vagas = _vagas;
}

void Imovel::set_valorm2(double _valorm2){
    valorm2 = _valorm2;
}

void Imovel::set_valor(double _valor){
    valor = _valor;
}

void Imovel::set_comissao(double _comissao){
    comissao = _comissao;
}

void Imovel::set_corretor(string _corretor){
    corretor = _corretor;
}

void Imovel::set_perc_comissao(double _perc_comissao){
    perc_comissao = _perc_comissao;
}

Cliente Imovel::get_vendedor(){
    return vendedor;
}

double Imovel::get_area(){
    return area;
}

int Imovel::get_numero_quartos(){
    return numero_quartos;
}

int Imovel::get_numero_banheiros(){
    return numero_banheiros;
}

int Imovel::get_vagas(){
    return vagas;
}

double Imovel::get_valorm2(){
    return valorm2;
}

double Imovel::get_valor(){
    return valor;
}

double Imovel::get_comissao(){
    return comissao;
}

string Imovel::get_corretor(){
    return corretor;
}

double Imovel::get_perc_comissao(){
    return perc_comissao;
}