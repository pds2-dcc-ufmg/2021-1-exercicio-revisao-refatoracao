#ifndef CASA_HPP
#define CASA_HPP
#define TAXA_CASA 6 //Taxa de comissão para casa

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    public:

    double comissao() override{

        double c = area * valor_m2;

        return c * TAXA_CASA/100;
        
    }

	//imprime as informações específicas deste imóvel
    void print() {

        std::cout << "[Casa]" << endl;
        Imovel::print();
        std::cout << "Area: " << area << endl
                << "  Quartos: " << Q << endl
                << "  Banheiros: " << B << endl
                << "  Vagas: " << V << endl
                << "Taxa de Comissão: " << TAXA_CASA << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << comissao() << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << valor()+comissao() << endl;

    }

};

#endif