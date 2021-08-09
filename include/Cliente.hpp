#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
    public:
        Cliente(string nome,
            string endereco,
            string cidade,
            string uf,
            string cep,
            string telefone):
            _nome(nome),
            _endereco(endereco),
            _cidade(cidade),
            _uf(uf),
            _cep(cep),
            _telefone(telefone) {}

        void print();
        string getNome();
        string getEndereco();
        string getCidade();
        string getUf();
        string getCep();
        string getTelefone();
        void setNome(string nome);
        void setEndereco(string endereco);
        void setCidade(string cidade);
        void setUf(string uf);
        void setCep(string cep);
        void setTelefone(string telefone);
    private:
        string _nome;
        string _endereco;
        string _cidade;
        string _uf;
        string _cep;
        string _telefone;
};

#endif