#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

namespace Imovel {

    class Apartamento : public Imovel {

        public:
            Apartamento(string corretor, double area, int quartos, int banheiros, int vagas, 
                        double  valor_por_metro_quadrado, Cliente vendedor);
            void print();

        private:
            const double kTaxaComissao = 0.04;
    };

}

#endif