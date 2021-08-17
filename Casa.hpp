#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

#define taxaDeComissaoCSA 0.06

class Casa : public Imovel {
    public:
        Casa(){
            taxaDeComissao = taxaDeComissaoCSA;
        }

        void print() {
            std::cout << "[Casa]" << endl;
            Imovel::printImovel();
        }
};

#endif