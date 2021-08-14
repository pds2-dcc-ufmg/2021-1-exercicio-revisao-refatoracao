#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {
    public: 
        Apartamento();
        Apartamento(string _corretor, double _area, int _numero_quartos, int _numero_banheiros, int _vagas, 
                    double _valorm2, double _comissao, double _valor, Cliente _vendedor);
        double valor();
        double comissao();
        void print();
};

#endif