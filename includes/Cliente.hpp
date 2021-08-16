#ifndef CLIENTE_HPP
#define CLIENTE_HPP
#include <string>
#include <vector>

class Cliente {
    private:
    std::string Nome;
    std::string Endereco;
    std::string Cidade;
    std::string UF;
    std::string CEP;
    std::string Telefone;
    std::vector<Cliente> VetorClientes;

    public:
    /*
    Construtor
    */
    Cliente();

    void setNome(std::string Nome);
    std::string getNome();

    void setEndereco(std::string Endereco);
    std::string getEndereco();

    void setCidade(std::string Cidade);
    std::string getCidade();

    void setUF(std::string UF);
    std::string getUF();

    void setCEP(std::string CEP);
    std::string getCEP();

    void setTelefone(std::string Telefone);
    std::string getTelefone();

    /*
    Armazena os clientes no vetor
    */
    void adicionar(Cliente cl);

    /*
    Imprime as informações 
    dos clientes
    */
    void print();  
};

#endif