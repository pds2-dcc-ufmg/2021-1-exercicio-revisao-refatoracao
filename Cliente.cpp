#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "  Nome: " << Nome << "\n"
              << "  Telefone: " << Telefone << "\n"
              << "  Endereço: " << Rua << "\n"
              << "  Cidade: " << Cidade << "\n"
              << "  Estado: " << Estado << "\n"
              << "  CEP: " << CEP << std::endl;
}

void Cliente::DadosPessoais(std::string nome, std::string telefone){
    Nome = nome;
    Telefone = telefone;
}

void Cliente::Endereco(std::string rua, std::string cidade, std::string estado, std::string cep){
    Rua = rua;
    Cidade = cidade;
    Estado = estado;
    CEP = cep;
}
