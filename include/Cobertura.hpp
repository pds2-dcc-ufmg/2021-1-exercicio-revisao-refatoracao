#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"

using namespace std;

class Cobertura : public Imovel {
    
    public:
    Cobertura(  double area,
                int numeroQuartos,
                int numeroBanheiros,
                int numeroVagas,
                double valorMetroQuadrado,
                Cliente vendedor,
                string corretor):
                Imovel(area, 
                    numeroQuartos,
                    numeroBanheiros,
                    numeroVagas,
                    valorMetroQuadrado,
                    vendedor,
                    corretor) {
        this->_percentualComissao = 0.10;
        this->_comissao = this->calcularComissao();
        this->_valorVenda = this->calcularValorVenda();
    }


    void print() {

        std::cout << "[Cobertura]" << endl;
        Imovel::print();
        std::cout << "Area: " << _area << endl
                << "  Quartos: " << _numeroQuartos << endl
                << "  Banheiros: " << _numeroBanheiros << endl
                << "  Vagas: " << _numeroVagas << endl
                << "Taxa de Comissão: " << 10 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << _comissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << _valorVenda << endl;
    }
};

#endif