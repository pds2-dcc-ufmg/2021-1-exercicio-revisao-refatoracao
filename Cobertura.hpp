#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

//using namespace std;
//Má pratica o uso de namespace

class Cobertura : public Imovel {
    public:

    double comissao() 
    {
        return comi() * porcentagem;   
    }

    void print() 
    {
        std::cout << "[Cobertura]" << endl;
        Imovel::print();   
    }

    private:
        double porcentagem = 0.10; //troca do numero magico

};

#endif