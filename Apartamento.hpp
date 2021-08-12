#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {
    public:
        Apartamento(Cliente &vendedor , string corretor , DadosComodos comodos , DadosValorArea dadosValorArea);
};

#endif