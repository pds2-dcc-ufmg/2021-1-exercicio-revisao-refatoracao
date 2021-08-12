#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente
{
public:
    //Construtor do cliente
    Cliente(){};
    Cliente(const char *nome, const char *end, const char *cid, const char *unifed, const char *cp, const char *tel);
    
    //Printa os dados do cliente
    void print();

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