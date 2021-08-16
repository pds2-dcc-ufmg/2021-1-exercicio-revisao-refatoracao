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
        }
};

#endif