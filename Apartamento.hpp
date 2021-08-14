#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"


class Apartamento : public Imovel {
    public: 
        string tipoImovel();
        double taxaComissao();

    private:
        const double TAXA_DE_COMISSAO = 4;
        const string TIPO_DE_IMOVEL = "[Apartamento]";
};

#endif