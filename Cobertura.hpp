#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
    
    public:

    double valor() {
        double v = (getAREA() * getVALORm2());
        return v;
    }

    double comissao() {
        return this->valor() * 0.10;
    }

    void print() {

        std::cout << "[Cobertura]" << endl;
        Imovel::print();
        std::cout << "Area: " << getAREA() << endl
                << "  Quartos: " << getQ() << endl
                << "  Banheiros: " << getB() << endl
                << "  Vagas: " << getV() << endl
                << "Taxa de Comissão: " << 10 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << getC() << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << getVALOR() << endl;
    }
};

#endif