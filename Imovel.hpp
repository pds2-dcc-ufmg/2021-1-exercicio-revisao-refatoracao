#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

class Imovel {
    public:
        double _area;
        int _quartos;
        int _banheiros;
        int _vagas;
        double _valor_m2;
        double _valor;
        double _comissao;
        Cliente _Vendedor;
        std::string _corretor;

        void Print() {
           std::cout << "[Vendedor]" << std::endl;
            _Vendedor.Print();
           std::cout << "[Corretor]" << std::endl;
           std::cout << "  " + _corretor << std::endl;
           std::cout << "Area: " << _area << std::endl
                << "  Quartos: " << _quartos << std::endl
                << "  Banheiros: " << _banheiros << std::endl
                << "  Vagas: " <<_vagas<< std::endl
                << "Taxa de Comissão: " << 4 << "%" << std::endl
                << "Valor Comissão: R$ " <<std::fixed << std::setprecision(2) << _comissao << std::endl
                << "Valor de Venda: R$ " <<std::fixed << std::setprecision(2) << _valor << std::endl;
        }

    virtual double CalculaValor() {

            _valor = _area * _valor_m2;

            return _valor;

    }

    virtual double CalculaComissao() {};
};

#endif