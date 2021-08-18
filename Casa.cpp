#include <iostream>
#include "Casa.hpp"
#include <string>


using namespace std;

double Casa::valor() {
    double v = AREA * VALORm2;
    return v;
}

double Casa::comissao()  {
    double c = AREA * VALORm2;
    return c * txa_comissao_casa;
}

void Casa::print() {
   std::cout << "[Casa]" << endl;
        Imovel::print();
        std::cout << "Area: " << AREA << endl
                << "  Quartos: " << qnt_quartos << endl
                << "  Banheiros: " << qnt_banheiros << endl
                << "  Vagas: " << qnt_vagas << endl
                << "Taxa de Comissão: " << 6 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << val_comissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
}

 
