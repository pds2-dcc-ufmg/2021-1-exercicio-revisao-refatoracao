#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Cobertura : public Imovel {
    
    public:
        //Metódo que calcula a comissão do imóvel (Cobertura)
        double comissao() override;
        //Metódo que calcula o valor do imóvel (Cobertura)
        double valor() override;
        //Metódo que escreve as informações do imóvel (Cobertura)
        void print() override;
    
    private:
        double Taxa_Comissao_Cobertura = 0.10;
};

#endif