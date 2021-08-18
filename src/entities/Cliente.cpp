#include "Cliente.hpp"
#include <iostream>
#include <string>

Cliente::Cliente() {}

Cliente::Cliente(std::string nome, std::string endereco, std::string cidade,
                 std::string uf, std::string cep, std::string telefone) {
  this->nome = nome;
  this->endereco = endereco;
  this->cidade = cidade;
  this->uf = uf;
  this->cep = cep;
  this->telefone = telefone;
}

void Cliente::print() {
  std::cout << "  Nome: " << nome << std::endl
            << "  Telefone: " << telefone << std::endl
            << "  Endereço: " << endereco << std::endl
            << "  Cidade: " << cidade << std::endl
            << "  Estado: " << uf << std::endl
            << "  CEP: " << cep << std::endl;
}