
#include <string>
#include "Cliente.hpp"


void Cliente::print () {
  std::cout
    << "  Nome: " << _props.nome << endl
    << "  Telefone: " << _props.telefone << endl
    << "  Endereço: " << _props.endereco << endl
    << "  Cidade: " << _props.cidade << endl
    << "  Estado: " << _props.uf << endl
    << "  CEP: " << _props.cep << endl;
}