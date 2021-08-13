#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Pessoa.hpp"
using namespace std;
class Cobertura : public Imovel {
    
    public:

    Cobertura() {};
    Cobertura (const char *corretor, 
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