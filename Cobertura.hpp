#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Cobertura : public Imovel {
    private:
    
       double TX_COBERTURA = 0.1;
    
    public:

       double valor();

       double comissao();

       void print();
};

#endif
