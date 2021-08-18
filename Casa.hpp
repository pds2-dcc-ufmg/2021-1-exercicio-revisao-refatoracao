#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    public: 
     
    Casa ();

    Casa (string corretor_, double area_, int quartos_, int banheiros_, int vagas_, double valor_por_m2_, Cliente cl);

    double comissao();

    void print();

    private:

    double taxa_de_comissao = 0.06;

};

#endif