#include "Imovel.hpp"

double Imovel::getArea(){
    return this->area;
}
void Imovel::setArea(double ar){
    this->area = ar;
}

int Imovel::getQtdQuartos(){
    return this->qtdQuartos;
}
void Imovel::setQtdQuartos(int qQuar){
    this->qtdQuartos = qQuar;
}

int Imovel::getQtdBanheiros(){
    return this->qtdBanheiros;
}

void Imovel::setQtdBanheiros(int qBan){
    this->qtdBanheiros = qBan;
}

int Imovel::getQtdVagas(){
    return this->qtdVagas;
}
void Imovel::setQtdVagas(int qVaga){
    this->qtdVagas = qVaga;
}

double Imovel::getValorPorArea(){
    return this->valorPorArea;
}
void Imovel::setValorPorArea(double valorM2){
    this->valorPorArea = valorM2 * this->area;
}

double Imovel::getValorTotal(){
    return this->valorTotal;
}
void Imovel::setValorTotal(){
    this->valorTotal = getValorCom() + getValorPorArea();
}

double Imovel::getValorCom(){
    return this->valorComissao;
}
void Imovel::setValorCom(double vMetro){
    this->valorComissao = vMetro * getTaxa();
}

Cliente Imovel::getVendedor(){
    return this->vendedor;
}
void Imovel::setVendedor(Cliente c1){
    this->vendedor = c1;
}

string Imovel::getCorretor(){
    return this->corretor;
}
void Imovel::setCorretor(string corr){
    this->corretor = corr;
}

void Imovel::printVendedorCorretor(){
    cout << "[Vendedor]" << endl;
    getVendedor().print();
    cout << "[Corretor]" << endl;
    cout << "  " + corretor << endl;
}