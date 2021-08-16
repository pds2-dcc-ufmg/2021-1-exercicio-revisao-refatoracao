//Incluindo bibliotecas
#include <iostream>
#include <string>

//Incluindo .hpp
#include "Apartamento.hpp"

//Implementação dos métodos
//Calcula a comissão do Apartamento
double Apartamento::calculaComissao() {
    double comissao = _area * _valorMetroQuadrado;
    return comissao * TAXA_COMISSAO_APARTAMENTO;  
}

//Calcula o valor de venda do Apartamento
double Apartamento::calculaValorVenda() {
    double valorVenda = calculaComissao() + calculaValorImovel();
    return valorVenda;   
}

//Imprime dados do Apartamento
void Apartamento::print() {
    std::cout << "[Apartamento]" << endl;
    Imovel::print();
    std::cout << "Area: " << _area << endl
            << "  Quartos: " << _quartos << endl
            << "  Banheiros: " << _banheiros << endl
            << "  Vagas: " << _vagas << endl
            << "Taxa de Comissão: " << TAXA_COMISSAO_APARTAMENTO*100 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << calculaComissao() << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << calculaValorVenda() << endl;
}

//Construtor de um Apartamento
Apartamento::Apartamento(double area, int quartos, int banheiros, 
                        int vagas, double valorMetroQuadrado, 
                        Cliente vendedor, string corretor): 
    Imovel(area, quartos, banheiros, vagas, valorMetroQuadrado, vendedor, corretor){};