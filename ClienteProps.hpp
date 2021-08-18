#ifndef CLIENT_PROPS_HPP
#define CLIENT_PROPS_HPP

#include <string>

typedef struct ClienteProps {
  std::string nome;
  std::string endereco;
  std::string cidade;
  std::string uf;
  std::string cep;
  std::string telefone;
} ClienteProps;

#endif 