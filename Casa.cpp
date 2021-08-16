#include <iostream>
#include <string>
#include "Casa.hpp"

double Casa::calculaComissao() {
    double comissao = _area * _valorMetroQuadrado;
    return comissao * TAXA_COMISSAO_CASA;
}

double Casa::calculaValorVenda() {
    double valorVenda = calculaComissao() + calculaValorImovel();
    return valorVenda;  
}

void Casa::print() {
    std::cout << "[Casa]" << endl;
    Imovel::print();
    std::cout << "Area: " << _area << endl
            << "  Quartos: " << _quartos << endl
            << "  Banheiros: " << _banheiros << endl
            << "  Vagas: " << _vagas << endl
            << "Taxa de Comissão: " << TAXA_COMISSAO_CASA*100 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << calculaComissao() << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << calculaValorVenda() << endl;
}

Casa::Casa(double area, int quartos, int banheiros, int vagas, 
            double valorMetroQuadrado, Cliente vendedor, string corretor): 
    Imovel(area, quartos, banheiros, vagas, valorMetroQuadrado, vendedor, corretor){};
