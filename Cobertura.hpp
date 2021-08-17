#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

#define taxaDeComissaoCOB 0.1

class Cobertura : public Imovel {    
    public:
        Cobertura(){
            taxaDeComissao = taxaDeComissaoCOB;
        }

        void print() {
            std::cout << "[Cobertura]" << endl;
            Imovel::printImovel();
        }
};

#endif