#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
    
    public:

    double Valor() {

        double v = _area * _valor_m2;

        return v;

    }

    double Comissao() {

        double c = _area * _valor_m2;

        return c * 0.10;
        
    }

    void Print() {

        std::cout << "[Cobertura]" << endl;
        Imovel::Print();
        std::cout << "Area: " << _area << endl
                << "  Quartos: " << _quartos << endl
                << "  Banheiros: " << _banheiros << endl
                << "  Vagas: " << _vagas << endl
                << "Taxa de Comissão: " << 10 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << _comissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << _valor << endl;
    }
};

#endif