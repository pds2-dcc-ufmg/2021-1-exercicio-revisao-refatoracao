#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

namespace Imoveis {

    class Cobertura : public Imovel {
        
        public:

        Cobertura();

        double valor();

        double comissao();

        void print();
    };
}

#endif