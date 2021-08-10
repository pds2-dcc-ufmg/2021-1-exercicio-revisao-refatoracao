#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::Print() {
  std::cout << "  Nome: " << nome_ << endl
            << "  Telefone: " << telefone_ << endl
            << "  Endereço: " << endereco_ << endl
            << "  Cidade: " << nome_ << endl
            << "  Estado: " << uf_ << endl
            << "  CEP: " << cep_ << endl;
}

void Cliente::set_nome(string nome) { nome_ = nome; }
void Cliente::set_endereco(string endereco) { endereco_ = endereco; }
void Cliente::set_cidade(string cidade) { cidade_ = cidade; }
void Cliente::set_uf(string uf) { uf_ = uf; }
void Cliente::set_cep(string cep) { cep_ = cep; }
void Cliente::set_telefone(string telefone) { telefone_ = telefone; }

string Cliente::get_nome() const { return nome_; }
string Cliente::get_endereco() const { return endereco_; }
string Cliente::get_cidade() const { return cidade_; }
string Cliente::get_uf() const { return uf_; }
string Cliente::get_cep() const { return cep_; }
string Cliente::get_telefone() const { return telefone_; }
