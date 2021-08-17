#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"

class Casa: public Imovel {
    private:
        const double TAXA_COMISSAO = 0.06;

    public:
        Casa(double _area, double _valor_m2, int _num_quartos, int _num_banheiros, int _num_vagas, 
            Cliente _vendedor, std::string _corretor);
            
        void print();

        double get_taxa_comissao();
        double comissao();
        double valor_de_venda();
};

#endif