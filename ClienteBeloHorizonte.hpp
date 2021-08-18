#ifndef CLIENTEBELOHORIZONTE_HPP
#define CLIENTEBELOHORIZONTE_HPP

#include <utility>

#include "Cliente.hpp"

class ClienteBeloHorizonte : public Cliente{
	public:
		ClienteBeloHorizonte(string nome, string endereco, string cep, string telefone)
		: Cliente(std::move(nome), std::move(endereco),
				  "Belo Horizonte", "MG", std::move(cep), std::move(telefone)) {};
};


#endif
