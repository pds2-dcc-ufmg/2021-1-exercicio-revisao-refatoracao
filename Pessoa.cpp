#include <iostream>
#include <string>
#include "Pessoa.hpp"

	Pessoa::Pessoa(string _nome, string _endereco, string _cidade, string _estado, string _cep, string _telefone)
	{
		this->nome = _nome;
		this->endereco = _endereco;
		this->cidade = _cidade;
		this->estado = _estado;
		this->cep = _cep;
		this->telefone = _telefone;
	}

    void Pessoa::imprime_dados()
    {
	    std::cout << "  Nome: " << this->get_nome() << endl
		 		  << "  Telefone: " << this->get_telefone() << endl
		 		  << "  Endereço: " << this->get_endereco() << endl
		 		  << "  Cidade: " << this->get_cidade() << endl
		 		  << "  Estado: " << this->get_estado() << endl
		 		  << "  CEP: " << this->get_cep() << endl;
    }

    string Pessoa::get_nome() 
    { 
        return this->nome; 
    }

    string Pessoa::get_endereco() 
	{ 
		return this->endereco; 
	}

    string Pessoa::get_cidade() 
	{ 
		return this->cidade; 
	}

    string Pessoa::get_estado() 
	{ 
		return this->estado; 
	}

    string Pessoa::get_cep() 
	{ 
		return this->cep; 
	}

    string Pessoa::get_telefone() 
	{ 
		return this->telefone; 
	}

