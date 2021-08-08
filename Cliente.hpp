#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
    public: 
        Cliente(
            string nome,
            string endereco,
            string cidade,
            string uf,
            string cep,
            string telefone
        ) : 
            _nome(nome), 
            _endereco(endereco),
            _cidade(cidade),
            _uf(uf),
            _cep(cep),
            _telefone(telefone) {}

        string getNome() { return _nome; };
        string getEndereco() { return _endereco; };
        string getCidade() { return _cidade; };
        string getUF() { return _uf; };
        string getCEP() { return _cep; };
        string getTelefone() { return _telefone; };

        void setNome(string nome) { _nome = nome; };
        void setEndereco(string endereco) { _endereco = endereco; };
        void setCidade(string cidade) { _cidade = cidade; };
        void setUF(string uf) { _uf = uf; };
        void setCEP(string cep) { _cep = cep; };
        void setTelefone(string telefone) { _telefone = telefone; };

        void print();

    private:
        string _nome;
        string _endereco;
        string _cidade;
        string _uf;
        string _cep;
        string _telefone;
};

#endif