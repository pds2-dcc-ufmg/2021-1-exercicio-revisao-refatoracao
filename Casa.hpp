#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    public:

	//COMISSAO 6%
        double comissao() override {

            double com = AREA * VALORm2;

            return com * 0.06;
        }

    void print() {

        std::cout << "[Casa]" << endl;
        Imovel::print();
        std::cout << "Taxa de Comissão: " << 6 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << COMISSAO << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << VALOR << endl;

    }

};

#endif
