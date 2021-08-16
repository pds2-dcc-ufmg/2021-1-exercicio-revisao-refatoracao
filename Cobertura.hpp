#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

#define TAXA_DE_COMISSAO = 0.10;

class Cobertura : public Imovel {
    
    private:

        static const double _taxa_comissao = 0.10;

    public:

    double Cobertura::CalculaComissao() override{

        _comissao = _valor * _taxa_comissao;

        return _comissao;
        
    }

    void Print() {

        std::cout << "[Cobertura]" << std::endl;
        Imovel::Print();
        
    }
};

#endif