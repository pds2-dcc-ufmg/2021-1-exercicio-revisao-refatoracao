#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
    
public:
    Cobertura(string corretor, double AREA, int Quartos, int Banheiros, int Vagas, double VALORm2, Cliente vendedor);
    double Perc_Comissao_Cbrt = 0.1;
    double valor();
    double comissao();
    void print();
};

#endif

