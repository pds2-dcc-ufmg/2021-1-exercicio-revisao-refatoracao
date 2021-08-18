#include <iostream>
#include <iomanip>
#include "Cliente.hpp"
#include "Imovel.hpp"

void Imovel:: print(){
    std::cout << "[Vendedor]" << std::endl;
    vendedor.print();
    std::cout << "[Corretor]" << std::endl;
    std::cout << "  " + corretor << std::endl;
}