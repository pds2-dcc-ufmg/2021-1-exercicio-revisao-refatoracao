#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {

    public: 
    
    double valor() { //calcula valor de venda

        double v = area * valor_m2;

        return v;

    }

    double comissao() { //calcula valor de comissao

        double c = this->valor();

        return c * 0.04;
        
    }

    void print() {

        std::cout << "[Apartamento]" << endl;
        Imovel::print();
        std::cout << "Area: " << area << endl
                << "  Quartos: " << quartos << endl
                << "  Banheiros: " << banheiros << endl
                << "  Vagas: " << vagas << endl
                << "Taxa de Comissao: " << 4 << "%" << endl
                << "Valor Comissao: R$ " << fixed << setprecision(2) << valor_com << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << valor_venda << endl;
    }
};

#endif