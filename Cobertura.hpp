#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include <string>
using namespace std;

class Cobertura: public Imovel {
    public:
        Cobertura();
        void Imovel::printDadosImovel();
        void printDadosCobertura();

        double getValor();
        double getComissao();

        void setValor(double novoValor);
        void setComissao(double novaComissao); 

    private:
        const double TAXA;
        double area, valorM2, comissao, valorCobertura; 
        int quantidadeDeQuartos, quantidadeBanheiros, quantidadeDeVagas;
};
 

#endif