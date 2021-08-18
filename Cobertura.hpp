#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : private Imovel {
    
    private:

    double valor() {

        double v = Area * Valorm2;

        return v;

    }

    double comissao() {

        double c = Area * Valorm2;

        return c * 0.10;
        
    }

    void print() {

        std::cout << "[Cobertura]" << endl;
        Imovel::print();
        std::cout << "Area: " << Area << endl
                << "Quartos: " << Quartos << endl
                << "Banheiros: " << Banheiros << endl
                << "Vagas: " << Vagas << endl
                << "Taxa de Comissão: " << 10 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << C << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
    }
};

#endif
