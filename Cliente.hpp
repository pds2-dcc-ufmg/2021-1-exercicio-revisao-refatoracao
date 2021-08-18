#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>

using namespace std;

class Cliente {

    protected:

        string NOME;
        string ENDERECO;
        string CIDADE;
        string UF;
        string CEP;
        string TELEFONE;
    
    public:

        void Impressao_Cliente();

        void Inicializar_Cliente(string NOME, string ENDERECO, string CIDADE, string UF, string CEP, string TELEFONE);
};

#endif