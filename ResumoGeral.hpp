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
 *\brief esta classe � respons�vel por informar as opera��es gerais realizadas pela ag�ncia,
 *ou seja, o n�mero total de apartamentos, casas e coberturas disponiveis, o valor total ganho pela ag�ncia ao se vender todos
 *os im�veis de um determinado tipo, como por exemplo, o faturamneto da imobili�ria ao vender todas as casa
 *disponiveis e ainda informa o somat�rio das comiss�es recebidas pelos corretores respons�veis por este tipo de im�vel.
 *
 *\param Quantidade_Total_Imovel: corresponde a quantidade total de um tipo de im�vel, como por exemplo, o n�mero total de casa.
 *
 *os outros par�metros s�o equivalentes quanto a sua defini��o.
 */
class ResumoGeral{

    protected:

        int Quantidade_Total_Imovel = 0;
        double Valor_Total_Imoveis = 0, Comissao_Total_Imoveis = 0;

    public:

        void QuantidadeImoveis();

        void ValorImovel(double);

        void ComissaoImovel(double);

        /** \brief m�todo que imprimi o resultado das opera��es gerais da ag�ncia,
         *como por exemplo a quantidade total de casas dispon�veis para a venda.
         */
        void Print();
};

#endif // RESUMO_GERAL_H
