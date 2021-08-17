#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {

    public: 
    
        Apartamento(string _corretor, double _area, double valorM2,int _quartos, int _banheiros, int _vagas,Cliente _vendedor);
    
        const double comissaoApartamento = 0.04;
    
        void print();

};

#endif