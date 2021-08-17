#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
    
    public:
        Cobertura(
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
        //Método para utilizar a taxa do tipo Cobertura
        double getTaxa() override;

    private:
        double taxaCobertura = 0.10;
};

#endif