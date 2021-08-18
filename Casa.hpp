#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {
    const double comissaoCasa = 0.06; 

    public: 
    
    Casa(string corretor,
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
        this->_taxaComissao = comissaoCasa;
        this->_porcentagemComissao = comissaoCasa * 100;
        }

    void print() {
        std::cout << "[Casa]" << endl;
        Imovel::print();
    }
};

#endif