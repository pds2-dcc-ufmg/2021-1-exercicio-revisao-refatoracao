#include "Imovel.hpp"

void Imovel::imprimeImovel(){
    cout << "[Vendedor]" << endl;
    vendedor.imprimeDados();
    cout << "[Corretor]" << endl;
    cout << "  " + corretor << endl;
}