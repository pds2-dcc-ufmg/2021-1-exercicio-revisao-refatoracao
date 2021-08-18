#include "Cliente.hpp"

Cliente::Cliente(std::string nome, std::string endereco, std::string cidade, 
                 std::string uf, std::string cep, std::string telefone) 
        : nome_(nome), endereco_(endereco), cidade_(cidade), uf_(uf),
          cep_(cep), telefone_(telefone) {}

void Cliente::print() const {
    std::cout << "  Nome: " << nome_ << std::endl;
    std::cout << "  Telefone: " << telefone_ << std::endl;
    std::cout << "  Endereço: " << endereco_ << std::endl;
    std::cout << "  Cidade: " << cidade_ << std::endl;
    std::cout << "  Estado: " << uf_ << std::endl;
    std::cout << "  CEP: " << cep_ << std::endl;
}

void Cliente::set_nome(std::string nome) { nome_ = nome; }
void Cliente::set_endereco(std::string endereco) { endereco_ = endereco; }
void Cliente::set_cidade(std::string cidade) { cidade_ = cidade; }
void Cliente::set_uf(std::string uf) { uf_ = uf; }
void Cliente::set_cep(std::string cep) { cep_ = cep; }
void Cliente::set_telefone(std::string telefone) { telefone_ = telefone; }

std::string Cliente::get_nome() const { return nome_; }
std::string Cliente::get_endereco() const { return endereco_; }
std::string Cliente::get_cidade() const { return cidade_; }
std::string Cliente::get_uf() const { return uf_; }
std::string Cliente::get_cep() const { return cep_; }
std::string Cliente::get_telefone() const { return telefone_; }
