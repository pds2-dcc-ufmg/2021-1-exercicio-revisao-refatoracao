#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {
    private:
        static int numCasa;
        static double pctComissao;

    public:
        static int getNumCasa();

        void print() override;

        Casa(double area,
             double vm2,
             int q,
             int b,
             int v,
             string corretor,
             Cliente* vendedor) : Imovel(area, vm2, q, b, v, corretor, vendedor, pctComissao) {
            numCasa++;
        }

        ~Casa() {
            numCasa--;
        }
};

#endif