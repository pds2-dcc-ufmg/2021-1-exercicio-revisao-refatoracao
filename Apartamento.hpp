#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"



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

        std::cout << "[Apartamento]" << std::endl;
        Imovel::Print();
        std::cout << "Area: " << _area << std::endl
                << "  Q: " << _quartos << std::endl
                << "  Banheiros: " << _banheiros << std::endl
                << "  Vagas: " <<_vagas<< std::endl
                << "Taxa de Comissão: " << 4 << "%" << std::endl
                << "Valor Comissão: R$ " <<std::fixed << std::setprecision(2) << _comissao << std::endl
                << "Valor de Venda: R$ " <<std::fixed << std::setprecision(2) << _valor << std::endl;
    }
};

#endif