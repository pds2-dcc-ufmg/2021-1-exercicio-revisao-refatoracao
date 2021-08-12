#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

//using namespace std;
//Má pratica o uso de namespace

class Apartamento : public Imovel {
    public:

    double comissao() 
    {
        return comi() * porcentagem;    
    }

    void print() 
    {
        std::cout << "[Apartamento]" << endl;
        Imovel::print();
    }

    private:
        double porcentagem = 0.04; //troca do numero magico
};

#endif