#include <iostream>
#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

double Imovel::ValorImovel(){

    return AREA * VALORm2;
}

double Imovel::ValorComissão(){

    return (ValorImovel() * Taxa);
}

void Imovel::print() {
  std::cout << "[Vendedor]" << std::endl;
  vendedor.print();
  std::cout << "[Corretor]" << std::endl;
  std::cout << "  " + corretor << std::endl;
  std::cout << "Area: " << AREA << std::endl
            << "Quartos: " << Quarto << std::endl
            << "Banheiros: " << Banheiro << std::endl
            << "Vagas: " << Vagas << std::endl;
}

