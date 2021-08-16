#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
        double AREA;
        int QUARTOS_QNT;
        int BANHEIROS_QNT;
        int VAGAS_QNT;
        double VALORm2;
        double VALOR_TOTAL;
        double COMISSAO;
        Cliente vendedor;
        string corretor;

        double valor_imovel();
        double comissao();
        void print();
        
    protected:
    float taxa_comisao;
    string IMOVEL;
};

#endif