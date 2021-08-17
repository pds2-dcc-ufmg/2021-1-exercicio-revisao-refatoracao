#include "Casa.hpp"

using namespace Imoveis;

Casa::Casa(std::string corretor, double area, int quartos, int banheiros, int vagas, double valor_m2, Cliente vendedor):
    Imovel(corretor, area, quartos, banheiros, vagas, valor_m2, vendedor){
        taxa_comissao = 0.06;
        tipo_imovel = "Casa";
    }