#include <iostream>
#include "Casa.hpp"

using namespace std;

double Casa::ValorComissaoCasa(){
    return ValorComissão();
}

void Casa::print(){
    cout<< "[Casa]" << endl;
    Imovel::print();
    std::cout<< "Taxa de Comissão: " << 6 << "%" << std::endl
            << "Valor Comissão: R$ " << std::fixed << std::setprecision(2)<< Comissao << std::endl
            << "Valor de Venda: R$ " << std::fixed << std::setprecision(2)<< ValorTotal << std::endl;
}