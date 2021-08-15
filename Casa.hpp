#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"


using namespace std;

class Casa : public Imovel {

    public:
        Casa();
        Casa(string _corretor, double _area, int _numero_quartos, int _numero_banheiros, int _vagas, 
                    double _valorm2, double _comissao, double _valor, Cliente _vendedor);
        void print();

};

#endif