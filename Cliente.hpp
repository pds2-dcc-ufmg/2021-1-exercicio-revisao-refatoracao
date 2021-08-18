#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
    
    Cliente (string name, string adress, string city, string state, string cepy, string tel) :
    nome(name), endereco(adress), cidade(city), unidade_federal(state), cep(cepy), telefone(tel) {}
    
    public:
        void print();
    
    private:
        string nome;
        string endereco;
        string cidade;
        string unidade_federal;
        string cep;
        string telefone;

};

#endif
