#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

namespace Imoveis{
class Casa : public Imovel {

    public:

    Casa(std::string corretor, double area, int quartos, int banheiros, int vagas, double valor_m2, Cliente vendedor);

};
}
#endif