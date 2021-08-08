#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

/*
Sub-classe que representa o tipo de imóvel: Apartamento
*/
class Apartamento : public Imovel {
    private:
        // Variáveis estáticas da classe: número de apartamentos e % de comissão
        static int numApt;
        static double pctComissao;

    public:
        // Retorna número de apartamentos existentes
        static int getNumApt();

        void print() override;

        // Além de construir a classe, incrementa a conta de apartamentos
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
            // Decresce o número de apartamentos
            numApt--;
        }
};

#endif