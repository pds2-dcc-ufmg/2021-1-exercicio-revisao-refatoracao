#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente 
{
    public:
        void print();

        Cliente();
        Cliente(string nome, string endereco, string cidade, string uf, string cep, string telefone);

        void setNome(string nome);
        void setEndereco(string endereco);
        void setCidade(string cidade);
        void setUf(string uf);
        void setCep(string cep);
        void setTelefone(string telefone);

        string getNome();
        string getEndereco();
        string getCidade();
        string getUf();
        string getCep();
        string getTelefone();

    private:
        string _nome;
        string _endereco;
        string _cidade;
        string _uf;
        string _cep;
        string _telefone;
};

#endif