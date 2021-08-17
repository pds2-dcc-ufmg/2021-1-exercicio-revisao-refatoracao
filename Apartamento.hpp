#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {

    public: 
    
    double valor() {

        double valorApartamento = area * valorM2;

        return valorApartamento;

    }

    double comissao() {

        double comissaoCorretor = area * valorM2;

        return comissaoCorretor * 0.04; 
        
    }

    void print() {

        cout << "[Apartamento]" << endl;
        Imovel::print();
        cout << "Area: " << area << endl
                << "  Quartos: " << quartos << endl
                << "  Banheiros: " << banheiros << endl
                << "  Vagas: " << vagas << endl
                << "Taxa de Comissão: " << 4 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << Comissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
    }
};

#endif
