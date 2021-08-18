#include "Imovel.hpp"

void Imovel::print() {
    cout << "[Vendedor]" << endl;
    vendedor.print();
    cout << "[Corretor]" << endl;
    cout << "  " + corretor << endl;
}

double Imovel::valor() {
    return Area * Valorm2;
}