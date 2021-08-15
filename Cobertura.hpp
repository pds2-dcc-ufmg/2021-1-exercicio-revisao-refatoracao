#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
    public:
        Cobertura();
        Cobertura(string _corretor, double _area, int _numero_quartos, int _numero_banheiros, int _vagas, 
                    double _valorm2, double _comissao, double _valor, Cliente _vendedor);
        void print();
};

#endif