#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp" 
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel { 
    public: 
        double valor() {
            double val = getArea() * getValor_m2();
            return val;
        }
        double comissao() {
            double comi = valor() * 0.04;
            return comi;
        }
        void print() {
            std::cout << "[Apartamento]" << endl;
            Imovel::print();
            std::cout << "Area: " << getArea() << endl
                    << "  Quartos: " << getQ() << endl
                    << "  Banheiros: " << getB() << endl
                    << "  Vagas: " << getV() << endl
                    << "Taxa de Comissão: " << 4 << "%" << endl
                    << "Valor Comissão: R$ " << fixed << setprecision(2) << getC() << endl
                    << "Valor de Venda: R$ " << fixed << setprecision(2) << getValor() << endl;
        }
};

#endif