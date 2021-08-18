#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {

    public:
    Apartamento(string corretor, double AREA, int Quartos, int Banheiros, int Vagas, double VALORm2, Cliente vendedor);
    double Perc_Comissao_Ap = 0.06;
    double valor();
    double comissao();
    void print();

};

#endif
