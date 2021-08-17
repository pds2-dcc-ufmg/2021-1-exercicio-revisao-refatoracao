#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    public:
        Casa(
            string corr,
            double ar,
            int qrto,
            int banh,
            int vagas,
            double valorMetro,
            Cliente vendedor
        );
        //Método de printar os valores relacionados ao imóvel
        void print();
        //Método para utilizar a taxa do tipo Casa
        double getTaxa() override;

    private:
        double taxaCasa = 0.06;

};

#endif