#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

/* Esta subclasse representa um tipo de imóvel, no caso, um apartamento */
class Apartamento : public Imovel {
    private:
    const double COMISSAOAPARTAMENTO = 0.04;

    public: 
    double valor() override;

    double comissao() override;

    void imprimeApartamento();
    
};

#endif