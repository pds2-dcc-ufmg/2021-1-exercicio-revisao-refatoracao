#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    public:

    double calculaValor() {
        double v = area * valorMetro;
        return v;
    }

    double calculaComissao() {
        double c = area * valorMetro;
        return c * 0.06;    
    }

    void print() {
        std::cout << "[Casa]" << endl;
        Imovel::print();
        std::cout << "Area: " << area << endl
                << "  Quartos: " << numeroDeQuartos << endl
                << "  Banheiros: " << numeroDeBanheiros << endl
                << "  Vagas: " << numeroDeVagas << endl
                << "Taxa de Comissão: " << 6 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << comissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << valorDeVenda << endl;

    }

};

#endif