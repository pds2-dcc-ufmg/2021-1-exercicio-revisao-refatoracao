#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
    private:
        string NOME;
        string endereco;
        string CIDADE;
        string UF;
        string cep;
        string telefone;

    public:
        Cliente();
        Cliente(string nome, string endereco, string cidade, string uf, string cep, string telefone);
        ~Cliente();

        string getNome();
        string getEndereco();
        string getCidade();
        string getUf();
        string getCep();
        string getTelefone();
        void print();
};

#endif