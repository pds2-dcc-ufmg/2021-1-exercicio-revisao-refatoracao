#include <iostream>
#include <iomanip>
#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

Imovel::Imovel(){
    area      = 0;
    quartos   = 0;
    banheiros = 0;
    vagas     = 0;
    valorm2   = 0;
    val_venda = 0;
    comissao  = 0;
    corretor  = ' ';
    vendedor = new Cliente();
}

void Imovel::setArea(double _area){
    area = _area;
}

void Imovel::setComodos(int _quarto, int _banheiro, int _vaga){
    quartos   = _quarto;
    banheiros = _banheiro;
    vagas     = _vaga;
}

void Imovel::setValorm2(double _valorm2){
    valorm2 = _valorm2;
}

void Imovel::setValor(double _comissao){
    val_venda = val_venda * valorm2 * comissao;
}

void Imovel::setComissao(double _comissao){
    comissao = _comissao * area * valorm2;
}

void Imovel::setCliente(Cliente cl){
    vendedor->setEndereco(cl.getEndereco('e'), cl.getEndereco('c'), cl.getEndereco('u'), cl.getEndereco('p'));
    vendedor->setName(cl.getNome());
    vendedor->setTelefone(cl.getTelefone());
}

void Imovel::setCorretor(string _corretor){
    corretor = _corretor;
}

int Imovel::getComodo(char v){
    switch (v){
    case 'q':
        return quartos;
        break;
    case 'b':
        return banheiros;
        break;
    case 'v':
        return vagas;
        break;
    default:
        break;
    }
}

double Imovel::getArea(){
    return area;
}

double Imovel::getValorm2(){
    return valorm2;
}

double Imovel::getValor(){
    return val_venda;
}

double Imovel::getComissao(){
    return comissao;
}

void Imovel::print(){
    cout << "[Vendedor]" << endl;
    vendedor->print();
    cout << "[Corretor]" << endl;
    cout << "  " + corretor << endl;
}