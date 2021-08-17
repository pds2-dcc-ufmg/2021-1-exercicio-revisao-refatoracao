#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

/* Essa classe representa um cliente, que possui alguns atributos que o definem, além de um método
que imprime seus dados*/
class Cliente {
    public:
        string nome;
        string endereco;
        string cidade;
        string uf;
        string cep;
        string telefone;
        
        /* Imprime os dados do cliente */
        void imprimeDados();
};

#endif