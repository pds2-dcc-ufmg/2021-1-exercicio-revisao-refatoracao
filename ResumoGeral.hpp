#ifndef RESUMO_GERAL_H
#define RESUMO_GERAL_H

#include "Cliente.hpp"
#include "Imovel.hpp"
#include "Casa.hpp"
#include "Apartamento.hpp"
#include "Cobertura.hpp"

/**
 *classe ResumoGeral
 *
 *\brief esta classe é responsável por informar as operações gerais realizadas pela agência,
 *ou seja, o número total de apartamentos, casas e coberturas disponiveis, o valor total ganho pela agência ao se vender todos
 *os imóveis de um determinado tipo, como por exemplo, o faturamneto da imobiliária ao vender todas as casa
 *disponiveis e ainda informa o somatório das comissões recebidas pelos corretores responsáveis por este tipo de imóvel.
 *
 *\param Quantidade_Total_Imovel: corresponde a quantidade total de um tipo de imóvel, como por exemplo, o número total de casa.
 *
 *os outros parâmetros são equivalentes quanto a sua definição.
 */
class ResumoGeral{

    protected:

        int Quantidade_Total_Imovel = 0;
        double Valor_Total_Imoveis = 0, Comissao_Total_Imoveis = 0;

    public:

        void QuantidadeImoveis();

        void ValorImovel(double);

        void ComissaoImovel(double);

        /** \brief método que imprimi o resultado das operações gerais da agência,
         *como por exemplo a quantidade total de casas disponíveis para a venda.
         */
        void Print();
};

#endif // RESUMO_GERAL_H
