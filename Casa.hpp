#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

class Casa : public Imovel {

    /**
     * \param porcentagem: porcentagem em relação ao valor total da casa, ou seja o corretor receberá 6% do valor
     *da casa quando esta for vendida.
     */
    private:

        double porcentagem = 0.06;

    public:

        /** \brief método que calcula a comissão que receberá o corretor responsável pela venda de casas.
         */
        double comissao() override;

        void print() override;
};

#endif
