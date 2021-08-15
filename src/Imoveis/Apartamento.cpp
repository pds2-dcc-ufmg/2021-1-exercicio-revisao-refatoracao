#include "Apartamento.hpp"

using namespace Imoveis;

Apartamento::Apartamento(
    std::string corretor, 
    double area, int quartos, 
    int banheiros, int vagas, 
    double valor_m2, cliente::Cliente vendedor) : 
    Imovel(corretor, area, quartos, banheiros, 
    vagas, valor_m2, vendedor)
    {
        this->taxa_comissao = 0.04;
        this->tipo_imovel = "Apartamento";

};
