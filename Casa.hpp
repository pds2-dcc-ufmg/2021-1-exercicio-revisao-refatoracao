#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    public:

    double valor() {
        double v = (getAREA() * getVALORm2());
        return v;
    }

    double comissao() {
        return this->valor() * 0.06;
    }

    void print() {

        std::cout << "[Casa]" << endl;
        Imovel::print();
        std::cout << "Area: " << getAREA() << endl
                << "  Quartos: " << getQ() << endl
                << "  Banheiros: " << getB() << endl
                << "  Vagas: " << getV() << endl
                << "Taxa de Comissão: " << 6 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << getC() << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << getVALOR() << endl;

    }

};

#endif