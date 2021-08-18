#include "Imovel.hpp"
#include <iostream>
#include <iomanip>
#include "Cliente.hpp"
using namespace std;

double Imovel::CalcularValor() {
    return this->area*this->valorM2;
};

void Imovel::Print() {
         
};

