#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
    
    public:

    double valor(){
        return Imovel::valor();
    }

    double comissao() {
        return Imovel::comissao();
        
    }

    void Impressao_Imovel() {
        std::cout << "[Cobertura]" << endl;
        Imovel::Impressao_Imovel();
    }
};

#endif