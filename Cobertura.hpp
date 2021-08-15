#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

class Cobertura : public Imovel {

    /**
     * \param porcentagem: porcentagem em relação ao valor total da cobertura, ou seja o corretor receberá 10% do valor
     *da cobertura quando esta for vendida.
     */
    private:

        double porcentagem = 0.10;

    public:

        /** \brief método que calcula a comissão que receberá o corretor responsável pela venda de coberturas.
         */
        double comissao();

        void print() override;
};

#endif
