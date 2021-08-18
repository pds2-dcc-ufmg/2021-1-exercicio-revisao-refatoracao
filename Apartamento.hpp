#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

class Apartamento : public Imovel {
    public:
        // Construtor
        Apartamento();

        // Metodos
        double valor();
        double comissao();

        // Metodos sobreEscritos
        void print() override;
};

#endif
