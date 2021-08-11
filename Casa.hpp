#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {
public:
    explicit Casa(std::string corretor, double area, int num_quartos, int num_banheiros, int num_vagas,
        double valor_por_m2, Cliente vendedor) :
        Imovel(area,
            num_quartos,
            num_banheiros,
            num_vagas,
            valor_por_m2,
            vendedor,
            corretor) {};

    double comissao() const;
    void PrintarDados() const;

};

#endif