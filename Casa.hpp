#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Pessoa.hpp"

using namespace std;

static constexpr double taxa_de_comissao_casa = 0.06;

class Casa : public Imovel {

    public:

    Casa(double _area, int _num_quartos, int _num_banheiros, int _num_vagas, double _valor_metro_quadrado, Pessoa _vendedor, string _corretor)
    : Imovel("Casa",_area,_num_quartos,_num_banheiros,_num_vagas,_valor_metro_quadrado,_vendedor,_corretor,taxa_de_comissao_casa)
    {}

};

#endif