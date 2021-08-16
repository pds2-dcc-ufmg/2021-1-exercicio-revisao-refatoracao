#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    public:

    double valor() {

        double v = Casa::get_AREA() * Casa::get_VALORm2();

        return v;

    }

    double comissao() {

        double c = Casa::get_AREA() * Casa::get_VALORm2();

        return c * 0.06;
        
    }

    void print() {

        std::cout << "[Casa]" << endl;
        Imovel::print();
        std::cout << "Area: " << Casa::get_AREA() << endl
                << "  Quartos: " << Casa::get_Quartos() << endl
                << "  Banheiros: " << Casa::get_Banheiros() << endl
                << "  Vagas: " << Casa::get_Vagas() << endl
                << "Taxa de Comissão: " << 6 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << Casa::get_Valor_Comissao() << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << Casa::get_Valor_Venda() << endl;

    }

};

#endif