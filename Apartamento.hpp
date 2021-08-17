#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {

    public:
        
        Apartamento(double _area, int _n_quartos, int _n_banheiros, int _n_vagas, double _valor_m2, double _valor_total, double _comissao, Cliente _vendedor, string _corretor);

        void print();
};
#endif
