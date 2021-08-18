#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    public:
    Casa(string corretor, double AREA, int Quartos, int Banheiros, int Vagas, double VALORm2, Cliente vendedor);
    double Perc_Comissao_Casa = 0.06;
    double valor();
    double comissao();
    void print();

};

#endif
