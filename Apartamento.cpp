#include "Apartamento.hpp"

using namespace Imoveis;
Apartamento::Apartamento(std::string corretor, double area, int quartos, int banheiros, int vagas, double valor_m2, Cliente vendedor):
    Imovel(corretor, area, quartos, banheiros, vagas, valor_m2, vendedor){
        taxa_comissao = 0.4;
        tipo_imovel = "apartamento";
};