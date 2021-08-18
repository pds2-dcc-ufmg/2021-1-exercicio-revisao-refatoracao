#include <iostream>
#include "Cobertura.hpp"

using namespace std;

double Cobertura::ValorComissaoCobertura(){
    return ValorComissão();
}

void Cobertura::print(){
    cout<< "[Cobertura]" << endl;
    Imovel::print();
    std::cout<< "Taxa de Comissão: " << 10 << "%" << std::endl
            << "Valor Comissão: R$ " << std::fixed << std::setprecision(2)<< Comissao << std::endl
            << "Valor de Venda: R$ " << std::fixed << std::setprecision(2)<< ValorTotal << std::endl;

}