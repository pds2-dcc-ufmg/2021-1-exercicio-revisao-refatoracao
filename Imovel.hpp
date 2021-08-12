#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"
#include "DadosComodos.hpp"
#include "DadosValorArea.hpp"

using namespace std;

class Imovel {
    private:
        Cliente &_vendedor;
        DadosComodos _comodos;
        DadosValorArea _dadosValorArea;
        string _corretor , _tipo;
    
    public:
        Imovel(Cliente &vendedor , string corretor , string tipo , DadosComodos omodos , DadosValorArea dadosValorArea);

        void infoVenda();

        void infoImovel();

        void info();

        double valor();

        double comissao();

        string getTipo();

};

#endif