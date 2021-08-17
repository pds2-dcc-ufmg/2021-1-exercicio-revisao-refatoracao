#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

//Incluindo .hpp
#include "Imovel.hpp"
#include "Cliente.hpp"

//Namespace
using namespace std;

//Contrato .hpp
class Apartamento : public Imovel {

    public: 
        //Taxa de comissão comum entre todos os objetos de Apartamento
        static constexpr double TAXA_COMISSAO_APARTAMENTO = 0.04;

        //Construtor de um Apartamento
        Apartamento(double area, int quartos, int banheiros, 
                    int vagas, double valorMetroQuadrado, 
                    Cliente vendedor, string corretor);
         
        //Calcula a comissão do Apartamento
        double calculaComissao();

        //Calcula o valor de venda do Apartamento (comissão + valor do Apartamento)
        double calculaValorVenda();

        //Imprime os dados do Apartamento
        void print();

};

#endif