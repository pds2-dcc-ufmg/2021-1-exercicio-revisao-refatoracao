#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

/*
 *  Mudanças neste segmento:
 *      ---> Renomeação das variáveis
 *      ---> Novo método adicionado: Construtor
 *      ---> Renomeação da função print() , agora chamada info()
 *          
 */
class Cliente {
    private:
        string _nome , _endereco , _cidade , _uf , _cep , _telefone;
    
    public:
        Cliente(string nome, string endereco , string cidade , string uf, string cep , string telefone);

        void info();
};

#endif