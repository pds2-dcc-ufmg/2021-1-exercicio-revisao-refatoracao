#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
    private:
        string _nome;
        string _endereco;
        string _cidade;
        string _UF;
        string _cep;
        string _telefone;
    public:
    //Construtor Padrão
        Cliente();

    //Função para apresenta as informações do cliente
        void print(); 

    //Funções setter's
        void setNome(string nome);
        void setEndereco(string endereco);
        void setCidade(string cidade);
        void setUF(string UF);
        void setCep(string cep);
        void setTelefone(string telefone);

    //Funções getter's
        string getNome(); 
        string getEndereco();
        string getCidade(); 
        string getUF();
        string getCep();
        string getTelefone();
        
};

#endif