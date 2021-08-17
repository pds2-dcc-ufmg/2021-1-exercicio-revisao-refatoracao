#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
    public:
        Cobertura(string _corretor, double _area, double valorM2, int _quartos, int _banheiros, int _vagas,Cliente _vendedor);
        
        const double comissaoCobertura = 0.10;

        void print();
};

#endif