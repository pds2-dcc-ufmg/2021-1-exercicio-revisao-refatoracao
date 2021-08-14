#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>

using std::string;
using std::cout;
using std::endl;

class Cliente {
    public:
        string _nome;
        string _endereco;
        string _cidade;
        string _estado;
        string _cep;
        string _telefone;
    
        Cliente(string, string, string, string, string, string);

        void print();
};

#endif
