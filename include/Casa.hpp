#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

//Taxa de comissão de casas
#define CASA_COMMISSION_FEE 0.06

using namespace std;

class Casa : public Imovel {

    public:
        Casa(string corr,
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
                this->_commissionFee = CASA_COMMISSION_FEE;
            }

        //Imprime os dados da Casa
        void print() {
            std::cout << "[Casa]" << endl;
            Imovel::print();
        }
};

#endif