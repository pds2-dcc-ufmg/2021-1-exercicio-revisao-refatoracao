#include "Imovel.hpp"
#include "Cobertura.hpp"

double Cobertura::valor()
{
    calc_valor();
}

double Cobertura::comissao()
{
    calc_comissao(tax);
}

void Cobertura::print()
{
    printer(print_tax);
}