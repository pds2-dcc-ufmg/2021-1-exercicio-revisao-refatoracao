#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP
#define TAXA_AP 4 //Taxa de comissão para apartamentos

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {

    public: 

    double comissao() override {

        double c = area * valor_m2;

        return c * TAXA_AP/100;
        
    }

	//imprime as informações específicas deste imóvel
    void print() {

        std::cout << "[Apartamento]" << endl;
        Imovel::print();
        std::cout << "Area: " << area << endl
                << "  Quartos: " << Q << endl
                << "  Banheiros: " << B << endl
                << "  Vagas: " << V << endl
                << "Taxa de Comissão: " << TAXA_AP << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << comissao() << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << valor()+comissao() << endl;
    }
};

#endif