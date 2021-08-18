#include "Apartamento.hpp"
#include<iostream>
#include<string>
using namespace std;

double Apartamento::valor(){
    ValorApt = Area*Valorm2;
    return ValorApt;
}
double Apartamento::comissao(){
    ValorApt = Area*Valorm2;
    return ValorApt*taxaApt;
}
void Apartamento::print(){

    std::cout << "[Apartamento]" << endl;
    Imovel::print();
    std::cout   << "Area: " << Area << endl
                << "  Quartos: " << Quartos << endl
                << "  Banheiros: " << Banheiros << endl
                << "  Vagas: " << Vagas << endl
                << "Taxa de Comissão: " << 4 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << ValorComissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << ValorFinal << endl;
    }
