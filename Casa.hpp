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

        double c = area * valor_m2;

        return c * 0.06;
        
    }
    
    void procedure (double *v, double *c) {
        *v += this->valor();
        *c += this->comissao();
        cout << endl;
    }

    void print() {

        std::cout << "[Casa]" << endl;
        Imovel::print();
        std::cout << "Area: " << area << endl
                << "  Quartos: " << Q << endl
                << "  Banheiros: " << B << endl
                << "  Vagas: " << V << endl
                << "Taxa de Comissão: " << 6 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << C << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << valor << endl;

    }

};

#endif
