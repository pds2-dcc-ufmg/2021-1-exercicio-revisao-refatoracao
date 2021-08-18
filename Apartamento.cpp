#include <iostream>
#include "Apartamento.hpp"

using namespace std;

double Apartamento::ValorComissãoApartamento(){
    return ValorComissão();
}

void Apartamento::print(){
    cout<< "[Apartamento]" << endl;
    Imovel::print();
    std::cout<< "Taxa de Comissão: " << 4 << "%" << std::endl
            << "Valor Comissão: R$ " << std::fixed << std::setprecision(2)<< Comissao << std::endl
            << "Valor de Venda: R$ " << std::fixed << std::setprecision(2)<< ValorTotal << std::endl;
}