#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {

    public: 
    
    double calculaValor() {
        double v = area * valorMetro;
        return v;
    }

    double calculaComissao() {
        double c = area * valorMetro;
        return c * 0.04;
    }

    void print() {
        std::cout << "[Apartamento]" << endl;
        Imovel::print();
        std::cout << "Area: " << area << endl
                << "  Quartos: " << numeroDeQuartos << endl
                << "  Banheiros: " << numeroDeBanheiros << endl
                << "  Vagas: " << numeroDeVagas << endl
                << "Taxa de Comissão: " << 4 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << comissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << valorDeVenda << endl;
    }
};

#endif