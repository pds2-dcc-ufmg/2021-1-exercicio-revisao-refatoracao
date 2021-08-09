#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

//Taxa de comissão de apartamentos
#define AP_COMMISSION_FEE 0.06

using namespace std;

class Apartamento : public Imovel {

    public:
        Apartamento(string corr,
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
                this->_commissionFee = AP_COMMISSION_FEE;
            }

        //Imprime os dados do Apartamento
        void print() {
            std::cout << "[Apartamento]" << endl;
            Imovel::print();
        }
};

#endif