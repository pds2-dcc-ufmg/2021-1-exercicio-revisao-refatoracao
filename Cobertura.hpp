#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Cobertura : public Imovel {
    
    public:

    double valor() override;

    double comissao() override;

    void print() override;

    private:

    double Taxa = 0.1;
};

#endif
