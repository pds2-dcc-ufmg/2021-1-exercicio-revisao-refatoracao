#include <iostream>
#include <string>
#include "Apartamento.hpp"

double Apartamento::valor(){
    return getArea()*getValorm2();
}

double Apartamento::comissao() {
    return (getArea()*getValorm2()*comissaoApt); 
}

void Apartamento::print(){
    std::cout << "[Apartamento]" << endl;
    Imovel::print();
    std::cout << "Area: " << getArea() << endl
            << "  Quartos: " << getQ() << endl
            << "  Banheiros: " << getB() << endl
            << "  Vagas: " << getV() << endl
            << "Taxa de Comissão: " << 4 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << getC() << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << getValor() << endl;
}