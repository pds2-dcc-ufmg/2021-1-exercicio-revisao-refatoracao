#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    public:

    Casa() {
        this->setComissao(0.06);
    }

    void print() {
        std::cout << "[Casa]" << endl;
        Imovel::print();
    }

};

#endif
