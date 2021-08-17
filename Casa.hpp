#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    public:
        //Valor casa
        double valor() override; {
        //comissão da casa
        double get_comissão_casa();
        
        double comissão();

        void print override;

    private:

    double comissão_casa = 0.06;
        
   

};

#endif
