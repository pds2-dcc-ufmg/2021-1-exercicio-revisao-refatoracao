#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

//Taxa de comissão de coberturas
#define COB_COMMISSION_FEE 0.10

using namespace std;

class Cobertura : public Imovel {
    
    public:
        Cobertura(string corr,
                  double area,
                  int quartos,
                  int banheiros,
                  int vagas,
                  double valorM2,
                  Cliente vend):
            Imovel(corr,
                   area,
                   quartos,
                   banheiros,
                   vagas,
                   valorM2,
                   vend)
            {
                this->_commissionFee = COB_COMMISSION_FEE;
            }

        //Imprime os dados da Cobertura
        void print() {
            std::cout << "[Cobertura]" << endl;
            Imovel::print();
        }
};

#endif