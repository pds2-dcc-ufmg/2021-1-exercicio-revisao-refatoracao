#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa:public Imovel {

    public:

        Casa(double area, int quantQuartos, int quantBanheiros,
        int quantVagas, double valorm2, Cliente vendedor, string corretor):
        Imovel(area, quantQuartos, quantBanheiros, quantVagas, valorm2, vendedor, corretor, 0.06) {}

        void print() {

        cout << "[Casa]" << endl;
        Imovel::print();
        cout << "Area: " << _area << endl
                << "  Quartos: " << _quantQuartos << endl
                << "  Banheiros: " << _quantBanheiros << endl
                << "  Vagas: " << _quantVagas << endl
                << "Taxa de Comissao: " << 6 << "%" << endl
                << "Valor Comissao: R$ " << fixed << setprecision(2) << _comissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << _valor << endl;
        }
};

#endif
