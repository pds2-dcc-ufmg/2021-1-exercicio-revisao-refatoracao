//Incluindo bibliotecas
#include <iostream>
#include <iomanip>
#include <string>

//Incluindo .hpp
#include "Imovel.hpp"

//Namespace
using namespace std;

//Implementação dos métodos
//Imprime dados do imóvel
void Imovel::print(){
    cout << "[Vendedor]" << endl;
    _vendedor.print();
    cout << "[Corretor]" << endl;
    cout << "  " + _corretor << endl;
}

//Calcula o valor do imóvel
double Imovel::calculaValorImovel() {
    double valorImovel = _area * _valorMetroQuadrado;
    return valorImovel;
}

//Construtor de um imóvel
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