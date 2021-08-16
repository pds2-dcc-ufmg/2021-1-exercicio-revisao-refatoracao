#ifndef COBERTURA_HPP
#define COBERTURA_HPP
#define TAXA_COBERTURA 10 //Taxa de comissão para cobertura

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
    
    public:

    double comissao() override{

        double c = area * valor_m2;

        return c * TAXA_COBERTURA/100;
        
    }

	//imprime as informações específicas deste imóvel
    void print() {

        std::cout << "[Cobertura]" << endl;
        Imovel::print();
        std::cout << "Area: " << area << endl
                << "  Quartos: " << Q << endl
                << "  Banheiros: " << B << endl
                << "  Vagas: " << V << endl
                << "Taxa de Comissão: " << TAXA_COBERTURA << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << comissao() << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << valor()+comissao() << endl;
    }
};

#endif