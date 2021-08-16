#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    public:

    double Valor() {

        double v = _area * _valor_m2;

        return v;

    }

    double Comissao() {

        double c = _area * _valor_m2;

        return c * 0.06;
        
    }

    void Print() {

        std::cout << "[Casa]" << endl;
        Imovel::Print();
        std::cout << "Area: " << _area << endl
                << "  Quartos: " << _quartos << endl
                << "  _banheirosanheiros: " << _banheiros << endl
                << "  Vagas: " <<_vagas<< endl
                << "Taxa de Comissão: " << 6 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << _comissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << _valor << endl;

    }

};

#endif