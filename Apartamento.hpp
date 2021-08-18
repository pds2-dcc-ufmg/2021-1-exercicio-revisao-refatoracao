#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"


using namespace std;

class Apartamento : public Imovel {

    public: 
    
    double valor() override;

    double comissao() override;
    
    void print() override;

    private: 
    
    double txa_comissao_apt = 0.04;

};

#endif
