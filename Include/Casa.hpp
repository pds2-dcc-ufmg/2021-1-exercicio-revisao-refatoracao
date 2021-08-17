#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    public:

    Casa(
        string corr,
        double ar,
        int qrto,
        int banh,
        int vagas,
        double valorMetro,
        Cliente vendedor
    );

    void print() {

        std::cout << "[Casa]" << endl;
        Imovel::printVendedorCorretor();
        std::cout << "Area: " << getArea() << endl
                << "  Quartos: " << getQtdQuartos() << endl
                << "  Banheiros: " << getQtdBanheiros() << endl
                << "  Vagas: " << getQtdVagas() << endl
                << "Taxa de Comissão: " << getTaxa() * 100 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << getValorCom() << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << getValorTotal() << endl;

    }

    double getTaxa() override{}

    private:
        double taxaCasa = 0.06;

};

#endif