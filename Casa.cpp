#include<iostream>
#include<string>
#include "Casa.hpp"

using namespace std;

double Casa::valor(){
    ValorCasa = Area*Valorm2;
    return ValorCasa;
}
    double comissao();
double Casa::comissao(){
    ValorCasa = Area*Valorm2;
    return ValorCasa*taxaCom;
}

void Casa::print(){
    std::cout << "[Casa]" << endl;
    Imovel::print();
    std::cout   << "Area: " << Area << endl
                << "  Quartos: " << Quartos << endl
                << "  Banheiros: " << Banheiros << endl
                << "  Vagas: " << Vagas << endl
                << "Taxa de Comissão: " << 6 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << ValorComissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << ValorFinal << endl;
}
