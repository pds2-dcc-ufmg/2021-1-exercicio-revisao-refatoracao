#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {

    const double comissaoApartamento = 0.04; 

    public: 
    
    Apartamento(string corretor,
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
        _taxaComissao = comissaoApartamento;
        _porcentagemComissao = comissaoApartamento * 100;
        }

    void print() {
            std::cout << "[Apartamento]" << endl;
            Imovel::print();
        }
};

#endif