#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <iostream>
#include <string>

class Cliente {
  public:
    Cliente(std::string nome, std::string endereco, std::string cidade, std::string uf,
            std::string cep, std::string telefone);
    Cliente() {}

    void print() const;

    void set_nome(std::string);
    void set_endereco(std::string);
    void set_cidade(std::string);
    void set_uf(std::string);
    void set_cep(std::string);
    void set_telefone(std::string);

    std::string get_nome() const;
    std::string get_endereco() const;
    std::string get_cidade() const;
    std::string get_uf() const;
    std::string get_cep() const;
    std::string get_telefone() const;

  private:
    std::string nome_;
    std::string endereco_;
    std::string cidade_;
    std::string uf_;
    std::string cep_;
    std::string telefone_;
};

#endif
