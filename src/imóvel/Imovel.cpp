#include <iostream>
#include <string>
#include "Imovel.hpp"

void Imovel::setArea(double aux){
    area=aux;
}

void Imovel::setB(int aux){
    B=aux;
}

void Imovel::setC(double aux){
    C=aux;
}

void Imovel::setVendedor(Cliente aux){
    vendedor=aux;
}

void Imovel::setCorretor(string aux){
    corretor=aux;
}

void Imovel::setQ(int aux){
    Q=aux;
}

void Imovel::setV(int aux){
    V=aux;
}

void Imovel::setValor(double aux){
    Valor=aux;
}

void Imovel::setValorm2(double aux){
    valorm2=aux;
}

double Imovel::getArea(){
    return area;
}

int Imovel::getQ(){
    return Q;
}

int Imovel::getV(){
    return V;
}

int Imovel::getB(){
    return B;
}

double Imovel::getValorm2(){
    return valorm2;
}

double Imovel::getValor(){
    return Valor;
}

double Imovel::getC(){
    return C;
}

void Imovel::print(){
    cout << "[Vendedor]" << endl;
        vendedor.print();
        cout << "[Corretor]" << endl;
        cout << "  " + corretor << endl;
}