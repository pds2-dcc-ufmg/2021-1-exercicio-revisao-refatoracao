#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {

    public: 
        const double taxa_comissao=0.04;
        Apartamento(
            double area,
            int quartos,
            int banheiros,
            int vagas,
            double valor_m2,
            Cliente vendedor,
            string corretor
        ):Imovel(
            area,
            quartos,
            banheiros,
            vagas,
            valor_m2,
            vendedor,
            corretor
        ){}

        double valor() override {

            double valorTotal = area * valor_m2;

            return valorTotal;

        }

        double comissao() override {

            double resultado = area * valor_m2;

            return resultado * taxa_comissao;
            
        }

        void print() {

            std::cout << "[Apartamento]" << endl;
            Imovel::print();
            std::cout << "Area: " << area << endl
                    << "  Quartos: " << quartos << endl
                    << "  Banheiros: " << banheiros << endl
                    << "  Vagas: " << vagas << endl
                    << "Taxa de Comissão: " << taxa_comissao*100 << "%" << endl
                    << "Valor Comissão: R$ " << fixed << setprecision(2) << comissao_imovel << endl
                    << "Valor de Venda: R$ " << fixed << setprecision(2) << valor_total << endl;
        }
};

#endif