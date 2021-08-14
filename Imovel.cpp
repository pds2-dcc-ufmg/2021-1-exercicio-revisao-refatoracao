#include <iostream>
#include <iomanip>
#include "Cliente.hpp"
#include "Imovel.hpp"

Imovel::Imovel() {}

void Imovel::setBanheiros (int banheiro){
    this -> Banheiros = banheiro;
}
int Imovel::getBanheiros (){
    return Banheiros;
}