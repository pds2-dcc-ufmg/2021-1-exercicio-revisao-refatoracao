#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
    public:
        // Criação de métodos get e set para acessar as variáveis
        void setNome(string nome), setEndereço(string endereço), setCidade(string cidade), setUf(string uf), setCep(string cep), setTelefone(string telefone);
        string getNome(), getEndereço(), getCidade(), getUf(), getCep(), getTelefone();

        void print();
    
    private:
        string nome, endereço, cidade, uf, cep, telefone;
};

#endif
