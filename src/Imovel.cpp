#include <iostream>
#include "imovel.hpp"
#include "Cliente.hpp"
#include <string>

using namespace std;

double Imovel::getValor() {
    return Area * Valor_do_m2;
}

double Imovel::getComissao() {
    double comissao = getValor() * taxa;
    return comissao;
}

void Imovel::print() {
    cout << "[Vendedor]" << endl;
    vendedor.print();
    cout << "[Corretor]" << endl;
    cout << "  " + corretor << endl;
}