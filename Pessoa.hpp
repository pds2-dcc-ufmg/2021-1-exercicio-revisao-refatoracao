#ifndef PESSOA_HPP
#define PESSOA_HPP

#include <string>
using namespace std;

class Pessoa {
    private:
        string nome;
        string endereco;
        string cidade;
        string estado;
        string cep;
        string telefone;

    public:

    Pessoa(string _nome, string _endereco, string _cidade, string _estado, string _cep, string _telefone);
    Pessoa()=default;
   

    // imprime os dados da Pessoa
        void imprime_dados();
    
        string get_nome();
        string get_endereco();
        string get_cidade();
        string get_estado();
        string get_cep();
        string get_telefone();


    
};

#endif