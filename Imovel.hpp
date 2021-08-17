#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include "Cliente.hpp"


namespace Imoveis{
    class Imovel {
        public:
            double _area;
            int _quartos, _banheiros, _vagas;
            double _valor_m2, _area, _valor, _comissao;
            std::string _corretor;

            Cliente _vendedor;
            std::string corretor;

            Imovel(std::string corretor, double area, int quartos, int banheiros, int vagas, double valor_m2, Cliente vendedor);
            Imovel();

            double calcula_valor();
            double calcula_comissao();
            double taxa_comissao;
            std::string tipo_imovel;

    };
}
#endif