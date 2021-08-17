#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP
#include "Imovel.hpp"

#include <string>
using namespace std;
  
class Apartamento: public Imovel {
    public:
        Apartamento();
        void Imovel::printDadosImovel();
        void printDadosApto();

        double getValor();
        double getComissao();

        void setValor(double novoValor);
        void setComissao(double novaComissao); 

    private:
        const double TAXA;
        double area, valorM2, comissao, valorApto; 
        int quantidadeDeQuartos, quantidadeBanheiros, quantidadeDeVagas;
};
 

#endif