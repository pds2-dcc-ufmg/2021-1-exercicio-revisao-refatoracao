#include "cria_cliente.hpp"

Cliente criar_cliente(string nome, string endereco, string cidade, string uf, string cep, string telefone){
    Cliente cliente;
    cliente.set_nome(nome);
    cliente.set_endereco(endereco);
    cliente.set_cidade(cidade);
    cliente.set_uf(uf);
    cliente.set_cep(cep);
    cliente.set_telefone(telefone);
    
    return cliente;
}