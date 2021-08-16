#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {

    public: 
    
    double Valor() {

        double v = _area * _valor_m2;

        return v;

    }

    double Comissao() {

        double c = _area * _valor_m2;

        return c * 0.04;
        
    }

    void Print() {

        std::cout << "[Apartamento]" << endl;
        Imovel::Print();
        std::cout << "Area: " << _area << endl
                << "  Q: " << _quartos << endl
                << "  Banheiros: " << _banheiros << endl
                << "  Vagas: " <<_vagas<< endl
                << "Taxa de Comissão: " << 4 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << _comissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << _valor << endl;
    }
};

#endif