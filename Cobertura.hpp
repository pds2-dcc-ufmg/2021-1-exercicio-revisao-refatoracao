#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;


class Cobertura : public Imovel {
    public:
        string tipoImovel();
        double taxaComissao();

    private:
        const double TAXA_DE_COMISSAO = 10;
        const string TIPO_DE_IMOVEL = "[Cobertura]";
};

#endif