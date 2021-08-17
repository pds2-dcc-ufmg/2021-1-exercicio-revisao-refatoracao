#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;
double taxa_comissao = 0.04;

class Apartamento : public Imovel {

    public: 
    
    double valor() {

        double v = AREA * VALORm2;

        return v;

    }

    double comissao() {
        
        double c = AREA * VALORm2;
        double total_comissao = c * taxa_comissao;

        return total_comissao;
        
    }

    void print() {

        std::cout << "[Apartamento]" << endl;
        Imovel::print();
        std::cout << "Area: " << AREA << endl
                << "  Quartos: " << Q << endl
                << "  Banheiros: " << B << endl
                << "  Vagas: " << V << endl
                << "Taxa de Comissão: " << taxa_comissao*100 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << C << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
    }
};

#endif
