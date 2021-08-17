#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"

using namespace std;

class Apartamento : public Imovel {

    public: 
        //Retorna valor da comissao do apartamento
        double getComissaoApartameto();
        //Informações do apartamento
        void print();
};

#endif