#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"


class Cobertura: public Imovel {
    private:
        const double TAXA_COMISSAO = 0.10;

    public:
        Cobertura(double _area, double _valor_m2, int _num_quartos, int _num_banheiros, int _num_vagas, 
                Cliente _vendedor, std::string _corretor);

        void print();

        double get_taxa_comissao();
        double comissao();
        double valor_de_venda();
};

#endif