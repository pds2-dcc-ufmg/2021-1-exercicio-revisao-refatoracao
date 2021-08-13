#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {
    private:
    const double COMISSAOAPARTAMENTO = 0.04;

    public: 
    double valor() override;

    double comissao() override;

    void print();
    
};

#endif