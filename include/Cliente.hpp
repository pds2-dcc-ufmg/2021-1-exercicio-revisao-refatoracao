#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include<iostream>
#include<string>
#include<iomanip>
using std::endl;
using std::string;
using std::fixed;
using std::setprecision;

class Cliente{

public:
    Cliente(const string&, const string&, const string&, const string&, const string&, const string&);
    Cliente();
    // Funções para acesso aos atributos privados da classe
    string get_nome() const;
    string get_endereco() const;
    string get_cidade() const;
    string get_estado() const;
    string get_CEP() const; 
    string get_telefone() const;
    // Funções para alteração dos atributos privados da classe
    void set_nome(const string&);
    void set_endereco(const string&);
    void set_cidade(const string&);
    void set_estado(const string&);
    void set_CEP(const string&);
    void set_telefone(const string&);
    // Função para printar os atributos da classe
    void print() const;

private:
    // Informações a respeito do cliente que procura a venda do seu imóvel
    string nome;
    string endereco;
    string cidade;
    string estado;
    string CEP;
    string telefone;
};

#endif