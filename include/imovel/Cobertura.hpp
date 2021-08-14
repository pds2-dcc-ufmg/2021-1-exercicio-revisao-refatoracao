#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

namespace Imovel {

    class Cobertura : public Imovel {
        
        public:
            Cobertura(string corretor, double area, int quartos, int banheiros, int vagas, 
                    double  valor_por_metro_quadrado, Cliente vendedor);
            void print();

        private:
            const double kTaxaComissao = 0.10;
    };

}

#endif