#include<iostream>
#include<string>
#include "Cobertura.hpp"
using namespace std;


double Cobertura::valor(){
    double v = Area*Valorm2;
    return ValorCobertura;
}
double Cobertura::comissao() {
    ValorCobertura = Area*Valorm2;
    return ValorCobertura*taxaCob;
}
void Cobertura::print() {
    std::cout << "[Cobertura]" << endl;
    Imovel::print();
    std::cout   << "Area: " << Area << endl
                << "  Quartos: " << Quartos << endl
                << "  Banheiros: " << Banheiros << endl
                << "  Vagas: " << Vagas << endl
                << "Taxa de Comissão: " << 10 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << ValorComissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << ValorFinal << endl;
}

