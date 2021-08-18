#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <iostream>
#include <string>

class Cliente {
private:
  std::string nome;
  std::string endereco;
  std::string cidade;
  std::string uf;
  std::string cep;
  std::string telefone;

public:
  Cliente();
  Cliente(std::string nome, std::string endereco, std::string cidade,
          std::string uf, std::string cep, std::string telefone);
  void print();
};

#endif