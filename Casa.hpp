#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    public:

    double valor() {

        double valor = area * valor_por_m2;

        return valor;

    }

    double comissao() {

        double comissao = valor();

        return comissao * taxa_de_comissao;

    }

    void print() {

        Imovel::print("[Casa]", taxa_de_comissao);
        
    }

    private:

    double taxa_de_comissao = 0.06;

};

#endif