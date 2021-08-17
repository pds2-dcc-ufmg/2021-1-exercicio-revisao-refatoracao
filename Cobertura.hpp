#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

class Cobertura : public Imovel {
    
    public:

        double CalculaComissao() override{

            _taxa_comissao = 0.10;

            _comissao = _valor * _taxa_comissao;

            return _comissao;
            
        }

        void Print() {

            std::cout << "[Cobertura]" << std::endl;
            Imovel::Print();
            
        }
};

#endif