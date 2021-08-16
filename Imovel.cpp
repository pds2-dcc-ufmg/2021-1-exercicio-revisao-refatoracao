#include <iostream>
#include <iomanip>
#include <string>
#include "Imovel.hpp"

using namespace std;

void Imovel::print(){
    cout << "[Vendedor]" << endl;
    _vendedor.print();
    cout << "[Corretor]" << endl;
    cout << "  " + _corretor << endl;
}

Imovel::Imovel(double area, int quartos, int banheiros, 
                int vagas, double valorMetroQuadrado, 
                Cliente vendedor, string corretor){
    this->_area = area;
    this->_quartos = quartos;
    this->_banheiros = banheiros;
    this->_vagas = vagas;
    this->_valorMetroQuadrado = valorMetroQuadrado;
    this->_vendedor = vendedor;
    this->_corretor = corretor;
}