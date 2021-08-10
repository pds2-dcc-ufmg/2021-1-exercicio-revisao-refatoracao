#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
 public:
  Cliente(string nome, string endereco, string cidade, string uf,
          string cep, string telefone);
  Cliente() {}

  void Print();

  void set_nome(string);
  void set_endereco(string);
  void set_cidade(string);
  void set_uf(string);
  void set_cep(string);
  void set_telefone(string);

  string get_nome() const;
  string get_endereco() const;
  string get_cidade() const;
  string get_uf() const;
  string get_cep() const;
  string get_telefone() const;

 private:
  string nome_;
  string endereco_;
  string cidade_;
  string uf_;
  string cep_;
  string telefone_;
};

#endif
