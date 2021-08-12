#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Cobertura : public Imovel {
    public:
        Cobertura(Cliente &vendedor , string corretor , DadosComodos comodos , DadosValorArea dadosValorArea);
};

#endif