#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
private:
  string nome;
  string endereco;
  string cidade;
  string unidadeFederativa;
  string codigoPostal;
  string telefone;

public:
  void print();
  Cliente(const string &_nome, const string &_endereco, const string &_cidade,
          const string &_unidadeFederativa, const string &_codigoPostal,
          const string &_telefone)
      : nome(_nome), endereco(_endereco), cidade(_cidade),
        unidadeFederativa(_unidadeFederativa), codigoPostal(_codigoPostal),
        telefone(_telefone) {}
};

#endif
