#include <iostream>
#include <string>
#include "Cliente.hpp"
#include "Casa.hpp"

#define PORCENT_COMISSAO 0.06
#define TAXA_COMISSAO 6

Casa::Casa(string cor, double a, int q, int b, int vag, double valm2,  Cliente ven): Imovel(cor, a, q, b, vag, valm2, ven){
    _porcComissao = PORCENT_COMISSAO;//variavel que armazena a porcentagem da comissao para casass
    _taxa = TAXA_COMISSAO;// variavel que armazena a taxa de comissao para casas
};

void Casa::print() {
    cout << "[Casa]" << endl;
    Imovel::print();
}
