#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

class Apartamento : public Imovel {

    /**
     * \param porcentagem: porcentagem em relação ao valor total do apartamento, ou seja o corretor receberá 4% do valor
     *do apartamento quando este for vendido.
     */
    private:

        double porcentagem = 0.04;

    public:

        /** \brief método que calcula a comissão que receberá o corretor responsável pela venda de apartamentos.
         */
        double comissao() override;

        void print() override;
};

#endif
