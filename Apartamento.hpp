#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {

    public:

    double comissao() {

        return getValor() * 0.04;
    }

    void print() {

        std::cout << "[Apartamento]" << endl;
        Imovel::print();
        std::cout << "Area: " << getArea() << endl
                << "  Quartos: " << getQuarto() << endl
                << "  Banheiros: " << getBanheiro() << endl
                << "  Vagas: " << getVaga() << endl
                << "Taxa de Comissão: " << 4 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << getValorComissao() << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << getValorVenda() << endl;
    }
};

#endif
