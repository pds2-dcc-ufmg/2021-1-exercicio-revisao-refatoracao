#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {

    public:

	//COMISSAO 10%
        double comissao() override{
            double com = AREA * VALOR_m2;

            return com * 0.10;
        }

    void print() {

        std::cout << "[Cobertura]" << endl;
        Imovel::print();
        std::cout << "Taxa de Comissão: " << 10 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << COMISSAO << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << VALOR_TOTAL << endl;
    }
};

#endif
