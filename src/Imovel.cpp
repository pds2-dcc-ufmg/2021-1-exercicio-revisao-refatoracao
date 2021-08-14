#include "Imovel.hpp"

void Imovel::imprimeInformacoes() {
            cout << "[Vendedor]" << endl;
            vendedor.imprimeInformacoes();
            cout << "[Corretor]" << endl;
            cout << "  " + corretor << endl;
        }
