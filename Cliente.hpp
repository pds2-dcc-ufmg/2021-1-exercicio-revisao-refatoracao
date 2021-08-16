#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
    public:
        // Criação de métodos get e set para acessar as variáveis
        void setNome(string Nome), setEndereço(string Endereço), setCidade(string Cidade), setUf(string Uf), setCep(string Cep), setTelefone(string Telefone);
        string getNome(), getEndereço(), getCidade(), getUf(), getCep(), getTelefone();

        void print();
    
    private:
        string nome, endereço, cidade, uf, cep, telefone;
};

#endif
