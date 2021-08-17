#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
    public:
        void setNome(string _nome);
        void setEndereco(string _endereco);
        void setCidade(string _cidade);
        void setUf(string _uf);
        void setCep(string _cep);
        void setTelefone(string _telefone);

        void print();

    private:
        string nome;
        string endereco;
        string cidade;
        string uf;
        string cep;
        string telefone;
};

#endif