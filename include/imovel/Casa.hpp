#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

namespace Imovel {

    class Casa : public Imovel {

        public:
            Casa(string corretor, double area, int quartos, int banheiros, int vagas, 
                double  valor_por_metro_quadrado, Cliente vendedor);
            void print();

        private:
            const double kTaxaComissao = 0.06;

    };

}

#endif