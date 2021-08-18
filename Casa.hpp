#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

class Casa : public Imovel {

    public:

    double valor(){
        return Imovel::valor();
    }

    double comissao() {
        return Imovel::comissao();
    }

    void Impressao_Imovel() {

        std::cout << "[Casa]" << endl;
        Imovel::Impressao_Imovel();
    }

};

#endif