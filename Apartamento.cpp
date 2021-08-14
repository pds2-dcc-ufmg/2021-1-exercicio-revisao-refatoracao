#include "Apartamento.hpp"

Apartamento::Apartamento(
    double area,
    int quartos,
    int banheiros,
    int vagas,
    double valor_m2,
    Cliente cliente,
    string corretor
):Imovel(
    area,
    quartos,
    banheiros,
    vagas,
    valor_m2,
    comissao(),
    valor()+comissao(),
    cliente,
    corretor
){}