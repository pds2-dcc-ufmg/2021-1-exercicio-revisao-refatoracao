#include <iostream>
#include <iomanip>
#include "Imovel.hpp"

using namespace std;

void Imovel::print() {
            cout << "[Vendedor]" << endl;
            vendedor.print();
            cout << "[Corretor]" << endl;
            cout << "  " + corretor << endl;
        }
};
