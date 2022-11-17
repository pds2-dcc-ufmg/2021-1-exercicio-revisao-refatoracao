#include <iostream>
#include <string>
#include "Apartamento.hpp"

double Apartamento::valor() {
    Valor_apartamento = _Area * _Valor_m2;

    return Valor_apartamento;
}

double Apartamento::comissao() {
    Valor_apartamento = _Area * _Valor_m2;
    _Taxa_de_comissao = 0.04;

    return Valor_apartamento * _Taxa_de_comissao;
} 

void Apartamento::print(){
    std::cout << "[Apartamento]" << endl;
    Imovel::print();
    std::cout << "Area: " << _Area << endl
            << "  Quartos: " << _Quartos << endl
            << "  Banheiros: " << _Banheiros << endl
            << "  Vagas: " << _Vagas << endl
            << "Taxa de Comissão: " << 4 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << _Valor_comissao << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << _Valor_de_venda << endl;
    }
