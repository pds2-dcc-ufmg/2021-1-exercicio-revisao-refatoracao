#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Cobertura : public Imovel {
    private:
        static int numCob;
        static double pctComissao;

    public:
        static int getNumCob();

        void print() override;

        Cobertura(double area, 
                  double vm2, 
                  int q, 
                  int b, 
                  int v, 
                  string corretor, 
                  Cliente* vendedor) : 
                  Imovel(area, vm2, q, b, v, corretor, vendedor, pctComissao) {
            numCob++;
        }

        ~Cobertura() {
            numCob--;
        }
};

#endif