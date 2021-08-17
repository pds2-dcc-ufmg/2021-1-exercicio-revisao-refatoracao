#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    public:

   double valor() {

        double valorImovel = area * valorM2;

        return valorImovel;

    }
    
    double comissao() {

        double comissaoCorretor = valorImovel * 0.06;

        return comissaoCorretor;
        
    }

  

    void print() {
        
        cout << "[Casa]" << endl;
        Imovel::print();
        cout << "Area: " << area << endl
                << "  Quartos: " << quartos << endl
                << "  Banheiros: " << banheiros << endl
                << "  Vagas: " << vagas << endl
                << "Taxa de Comissão: " << 6 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << Comissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;

    }

};

#endif
