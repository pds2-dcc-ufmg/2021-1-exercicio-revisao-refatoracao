#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"



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

        std::cout << "[Casa]" << std::endl;
        Imovel::Print();
        std::cout << "Area: " << _area << std::endl
                << "  Quartos: " << _quartos << std::endl
                << "  _banheirosanheiros: " << _banheiros << std::endl
                << "  Vagas: " <<_vagas<< std::endl
                << "Taxa de Comissão: " << 6 << "%" << std::endl
                << "Valor Comissão: R$ " <<std::fixed << std::setprecision(2) << _comissao << std::endl
                << "Valor de Venda: R$ " <<std::fixed << std::setprecision(2) << _valor << std::endl;

    }

};

#endif