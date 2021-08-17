#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

#define taxaDeComissaoAP 0.04

class Apartamento : public Imovel {
    public:
        Apartamento(){
            taxaDeComissao = taxaDeComissaoAP;
        }

        void print() {
            std::cout << "[Apartamento]" << endl;
            Imovel::printImovel();
        }
};

#endif