#include <iostream>
#include <string>
#include "Casa.hpp"

double Casa::valor(){
    return getArea()*getValorm2();
}

double Casa::comissao() {
    return (getArea()*getValorm2()*comissaoCasa); 
}

void Casa::print(){
    std::cout << "[Casa]" << endl;
    Imovel::print();
    std::cout << "Area: " << getArea() << endl
            << "  Quartos: " << getQ() << endl
            << "  Banheiros: " << getB() << endl
            << "  Vagas: " << getV() << endl
            << "Taxa de Comissão: " << 6 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << getC() << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << getValor() << endl;
}