#include <iostream>
#include <string>
#include "Cliente.hpp"

// Construtor
Cliente::Cliente() {
    set_nome("");
    set_endereco("");
    set_cidade("");
    set_estado("");
    set_cep("");
    set_telefone("");
}

// Metodos
std::string Cliente::get_nome()     {return _nome;}
std::string Cliente::get_endereco() {return _endereco;}
std::string Cliente::get_cidade()   {return _cidade;}
std::string Cliente::get_estado()   {return _estado;}
std::string Cliente::get_cep()      {return _cep;}
std::string Cliente::get_telefone() {return _telefone;}

void Cliente::set_nome(std::string nome)         {_nome = nome;}
void Cliente::set_endereco(std::string endereco) {_endereco = endereco;}
void Cliente::set_cidade(std::string cidade)     {_cidade = cidade;}
void Cliente::set_estado(std::string estado)     {_estado = estado;}
void Cliente::set_cep(std::string cep)           {_cep = cep;}
void Cliente::set_telefone(std::string telefone) {_telefone = telefone;}

void Cliente::print() {
    std::cout << "  Nome: "     << get_nome()     << std::endl
              << "  Telefone: " << get_telefone() << std::endl
              << "  Endereço: " << get_endereco() << std::endl
              << "  Cidade: "   << get_cidade()   << std::endl
              << "  Estado: "   << get_estado()   << std::endl
              << "  CEP: "      << get_cep()      << std::endl;
}
