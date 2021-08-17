#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
    public:
      string NOME;
      string ENDERECO;
      string CIDADE;
      string UF;
      string CEP;
      string TELEFONE;
      void print();
};

#endif