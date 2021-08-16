#ifndef CASA_HPP
#define CASA_HPP

//Incluindo .hpp
#include "Imovel.hpp"
#include "Cliente.hpp"

//Namespace
using namespace std;

//Contrato .hpp
class Casa : public Imovel {

    public:
        //Taxa de comissão comum entre todos os objetos de Casa
        static constexpr double TAXA_COMISSAO_CASA = 0.06;

        //Construtor de Casa
        Casa(double area, int quartos, int banheiros, 
            int vagas, double valorMetroQuadrado, 
            Cliente vendedor, string corretor);

        //Calcula a comissão da Casa
        double calculaComissao();

        //Calcula o valor de venda da Casa (comissão + valor da Casa)
        double calculaValorVenda();

        //Imprime os dados da Casa
        void print();

};

#endif