#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

class Casa : public Imovel {
    public:
        double comissao() override{
            double valor_total = this->valor();

            return valor_total * 0.06;
        }

        void print() override{
            std::cout << "[Casa]" << std::endl;
            Imovel::print();
            std::cout << "Area: " << area << std::endl
                    << "  Quartos: " << quartos << std::endl
                    << "  Banheiros: " << banheiros << std::endl
                    << "  Vagas: " << vagas << std::endl
                    << "Taxa de Comissão: " << 6 << "%" << std::endl
                    << "Valor Comissão: R$ " << fixed << setprecision(2) << valor_comissao << std::endl
                    << "Valor de Venda: R$ " << fixed << setprecision(2) << valor_venda << std::endl;
        }
};

#endif