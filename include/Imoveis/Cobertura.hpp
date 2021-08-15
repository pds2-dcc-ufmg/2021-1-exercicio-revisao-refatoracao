#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"


namespace Imoveis {

    class Cobertura : public Imovel {
        
        public:

            Cobertura(std::string corretor, 
                      double area, int quartos, 
                      int banheiros, int vagas, 
                      double valor_m2, cliente::Cliente vendedor);

    };
}

#endif