#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {

    public: 
        Apartamento(
            string corr,
            double ar,
            int qrto,
            int banh,
            int vagas,
            double valorMetro,
            Cliente vendedor
        );

        void print() {
            std::cout << "[Apartamento]" << endl;
            Imovel::printVendedorCorretor();
            std::cout << "Area: " << getArea() << endl
                    << "  Quartos: " << getQtdQuartos() << endl
                    << "  Banheiros: " << getQtdBanheiros() << endl
                    << "  Vagas: " << getQtdVagas() << endl
                    << "Taxa de Comissão: " << getTaxa() * 100 << "%" << endl
                    << "Valor Comissão: R$ " << fixed << setprecision(2) << getValorCom() << endl
                    << "Valor de Venda: R$ " << fixed << setprecision(2) << getValorTotal() << endl;
        }

        double getTaxa() override;
        
    private:
        double taxaApto = 0.04;
};

#endif