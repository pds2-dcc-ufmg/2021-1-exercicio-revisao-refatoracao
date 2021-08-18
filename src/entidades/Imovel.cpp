#include <iostream>
#include <iomanip>
#include "Imovel.hpp"

//retorna o valor do imovel
double Imovel::getValor() {
    //valor = area em metros quadrados * valor por metro quadrado.
    return Area * ValorM2;

}
//retorna o valor da comissao
double Imovel::getComissao() {
    //valor da comissao = valor total do imovel * taxa de comissao normalizada (%/100)
    return getValor() * TaxaComissao / 100;
    
}

string Imovel::getTipo() {
    //retorna o tipo do imovel sem as [chaves]
    string aux = TipoImovel;
    aux.pop_back();
    aux.erase(aux.begin());
    return aux;
}

//imprime as informacoes do imovel
void Imovel::print() {

    std::cout << TipoImovel << endl;
    cout << "[Vendedor]" << endl;
    Vendedor.print();
    cout << "[Corretor]" << endl;
    cout << "  " + Corretor << endl;
    cout << "Area: " << Area << endl;
    cout << "  Quartos: " << Quartos << endl;
    cout << "  Banheiros: " << Banheiros << endl;
    cout << "  Vagas: " << Vagas << endl;
    cout << "Taxa de Comissão: " << TaxaComissao << "%" << endl;
    cout << "Valor Comissão: R$ " << fixed << setprecision(2) << Comissao << endl;
    cout << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
        
}

//METODOS SETTERS -> permite ao usuario alterar o valor das variaveis privadas da classe.
void Imovel::setArea(double a) {
    Area = a;
}

void Imovel::setQuartos(int q) {
    Quartos = q;
}

void Imovel::setBanheiros(int b) {
    Banheiros = b;
}

void Imovel::setVagas(int vg) {
    Vagas = vg;
}

void Imovel::setValorM2(double m2) {
    ValorM2 = m2;
}

void Imovel::setValor(double val) {
    Valor = val;
}

void Imovel::setComissao(double c) {
    Comissao = c;
}

void Imovel::setVendedor(Cliente vend) {
    Vendedor = vend;
}

void Imovel::setCorretor(string corr) {
    Corretor = corr;
}