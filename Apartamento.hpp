#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {

    public:

	//COMISSÃO DE 4%
        double comissao() override{

            double com = AREA * VALOR_m2;

            return com * 0.04;
        }

    void print() {

        std::cout << "[Apartamento]" << endl;
        Imovel::print();
        std::cout << "Taxa de Comissão: " << 4 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << COMISSAO << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << VALOR_TOTAL << endl;
    }
};

#endif
