#include <iostream>
#include <string>
#include "Cobertura.hpp"

double Cobertura::valor() {
    Valor_cobertura = _Area * _Valor_m2;
    return Valor_cobertura;
}

double Cobertura::comissao() {
    Valor_cobertura = _Area * _Valor_m2;
    _Taxa_de_comissao = 0.10;

    return Valor_cobertura * _Taxa_de_comissao;
}

void Cobertura::print(){
    std::cout << "[Cobertura]" << endl;
    Imovel::print();
    std::cout << "Area: " << _Area << endl
            << "  Quartos: " << _Quartos << endl
            << "  Banheiros: " << _Banheiros << endl
            << "  Vagas: " << _Vagas << endl
            << "Taxa de Comissão: " << 10 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << _Valor_comissao << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << _Valor_de_venda << endl;
} 