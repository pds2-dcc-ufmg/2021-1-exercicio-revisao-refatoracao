#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

class Casa : public Imovel {
    public: 
        double comissao() override;

        void print() override;
    private:
        static constexpr double comissao_taxa = 0.06;
};

#endif