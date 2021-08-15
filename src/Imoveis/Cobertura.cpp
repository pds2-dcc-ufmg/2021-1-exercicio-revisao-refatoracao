#include "Cobertura.hpp"

using namespace Imoveis;

Cobertura::Cobertura(std::string corretor, 
    double area, int quartos, 
    int banheiros, int vagas, 
    double valor_m2, cliente::Cliente vendedor) :
    Imovel(corretor, area, quartos, banheiros, 
    vagas, valor_m2, vendedor)
{
    this->taxa_comissao = 0.10;
    this->tipo_imovel = "Cobertura";
}

 
 

