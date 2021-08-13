#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Pessoa.hpp"

using namespace std;

class Casa : public Imovel {

    public:

    Casa() {};
    Casa (const char *corretor, 
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