#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente
{
public:
    Cliente() {}
    Cliente(std::string nome, std::string endereco, std::string cidade, std::string uf, std::string cep, std::string telefone);

    /**
     *\Este metodo imprime os dados de cada cliente.
     */
    void print();

    std::string getNome(){};
    std::string getEndereco(){};
    std::string getCidade(){};
    std::string getUf(){};
    std::string getCep(){};
    std::string getTelefone(){};

    void setNome(std::string nome){};
    void setEndereco(std::string endereco){};
    void setCidade(std::string cidade){};
    void setUf(std::string uf){};
    void setCep(std::string cep){};
    void setTelefone(std::string telefone){};

private:
    std::string nome;
    std::string endereco;
    std::string cidade;
    std::string uf;
    std::string cep;
    std::string telefone;
};

#endif