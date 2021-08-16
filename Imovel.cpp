#include <iostream>
#include <string>
#include "Imovel.hpp"

// SETTERS
void Imovel::set_AREA(double _Area) {
    if (_Area >= 0) {
        AREA = _Area;
    }
}

void Imovel::set_Quartos(int _Quartos) {
    if (_Quartos >= 0)
    {
        Quartos = _Quartos;
    }
}

void Imovel::set_Banheiros(int _Banheiros) {
    if (_Banheiros >= 0)    
    {
        Banheiros = _Banheiros;
    }
    
}

void Imovel::set_Vagas(int _Vagas) {
    if (_Vagas >= 0)
    {
        Vagas = _Vagas;
    } 
}



double Imovel::get_AREA() {
    return AREA;
}

int Imovel::get_Quartos() {
    return Quartos;
}

int Imovel::get_Banheiros() {
    return Banheiros;
}
int Imovel::get_Vagas() {
    return Vagas;
}

double Imovel::get_VALORm2() {
    return VALORm2;
}

double Imovel::get_Valor_Venda() {
    return Valor_Venda;
}

double Imovel::get_Valor_Comissao() {
    return Valor_Comissao;
}
