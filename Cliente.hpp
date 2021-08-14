#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
    private:
        string nome;
        string endereco;
        string cidade;
        string uf;
        string cep;
        string telefone;

    public:
        //este metodo imprime os atrubutos da classe Cliente
        void print();
        
        Cliente();
        Cliente(string _nome, string _endereco, string _cidade, string _uf, string _cep, string _telefone);

        void set_nome(string _nome);
        void set_endereco(string _endereco);
        void set_cidade(string _cidade);
        void set_uf(string _uf);
        void set_cep(string _cep);
        void set_telefone(string _telefone);
        string get_nome();
        string get_endereco();
        string get_cidade();
        string get_uf();
        string get_cep();
        string get_telefone();
};

#endif