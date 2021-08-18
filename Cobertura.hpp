#ifndef COBERTURA_HPP
#define COBERTURA_HPP
#define taxaCob

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
    
    public:

    double valor();
    double ValorCobertura;
    
    double comissao();
    void print();
};

#endif
