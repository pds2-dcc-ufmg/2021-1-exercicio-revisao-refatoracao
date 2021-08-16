#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {

    public: 
    
    double valor() {

        double valor = AREA * VALORm2;

        return valor;

    }

    double comissao() {

        double comissao = AREA * VALORm2;

        return comissao * 0.04;
        
    }

    void print() {

        std::cout << "[Apartamento]" << endl;
        Imovel::print();
        std::cout << "Area: " << AREA << endl
                << "  Quartos: " << Q << endl
                << "  Banheiros: " << B << endl
                << "  Vagas: " << V << endl
                << "Taxa de Comissão: " << 4 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << comissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << valor << endl;
    }
};

#endif
