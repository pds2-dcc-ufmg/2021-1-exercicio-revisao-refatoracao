#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento:public Imovel {

    public:

        Apartamento(double area, int quantQuartos, int quantBanheiros,
        int quantVagas, double valorm2, Cliente vendedor, string corretor):
        Imovel(area, quantQuartos, quantBanheiros, quantVagas, valorm2, vendedor, corretor, 0.04) {}

        void print() {

        cout << "[Apartamento]" << endl;
        Imovel::print();
        cout << "Area: " << _area << endl
                << "  Quartos: " << _quantQuartos << endl
                << "  Banheiros: " << _quantBanheiros << endl
                << "  Vagas: " << _quantVagas << endl
                << "Taxa de Comissao: " << 4 << "%" << endl
                << "Valor Comissao: R$ " << fixed << setprecision(2) << _comissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << _valor << endl;
        }
};

