#include <iostream>
#include <string>
#include "Cobertura.hpp"

double Cobertura::valor(){
    return getArea()*getValorm2();
}

double Cobertura::comissao() {
    return (getArea()*getValorm2()*comissaoCob); 
}

void Cobertura::print(){
    std::cout << "[Cobertura]" << endl;
    Imovel::print();
    std::cout << "Area: " << getArea() << endl
            << "  Quartos: " << getQ() << endl
            << "  Banheiros: " << getB() << endl
            << "  Vagas: " << getV() << endl
            << "Taxa de Comissão: " << 10 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << getC() << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << getValor() << endl;
}