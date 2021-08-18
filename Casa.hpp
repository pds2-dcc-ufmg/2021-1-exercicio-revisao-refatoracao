#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

class Casa : public Imovel {
    public:
        // Construtor
        Casa();

        // Metodos
        double valor();
        double comissao();
        void print() override;
};

#endif
