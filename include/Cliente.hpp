#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>

using namespace std;

class Cliente {
    // Encapsulamento
    private:
        string nome, endereco, cidade, estado, cep, telefone;

    public:
        // Setter para os dados dos clientes
        void setCliente(string _nome, string _endereco, string _cidade, string _estado, string _cep, 
        string _telefone);

        void print();
};

#endif