#include "Imovel.hpp"

Imovel::Imovel(){}
 
Imovel::Imovel(string _corretor, double _area, int _numero_quartos, int _numero_banheiros, int _vagas, 
               double _valorm2, double _comissao, double _valor, Cliente _vendedor): 
area(_area), numero_quartos(_numero_quartos), numero_banheiros(_numero_banheiros), vagas(_vagas), 
valorm2(_valorm2), valor(_valor), comissao(_comissao), vendedor(_vendedor), corretor(_corretor){}


void Imovel::print() {
            cout << "[Vendedor]" << endl;
            vendedor.print();
            cout << "[Corretor]" << endl;
            cout << "  " + corretor << endl;
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