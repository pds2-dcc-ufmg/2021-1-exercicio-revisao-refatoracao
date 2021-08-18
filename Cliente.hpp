#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
    public:
        string Nome;
        string Endereco;
        string Cidade;
        string UF;
        string Cep;
        string Telefone;
    
        Cliente(string _Nome, string _Endereco, string _Cidade, string _UF, string _Cep, string _Telefone);
    
        Cliente();

        string GetNome();
    
        string GetEndereco();
    
        string GetCidade();
    
        string GetUF();
    
        string GetCep();
    
        string GetTelefone();
    
        void SetNome(string _Nome);
    
        void SetEndereco(string _Endereco);
    
        void SetCidade(string _Cidade);
    
        void SetUF(string _UF);
    
        void SetCep(string _Cep);
    
        void SetTelefone(string _Telefone);

        const void print();
};

#endif
