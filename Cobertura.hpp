#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

class Cobertura : public Imovel {
    public:
        // Construtor
        Cobertura();

        // Metodos
        double valor();
        double comissao();
        void print() override;
};

#endif
