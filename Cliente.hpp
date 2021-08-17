#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
    private:
        string NOME;
        string ENDERECO;
        string CIDADE;
        string UF;
        string CEP;
        string TELEFONE;
	public:
        void print(); 		//Imprime dados gerais do cliente
		Cliente();
		Cliente(string nome,string endereco,string cidade,string uf,string cep,string telefone);
};

#endif