#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {
    public:
        Casa(Cliente &vendedor , string corretor , DadosComodos comodos , DadosValorArea dadosValorArea);
};

#endif