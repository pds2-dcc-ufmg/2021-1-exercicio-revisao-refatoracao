#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {

    public: 
    static constexpr double TAXA_COMISSAO_APARTAMENTO = 0.04;

    double calculaComissao() {

        double comissao = _area * _valorMetroQuadrado;

        return comissao * TAXA_COMISSAO_APARTAMENTO;
        
    }

    double calculaValorVenda() {

        double valorVenda = calculaComissao() + calculaValorImovel();

        return valorVenda;
        
    }

    void print() {

        std::cout << "[Apartamento]" << endl;
        Imovel::print();
        std::cout << "Area: " << _area << endl
                << "  Quartos: " << _quartos << endl
                << "  Banheiros: " << _banheiros << endl
                << "  Vagas: " << _vagas << endl
                << "Taxa de Comissão: " << TAXA_COMISSAO_APARTAMENTO*100 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << calculaComissao() << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << calculaValorVenda() << endl;
    }
    Apartamento(double area, int quartos, int banheiros, int vagas, double valorMetroQuadrado, 
                    Cliente vendedor, string corretor): 
        Imovel(area, quartos, banheiros, vagas, 
                valorMetroQuadrado, vendedor, corretor){};

};

#endif