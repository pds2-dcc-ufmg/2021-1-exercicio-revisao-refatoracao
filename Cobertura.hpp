#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Pessoa.hpp"

using namespace std;
static constexpr double taxa_de_comissao_cobertura = 0.10;

class Cobertura : public Imovel {
    
    public:

    Cobertura(double _area, int _num_quartos, int _num_banheiros, int _num_vagas, double _valor_metro_quadrado, Pessoa _vendedor, string _corretor)
    : Imovel("Cobertura",_area,_num_quartos,_num_banheiros,_num_vagas,_valor_metro_quadrado,_vendedor,_corretor,taxa_de_comissao_cobertura)
    {}


};

#endif