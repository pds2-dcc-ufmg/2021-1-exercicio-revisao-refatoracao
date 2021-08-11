#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Pessoa.hpp"
#include <string>

using namespace std;

static constexpr double taxa_de_comissao_apartamento = 0.04;

class Apartamento : public Imovel {

    public: 

    Apartamento(double _area, int _num_quartos, int _num_banheiros, int _num_vagas, double _valor_metro_quadrado, Pessoa _vendedor, string _corretor)
    : Imovel("Apartamento",_area,_num_quartos,_num_banheiros,_num_vagas,_valor_metro_quadrado,_vendedor,_corretor,taxa_de_comissao_apartamento)
    {}
    
};

#endif
