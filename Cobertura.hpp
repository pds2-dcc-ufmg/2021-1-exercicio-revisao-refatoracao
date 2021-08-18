#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
    public:
        double comissao() override{
            double valor_total = this->valor();

            return valor_total * 0.10;
        }

        void print() override{

            std::cout << "[Cobertura]" << endl;
            Imovel::print();
            std::cout << "Area: " << area << endl
                    << "  Quartos: " << quartos << endl
                    << "  Banheiros: " << banheiros << endl
                    << "  Vagas: " << vagas << endl
                    << "Taxa de Comissão: " << 10 << "%" << endl
                    << "Valor Comissão: R$ " << fixed << setprecision(2) << valor_comissao << endl
                    << "Valor de Venda: R$ " << fixed << setprecision(2) << valor_venda << endl;
        }
};

#endif