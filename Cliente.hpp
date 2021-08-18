#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
    public:
    	//Dados do cliente dono do imovel
        string nome;
        string endereco;
        string cidade;
        string UF;
        string cep;
        string telefone;

        void print();
};

#endif