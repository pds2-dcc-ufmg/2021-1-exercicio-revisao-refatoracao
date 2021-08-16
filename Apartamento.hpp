#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {
    private:
        static constexpr double taxaDeComissao = 0.04;

    public: 
        double calculaValorDaComissao() override {
            valorDaComissao = valorDeVenda * taxaDeComissao;
            return valorDaComissao;
        }

        void print() {
            std::cout << "[Apartamento]" << endl;
            Imovel::print();
            std::cout << "Area: " << area << endl
                    << "  Quartos: " << quartos << endl
                    << "  Banheiros: " << banheiros << endl
                    << "  Vagas: " << vagasDeEstacionamento << endl
                    << "Taxa de Comissão: " << fixed << setprecision(0) << taxaDeComissao * 100 << "%" << endl
                    << "Valor Comissão: R$ " << fixed << setprecision(2) << valorDaComissao << endl
                    << "Valor de Venda: R$ " << fixed << setprecision(2) << valorDeVenda << endl;
        }
};

#endif