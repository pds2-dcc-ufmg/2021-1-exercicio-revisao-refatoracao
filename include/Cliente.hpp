#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>

using namespace std;

class Cliente {

    public:

        //Default construtor
        Cliente();

        //Constutor de Cliente
        Cliente(string NOME, string endereco, string CIDADE, string UF, string cep, string telefone);

        //Destrutor de Cliente
        ~Cliente();

        //Imprime na tela as informações do cliente
        void print();

        //Acessa o nome do cliente
        string get_NOME();

        //Acessa o endereço do cliente
        string get_endereco();

        //Acessa a cidade do cliente
        string get_CIDADE();

        //Acessa o estado do cliente
        string get_UF();

        //Acessa o CEP do cliente
        string get_cep();

        //Acessa o telefone do cliente
        string get_telefone();


    private:

        //Dados do cliente
        string NOME;
        string endereco;
        string CIDADE;
        string UF;
        string cep;
        string telefone;
};

#endif