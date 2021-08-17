#include "Imovel.hpp"
#include "Casa.hpp"

double Casa::valor()
{
    calc_valor();
}

double Casa::comissao()
{
    calc_comissao(tax);
}

void Casa::print()
{
    printer(print_tax);
}