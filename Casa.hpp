#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

//using namespace std;
//Má pratica o uso de namespace

class Casa : public Imovel {
    public:

    double comissao() 
    {
        return comi() * porcentagem;
    }

    void print() 
    {
        std::cout << "[Casa]" << endl;
        Imovel::print();
    }

    private:
        double porcentagem = 0.06; //troca do numero magico

};

#endif