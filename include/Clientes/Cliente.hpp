#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

namespace Clientes {
class Cliente {
private:
  string nome;
  string endereco;
  string cidade;
  string unidadeFederativa;
  string codigoPostal;
  string telefone;

public:
  Cliente(const string &nome, const string &endereco, const string &cidade,
          const string &unidadeFederativa, const string &codigoPostal,
          const string &telefone)
      : nome(nome), endereco(endereco), cidade(cidade),
        unidadeFederativa(unidadeFederativa), codigoPostal(codigoPostal),
        telefone(telefone) {}

  void print() const;
};
} // namespace Clientes
#endif
