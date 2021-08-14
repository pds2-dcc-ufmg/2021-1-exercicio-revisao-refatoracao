#include <iostream>
#include <string>
#include "Cliente.hpp"
#include "Apartamento.hpp"

Apartamento::Apartamento(string cor, double a, int q, int b, int vag, double valm2, Cliente ven): Imovel(cor, a, q, b, vag, valm2, ven){
    _porcComissao = 0.04;
    _taxa = 4;
};

void Apartamento::print() {
            cout << "[Apartamento]" << endl;
            Imovel::print();
}
