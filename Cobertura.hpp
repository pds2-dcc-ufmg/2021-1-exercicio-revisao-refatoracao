#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
    const double comissaoCobertura = 0.01; 

    public: 
    
    Cobertura(string corretor,
                double area,
                int qtdQuartos,
                int qtdBanheiros,
                int qtdVagas,
                double valorMetro2,
                Cliente vendedor):
    Imovel(corretor,
            area,
            qtdQuartos,
            qtdBanheiros,
            qtdVagas,
            valorMetro2,
            vendedor)
        {
        this->_taxaComissao = comissaoCobertura;
        this->_porcentagemComissao = comissaoCobertura * 100;
        }

    void print() {
        std::cout << "[Cobertura]" << endl;
        Imovel::print();
    }
};

#endif