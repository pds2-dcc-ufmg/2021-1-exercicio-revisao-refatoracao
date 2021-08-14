#include <iostream>
#include <string>
#include "Cliente.hpp"
#include "Cobertura.hpp"

#define PORCENT_COMISSAO 0.1
#define TAXA_COMISSAO 10

Cobertura::Cobertura(string cor, double a, int q, int b, int vag, double valm2, Cliente ven): Imovel(cor, a, q, b, vag, valm2, ven){
    _porcComissao = PORCENT_COMISSAO;//variavel que armazena a porcentagem da comissao para coberturas
    _taxa = TAXA_COMISSAO;// variavel que armazena a taxa de comissao para coberturas
};

void Cobertura::print() {
    std::cout << "[Cobertura]" << endl;
    Imovel::print();
}
