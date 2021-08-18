#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Cobertura : public Imovel {

    public: 
     
    Cobertura ();

    Cobertura (string corretor_, double area_, int quartos_, int banheiros_, int vagas_, double valor_por_m2_, Cliente cl);

    double comissao();

    void print();

    private:

    double taxa_de_comissao = 0.10;

};

#endif