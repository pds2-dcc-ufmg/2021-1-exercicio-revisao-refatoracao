#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {

    public:
        //Metódos get e set para as variáveis
        void setNome(string nome);
        string getNome();
        void setEndereco(string Endereco);
        string getEndereco();
        void setCidade(string Cidade);
        string getCidade();
        void setUF(string UF);
        string getUF();
        void setCep(string Cep);
        string getCep();
        void setTelefone(string Telefone);
        string getTelefone();

        void print();

    private: 
        string NOME;
        string endereco;
        string CIDADE;
        string UF;
        string cep;
        string telefone;
};

#endif