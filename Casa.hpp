#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"


class Casa : public Imovel {
    public:
        string tipoImovel();
        double taxaComissao();

    private:
        const double TAXA_DE_COMISSAO = 6;
        const string TIPO_DE_IMOVEL = "[Casa]";

};

#endif