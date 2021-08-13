#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Pessoa.hpp"

using namespace std;

class Apartamento : public Imovel {

    public: 

    Apartamento() {};
    Apartamento (const char *corretor, 
    double AREA, 
    int Quartos, 
    int banheiros, 
    int Vagas,
    double VALORm2, 
    Pessoa vendedor);
    
    double valorImovel() override;

    double comissaoImovel() override;

    void print();

};

#endif