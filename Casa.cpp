#include <iostream>
#include <string>
#include "Casa.hpp"

double Casa::valor() {
    Valor_casa = _Area * _Valor_m2;
    return Valor_casa;
}

double Casa::comissao(){
    Valor_casa = _Area * _Valor_m2;
    _Taxa_de_comissao = 0.06;

    return Valor_casa * _Taxa_de_comissao;
} 

void Casa::print(){
    std::cout << "[Casa]" << endl;
    Imovel::print();
    std::cout << "Area: " << _Area << endl
            << "  Quartos: " << _Quartos << endl
            << "  Banheiros: " << _Banheiros << endl
            << "  Vagas: " << _Vagas << endl
            << "Taxa de Comissão: " << 6 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << _Valor_comissao << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << _Valor_de_venda << endl;
}