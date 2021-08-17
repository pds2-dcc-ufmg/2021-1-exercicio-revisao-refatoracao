#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {

    public: 
        Apartamento(
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
        //Método para utilizar a taxa do tipo Apto
        double getTaxa() override;
        
    private:
        double taxaApto = 0.04;
};

#endif