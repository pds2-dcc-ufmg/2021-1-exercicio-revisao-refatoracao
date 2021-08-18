#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
#include <utility>
using namespace std;

class Cliente {
    public:
        string Nome;
        string Endereco;
        string Cidade;
        string Estado;
        string Cep;
        string Telefone;
		void print();

protected:
        Cliente(string nome, string endereco, string cidade, string estado, string cep, string telefone)
        : Nome(move(nome)), Endereco(move(endereco)), Cidade(move(cidade)),
        Estado(move(estado)), Cep(move(cep)), Telefone(move(telefone))
        {}

};

#endif