#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP
#define COMISSAOPERCENT 4

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {

    public: 
    
    double getValor() {
        double valor = AREA * VALORm2;
        return valor;
    }

    double getComissao() {
        return this->getValor * 0.04;
    }

    void print() {

        std::cout << "[Apartamento]" << endl;
        Imovel::print();
        std::cout << "Area: " << area << endl
                << "  Quartos: " << n_quartos << endl
                << "  Banheiros: " << n_banheiros << endl
                << "  Vagas: " << n_vagas << endl
                << "Taxa de Comissão: " << COMISSAOPERCENT << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << comissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << valor_total << endl;
    }
};

#endif
