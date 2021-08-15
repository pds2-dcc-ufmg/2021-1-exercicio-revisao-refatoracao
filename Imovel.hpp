#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

/**
 *classe Imovel
 *
 *\brief esta classe recebe as especifica��es de cada imovel, como o n�mero de quartos existente ou de banheiros
 *e armazena-os no sistema da imobili�ria.

 *\param VagasDisponiveis: simboliza o n�mero de vagas de garagem disponiveis para autom�veis
 *\param ValorMetroQuadrado: simboliza a avalia��o do espa�o onde o imovel se localiza, em aspectos de servi�os pr�ximos,
 *valor comercial da regi�o.
 */
class Imovel {

    protected:

        double AreaDoImovel, ValorMetroQuadrado;
        int Quarto, Banheiro, VagasDisponiveis;
        Cliente Vendedor;
        std::string Corretor;

    public:

        /** \brief m�todo que define o contrato firmado entre o cliente e a imobili�ria, ou seja
         *define quem � o corretor respons�vel pelo im�vel que est� sendo anunciado.
         */
        void Contrato(std::string, Cliente);

        /** \brief m�todo respons�vel por armazenar na classe os atributos do im�vel,
         *como por exemplo a area do imovel, o n�mero de quartos.
         */
        void imovel(double, int, int, int, double);

        /** \brief m�todo respons�vel pela impress�o das especifica��es comuns a todos os imoveis anunciados
         *pela imobili�ria.
         */
        virtual void print();

        /** \brief m�todo que calcula a comiss�o que receber� o corretor respons�vel pela venda de determinado tipo
         *de im�vel.
         */
        virtual double comissao() = 0;

        double ValorDoImovel();
};

#endif
