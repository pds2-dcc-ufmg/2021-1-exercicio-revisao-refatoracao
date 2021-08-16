#ifndef COBERTURA_HPP
#define COBERTURA_HPP

//Incluindo .hpp
#include "Imovel.hpp"
#include "Cliente.hpp"

//Namespace
using namespace std;

//Contrato .hpp
class Cobertura : public Imovel {
    public:
        //Taxa de comissão comum entre todos os objetos de Cobertura
        static constexpr double TAXA_COMISSAO_COBERTURA = 0.10;

        //Construtor de Cobertura
        Cobertura(double area, int quartos, int banheiros, 
                int vagas, double valorMetroQuadrado, 
                Cliente vendedor, string corretor);

        //Calcula a comissão da Cobertura
        double calculaComissao();

        //Calcula o valor de venda da Cobertura (comissão + valor da Cobertura)
        double calculaValorVenda();

        //Imprime os dados da Cobertura
        void print();

};

#endif