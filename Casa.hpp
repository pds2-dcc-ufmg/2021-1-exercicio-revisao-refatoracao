#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

class Casa : public Imovel {
    public:
        double comissao() override{
            double valor_total = this->valor();

            return valor_total * comissao_taxa;
        }

        void print() override{
            std::cout << "[Casa]" << std::endl;
            Imovel::print();
            std::cout << "Area: " << _area << std::endl
                    << "  Quartos: " << _quartos << std::endl
                    << "  Banheiros: " << _banheiros << std::endl
                    << "  Vagas: " << _vagas << std::endl
                    << "Taxa de Comissão: " << comissao_taxa * 100 << "%" << std::endl
                    << "Valor Comissão: R$ " << fixed << setprecision(2) << _valor_comissao << std::endl
                    << "Valor de Venda: R$ " << fixed << setprecision(2) << _valor_venda << std::endl;
        }
    private:
        static constexpr double comissao_taxa = 0.06;
};

#endif