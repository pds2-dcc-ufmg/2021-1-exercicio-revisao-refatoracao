#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
    public:
        Cliente(string n,
                string tel,
                string end,
                string cid,
                string uf,
                string cep):
            _nome(n),
            _endereco(end),
            _cidade(cid),
            _uf(uf),
            _cep(cep),
            _telefone(tel) {}

        //Getters & Setters
        string getNome(){ return _nome; }
        string getEndereco(){ return _endereco; }
        string getCidade(){ return _cidade; }
        string getUf(){ return _uf; }
        string getCep(){ return _cep; }
        string getTelefone(){ return _telefone; }
        void setNome(string n){ _nome = n; }
        void setEndereco(string end){ _endereco = end; }
        void setCidade(string cid){ _cidade = cid; }
        void setUf(string uf){ _uf = uf; }
        void setCep(string cep){ _cep = cep; }
        void setTelefone(string tel){ _telefone = tel; }

        //Imprime os dados do Cliente
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