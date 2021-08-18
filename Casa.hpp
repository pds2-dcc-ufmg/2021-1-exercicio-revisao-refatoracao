#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    public:

    double comissao() {

        return getValor() * 0.06;

    }

    void print() {

        std::cout << "[Casa]" << endl;
    Imovel::print();
        std::cout << "Area: " << getArea() << endl
                << "  Quartos: " << getQuarto() << endl
                << "  Banheiros: " << getBanheiro() << endl
                << "  Vagas: " << getVaga() << endl
                << "Taxa de Comissão: " << 6 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << getValorComissao() << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << getValorVenda() << endl;
    }

};

#endif
