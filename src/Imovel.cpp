#include "Imovel.hpp"

void Imovel::print() {
            cout << "[Vendedor]" << endl;
            vendedor.print();
            cout << "[Corretor]" << endl;
            cout << "  " + corretor << endl;
}

double Imovel::valor() {

    double valor_do_imovel = area * valor_por_metro_quadrado;

    return valor_do_imovel;

}