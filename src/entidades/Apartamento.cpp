#include "Apartamento.hpp"

/*double Apartamento::getArea(){
    return this->area;
}
void Apartamento::setArea(double ar){
    this->area = ar;
}

int Apartamento::getQtdQuartos(){
    return this->qtdQuartos;
}
void Apartamento::setQtdQuartos(int qQuar){
    this->qtdQuartos = qQuar;
}

int Apartamento::getQtdBanheiros(){
    return this->qtdBanheiros;
}

void Apartamento::setQtdBanheiros(int qBan){
    this->qtdBanheiros = qBan;
}

int Apartamento::getQtdVagas(){
    return this->qtdVagas;
}
void Apartamento::setQtdVagas(int qVaga){
    this->qtdVagas = qVaga;
}

double Apartamento::getValorPorArea(){
    return this->valorPorArea;
}
void Apartamento::setValorPorArea(double valorM2){
    this->valorPorArea = valorM2 * this->area;
}

double Apartamento::getValorTotal(){
    return this->valorTotal;
}
void Apartamento::setValorTotal(){
    this->valorTotal = getValorCom() + getValorPorArea();
}

double Apartamento::getValorCom(){
    return this->valorComissao;
}
void Apartamento::setValorCom(double vMetro){
    this->valorComissao = vMetro * this->taxaApto;
}

Cliente Apartamento::getCliente(){
    return this->vendedor;
}
void Apartamento::setCliente(Cliente c1){
    this->vendedor = c1;
}

string Apartamento::getCorretor(){
    return this->corretor;
}
void Apartamento::setCorretor(string corr){
    this->corretor = corr;
}*/

double Apartamento::getTaxa(){
    return this->taxaApto;
}

Apartamento::Apartamento(
    string corr,
    double ar,
    int qrto,
    int banh,
    int vagas,
    double valorMetro,
    Cliente vendedor
){
    setCorretor(corr);
    setArea(ar);
    setQtdQuartos(qrto);
    setQtdBanheiros(banh);
    setQtdVagas(vagas);
    setValorPorArea(valorMetro);
    setValorCom(getValorPorArea());
    setValorTotal();
    setVendedor(vendedor);
}
