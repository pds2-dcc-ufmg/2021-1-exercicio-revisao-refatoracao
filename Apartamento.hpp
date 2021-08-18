#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel{

public:
    double valor();    
    double comissao();
    
    /* Método print recebeu override pois foi herdado da classe mãe. */
    void print() override;
    
};

#endif
