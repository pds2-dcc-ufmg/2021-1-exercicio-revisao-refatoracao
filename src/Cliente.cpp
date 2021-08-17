#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente(string _nome,
                 string _endereco,
                 string _cidade,
                 string _uf,
                 string _cep,
                 string _telefone)
                 : nome(_nome),
                   endereco(_endereco),
                   cidade(_cidade),
                   uf(_uf),
                   cep(_cep),
                   telefone(_telefone) {};

void Cliente::imprimeInformacoes() {
    std::cout << "  Nome: " << nome << std::endl
         << "  Telefone: " << telefone << std::endl
         << "  Endereço: " << endereco << std::endl
         << "  Cidade: " << cidade << std::endl
         << "  Estado: " << uf << std::endl
         << "  CEP: " << cep << std::endl;
}