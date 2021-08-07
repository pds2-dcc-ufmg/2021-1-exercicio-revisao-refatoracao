#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {
    private:
        static int numApt;
        static double pctComissao;

    public:
        static int getNumApt();

        void print() override;

        Apartamento(double area,
                    double vm2,
                    int q,
                    int b,
                    int v,
                    string corretor,
                    Cliente* vendedor) : Imovel(area, vm2, q, b, v, corretor, vendedor, pctComissao) {
            numApt++;
        }

        ~Apartamento() {
            numApt--;
        }
};

#endif