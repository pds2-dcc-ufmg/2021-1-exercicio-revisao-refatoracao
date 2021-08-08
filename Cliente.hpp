#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

// Este módulo implementa um cliente.
// OBS: Os itens são armazenados na memória.
// Cada cliente possui nome, endereço, cidade, uf (unidade federativa), cep e telefone.
// Os dados do cliente são definidos como std::string.
// É definido aqui, mas só é implementado no arquivo Cliente.cpp

class Cliente {
    public:
        string NOME;
        string endereco;
        string CIDADE;
        string UF;
        string cep;
        string telefone;
        // Imprime os dados do cliente
        void print();
};

#endif