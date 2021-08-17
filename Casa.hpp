#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

class Casa : public Imovel {

    public:

        double CalculaComissao() override {

            _taxa_comissao = 0.06;

            _comissao = _valor * _taxa_comissao;

            return _comissao;
            
        }

        void Print() {

            std::cout << "[Casa]" << std::endl;
            Imovel::Print();

        }

};

#endif