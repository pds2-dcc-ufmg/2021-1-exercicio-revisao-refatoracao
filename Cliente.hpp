#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>

using namespace std;

class Cliente {
  private:
    string NOME;
    string ENDERECO;
    string CIDADE;
    string UF;
    string CEP;
    string TELEFONE;
	public:
    Cliente();
		Cliente(string _nome, string _endereco, string _cidade, string _uf, string _cep,string _telefone);
    void print();
};

#endif