#ifndef COBERTURA_HPP
#define COBERTURA_HPP
 
#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Cobertura : public Imovel { 
    public:
        double valor() {
            double val = getArea() * getValor_m2();
            return val;
        }
        double comissao() {
            double comi = valor() * 0.10;
            return comi;
        }
        void print() {
            std::cout << "[Cobertura]" << endl;
            Imovel::print();
            std::cout << "Area: " << getArea() << endl
                    << "  Quartos: " << getQ() << endl
                    << "  Banheiros: " << getB() << endl
                    << "  Vagas: " << getV() << endl
                    << "Taxa de Comissão: " << 10 << "%" << endl
                    << "Valor Comissão: R$ " << fixed << setprecision(2) << getC() << endl
                    << "Valor de Venda: R$ " << fixed << setprecision(2) << getValor() << endl;
        }
};

#endif