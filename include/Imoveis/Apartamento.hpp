#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

namespace Imoveis {

    class Apartamento : public Imovel {

        public: 

        Apartamento(std::string corretor, 
                    double area, int quartos, 
                    int banheiros, int vagas, 
                    double valor_m2, cliente::Cliente vendedor);

    };

}
#endif