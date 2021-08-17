#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
    
    public:

    double valor() {

        double valorImovel = area * valorM2;

        return valorImovel;

    }
    double comissao() {

        double comissaoCorretor = valorImovel * 0.10;

        return comissaoCorretor; 
        
    }

  

    void print() {
        
        cout << "[Cobertura]" << endl;
        Imovel::print();
        cout << "Area: " << area << endl
                << "  Quartos: " << quartos << endl
                << "  Banheiros: " << banheiros << endl
                << "  Vagas: " << vagas << endl
                << "Taxa de Comissão: " << 10 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << Comissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;

    }
};

#endif
