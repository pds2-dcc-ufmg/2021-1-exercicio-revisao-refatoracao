#include <iostream>
#include <iomanip>
#include "Cliente.hpp"
#include "Imovel.hpp"

Imovel::Imovel() {}

int Imovel::setBanheiros (int value){
    Banheiros = value;
}
int Imovel::getBanheiros (){
    return Banheiros;
}