#include "Imovel.hpp"


double Imovel::valor() {
    double v = area * VALORm2;
    return v;
}

void Imovel::print() {
    cout << "[Vendedor]" << endl;
    vendedor.print();
    cout << "[Corretor]" << endl;
    cout << "  " + corretor << endl;
}