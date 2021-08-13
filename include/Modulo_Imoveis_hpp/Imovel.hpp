#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

namespace Imoveis {

    class Imovel {
        protected:
            // Os atributos são do tipo "const" pois são imutáveis
            const double area;
            const int Q;
            const int B;
            const int V;
            const double valor_m2;
            const double valor;
            const double C;
            const string corretor;
            Cliente vendedor;
            
            // Atributo que todas as subclasses utilizam para calcular o valor da comissao
            double taxa_comissao;

            Imovel();

            void print();
    };
}

#endif