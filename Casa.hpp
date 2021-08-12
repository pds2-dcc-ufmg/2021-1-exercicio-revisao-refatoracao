#ifndef CASA_HPP
#define CASA_HPP
#define seisporcento 0.06
#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    public:

    double valor() {

        double v = AREA * VALORm2;

        return v;

    }

    double comissao() {

        double c = AREA * VALORm2;

        return c * seisporcento;
        
    }

    void print() {

        std::cout << "[Casa]" << endl;
        Imovel::print();
        std::cout << "Area: " << AREA << endl
                << "  Quartos: " << QUARTOS << endl
                << "  Banheiros: " << BANHEIROS << endl
                << "  Vagas: " << VAGAS << endl
                << "Taxa de Comissão: " << 6 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << C << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;

    }

};

#endif