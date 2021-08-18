#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
    
    public:

    double calculaValor() {
        double v = area * valorMetro;
        return v;
    }

    double calculaComissao() {
        double c = area * valorMetro;
        return c * 0.10;    
    }

    void print() {
        std::cout << "[Cobertura]" << endl;
        Imovel::print();
        std::cout << "area: " << area << endl
                << "  Quartos: " << numeroDeQuartos << endl
                << "  Banheiros: " << numeroDeBanheiros << endl
                << "  Vagas: " << numeroDeVagas << endl
                << "Taxa de Comissão: " << 10 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << comissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << valorDeVenda << endl;
    }
};

#endif