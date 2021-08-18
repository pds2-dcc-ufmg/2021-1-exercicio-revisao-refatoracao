#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {

    public: 
    
    double valor() {
        double v = (getAREA() * getVALORm2());
        return v;
    }

    double comissao() {
        return this->valor() * 0.04;
    }

    void print() {

        cout << "[Apartamento]" << endl;
        Imovel::print();
        cout << "Area: " << getAREA() << endl
                << "  Quartos: " << getQ() << endl
                << "  Banheiros: " << getB() << endl
                << "  Vagas: " << getV() << endl
                << "Taxa de Comissão: " << 4 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << getC() << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << getVALOR() << endl;
    }
};

#endif