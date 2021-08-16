#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

#define TAXA_DE_COMISSAO = 0.06;

class Casa : public Imovel {

    private:
        static const double _taxa_comissao = 0.06;

    public:

    double Casa::CalculaComissao() override {

        _comissao = _valor * _taxa_comissao;

        return _comissao;
        
    }

    void Print() {

        std::cout << "[Casa]" << std::endl;
        Imovel::Print();

    }

};

#endif