//Incluindo bibliotecas
#include <iostream>
#include <string>

//Incluindo .hpp
#include "Casa.hpp"

//Implementação dos métodos
//Calcula a comissão da Casa
double Casa::calculaComissao() {
    double comissao = _area * _valorMetroQuadrado;
    return comissao * TAXA_COMISSAO_CASA;
}

//Calcula o valor de venda da Casa
double Casa::calculaValorVenda() {
    double valorVenda = calculaComissao() + calculaValorImovel();
    return valorVenda;  
}

//Imprime dados da Casa
void Casa::print() {
    std::cout << "[Casa]" << endl;
    Imovel::print();
    std::cout << "Area: " << _area << endl
            << "  Quartos: " << _quartos << endl
            << "  Banheiros: " << _banheiros << endl
            << "  Vagas: " << _vagas << endl
            << "Taxa de Comissão: " << int(TAXA_COMISSAO_CASA*100) << "%" << endl       //int() porque na saída esperada está como inteiro   
            << "Valor Comissão: R$ " << fixed << setprecision(2) << calculaComissao() << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << calculaValorVenda() << endl;
}

//Construtor de uma Casa
Casa::Casa(double area, int quartos, int banheiros, int vagas, 
            double valorMetroQuadrado, Cliente vendedor, string corretor): 
    Imovel(area, quartos, banheiros, vagas, valorMetroQuadrado, vendedor, corretor){};
