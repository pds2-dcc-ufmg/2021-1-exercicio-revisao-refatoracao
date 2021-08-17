#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    public:
        Casa(Cliente _vendedor, string _corretor, double _area,
        int _quartos, int _banheiros, int _vagas, double _metro){

            this->vendedor = _vendedor;
            this->corretor = _corretor;
            this->area = _area;
            this->quant_quartos = _quartos;
            this->quant_banheiros = _banheiros;
            this->quant_vagas = _vagas;
            this->valor_metro_quadrado = _metro;

            set_tipo_imovel("Casa");
            set_taxa_comissao(0.06);
            calcular_valores();
        }

};

#endif
