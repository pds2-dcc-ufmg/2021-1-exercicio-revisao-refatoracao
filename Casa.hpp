#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    public:

    double valor() {

        double v = area * valor_m2;

        return v;

    }

    double comissao() {

        double c = this->valor();

        return c * 0.06;
        
    }

    void print() {
		//Printa dados da casa, mostra taxa, valor comissao e venda
        std::cout << "[Casa]" << endl;
        Imovel::print();
        std::cout << "Area: " << area << endl
                << "  Quartos: " << quartos << endl
                << "  Banheiros: " << banheiros << endl
                << "  Vagas: " << vagas << endl
                << "Taxa de Comissão: " << 6 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << valor_com << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << valor_com << endl;

    }

};

#endif