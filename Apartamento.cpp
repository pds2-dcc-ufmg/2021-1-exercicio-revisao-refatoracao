#include <iostream>
#include <string>
#include "Cliente.hpp"
#include "Apartamento.hpp"

#define PORCENT_COMISSAO 0.04
#define TAXA_COMISSAO 4

Apartamento::Apartamento(string cor, double a, int q, int b, int vag, double valm2, Cliente ven): Imovel(cor, a, q, b, vag, valm2, ven){
    _porcComissao = PORCENT_COMISSAO;//variavel que armazena a porcentagem da comissao para apartamentos
    _taxa = TAXA_COMISSAO;// variavel que armazena a taxa de comissao para apartamentos 
};

void Apartamento::print() {
            cout << "[Apartamento]" << endl;
            Imovel::print();
}
