#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {

    public: 
    //valor da venda para apartamento
    double ValorVenda() {

        double ValorVenda = Area * Valor_m2;

        return ValorVenda;

    }
     //valor da comissão para apartamento 
    double comissao() {

        double comissao = Area * Valor_m2;

        return comissao * 0.04;
        
    }

    void print() {

        std::cout << "[Apartamento]" << endl;
        Imovel::print();
        std::cout << "Area: " << Area << endl
                << "  Quartos: " << Quartos << endl
                << "  Banheiros: " << Banheiros << endl
                << "  Vagas: " << Vagas << endl
                << "Taxa de Comissão: " << 4 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << Comissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << ValorVenda << endl;
    }
};

#endif
