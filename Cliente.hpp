#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
public:
    Cliente(string nome, string endereco, string cidade,
        string UF, string CEP, string telefone) :
        nome_(nome),
        endereco_(endereco),
        cidade_(cidade),
        UF_(UF),
        CEP_(CEP),
        telefone_(telefone) {}

    void PrintarDados() const;
private:
    string nome_;
    string endereco_;
    string cidade_;
    string UF_;
    string CEP_;
    string telefone_;
};

#endif