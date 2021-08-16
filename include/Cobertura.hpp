#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"

class Cobertura : public Imovel {
    
public:
    Cobertura();
    Cobertura(const int&, const int&, const int&, const double&, const double&, const Cliente&, const string&);
    // Função para printar informações essenciais a respeito do imóvel, como o valor total a ser pago, número de cômodos e etc
    void print() const override;
};

#endif