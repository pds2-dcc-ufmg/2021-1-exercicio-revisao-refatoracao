#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    public:

        Casa(string _corretor, double _area, double valorM2, int _quartos, int _banheiros, int _vagas, Cliente _vendedor);

        const double comissaoCasa = 0.06;

        void print();
};


#endif