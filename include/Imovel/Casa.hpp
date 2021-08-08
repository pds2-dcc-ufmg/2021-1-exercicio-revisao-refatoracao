#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

/*
Sub-classe que representa o tipo de imóvel: Casa
*/
class Casa : public Imovel {
    private:
        // Variáveis estáticas da classe: número de casas e % de comissão
        static int numCasa;
        static double pctComissao;

    public:
        // Retorna número de casas existentes
        static int getNumCasa();

        void print() override;

        // Além de construir a classe, incrementa a conta de casas
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
            // Decresce o número de casas
            numCasa--;
        }
};

#endif