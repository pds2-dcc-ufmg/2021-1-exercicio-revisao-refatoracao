#include "Cliente.hpp"
#include <iostream>
#include <string>

void Cliente::print() {

  std::cout << "  Nome: " << nome << endl
            << "  Telefone: " << telefone << endl
            << "  Endereço: " << endereco << endl
            << "  Cidade: " << cidade << endl
            << "  Estado: " << unidadeFederativa << endl
            << "  CEP: " << codigoPostal << endl;
}
