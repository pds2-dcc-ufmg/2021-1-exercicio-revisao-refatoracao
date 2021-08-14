#include <iostream>
#include <string>
#include "Imovel.hpp"

using namespace std;


void Imovel::set_imovel(double areaImovel,int numeroQuartos, int numeroBanheiros, 
int numeroVagas,double valorM2, Cliente vendedor, string corretor){
    areaImovel_ = areaImovel;
    numeroQuartos_ = numeroQuartos;
    numeroBanheiros_ = numeroBanheiros;
    numeroVagas_ = numeroVagas;
    valorM2_ = valorM2;
    vendedor_ = vendedor;
    corretor_ = corretor;
    valorComissao_ = this->comissao();
    valorImovel_ = this->valor() + this->comissao();
}


double Imovel:: valor() {
    double valor = areaImovel_ * valorM2_;
    return valor;
}


double Imovel::comissao() {
    double comissao = areaImovel_ * valorM2_;
    return comissao * TRASFORMAR_EM_PROCENTAGEM * this->taxaComissao();   
}


void Imovel::print() {
    std::cout << this->tipoImovel() << endl;
    cout << "[Vendedor]" << endl;
    vendedor_.print();
    cout << "[Corretor]" << endl;
    cout << "  " + corretor_ << endl;
    std::cout << "Area: " << areaImovel_ << endl
    << "  Quartos: " << numeroQuartos_ << endl
    << "  Banheiros: " << numeroBanheiros_ << endl
    << "  Vagas: " << numeroVagas_ << endl
    << "Taxa de Comissão: " << fixed << setprecision(0) << this->taxaComissao() << "%" << endl
    << "Valor Comissão: R$ " << fixed << setprecision(2) << valorComissao_ << endl
    << "Valor de Venda: R$ " << fixed << setprecision(2) << valorImovel_ << endl;
}