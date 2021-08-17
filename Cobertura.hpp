#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

namespace Imoveis{
class Cobertura : public Imovel {
    
    public:

    double valor();
    double comissao();
    Cobertura(std::string corretor, double area, int quartos, int banheiros, int vagas, double valor_m2, Cliente vendedor);
};
}
#endif