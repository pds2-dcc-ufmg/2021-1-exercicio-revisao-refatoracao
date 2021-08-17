#ifndef CASA_HPP
#define CASA_HPP

#include <string>
using namespace std;

class Casa: public Imovel {
    public:
        Casa();
        void Imovel::printDadosImovel();
        void printDadosCasa();

        double getValor();
        double getComissao();

        void setValor(double novoValor);
        void setComissao(double novaComissao); 

    private:
        const double TAXA;
        double area, valorM2, comissao, valorCasa; 
        int quantidadeDeQuartos, quantidadeBanheiros, quantidadeDeVagas;
};
 

#endif