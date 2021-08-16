#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

class Apartamento : public Imovel {

    private:

        static const double _taxa_comissao = 0.04;

    public: 

    double Apartamento::CalculaComissao() override{

        _comissao = _valor * _taxa_comissao;

        return _comissao;
        
    }

    void Print() {

        std::cout << "[Apartamento]" << std::endl;
        Imovel::Print();
        
    }
};

#endif