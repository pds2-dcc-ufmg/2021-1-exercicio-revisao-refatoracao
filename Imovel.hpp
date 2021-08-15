#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

/**
 *classe Imovel
 *
 *\brief esta classe recebe as especificações de cada imovel, como o número de quartos existente ou de banheiros
 *e armazena-os no sistema da imobiliária.

 *\param VagasDisponiveis: simboliza o número de vagas de garagem disponiveis para automóveis
 *\param ValorMetroQuadrado: simboliza a avaliação do espaço onde o imovel se localiza, em aspectos de serviços próximos,
 *valor comercial da região.
 */
class Imovel {

    protected:

        double AreaDoImovel, ValorMetroQuadrado;
        int Quarto, Banheiro, VagasDisponiveis;
        Cliente Vendedor;
        std::string Corretor;

    public:

        /** \brief método que define o contrato firmado entre o cliente e a imobiliária, ou seja
         *define quem é o corretor responsável pelo imóvel que está sendo anunciado.
         */
        void Contrato(std::string, Cliente);

        /** \brief método responsável por armazenar na classe os atributos do imóvel,
         *como por exemplo a area do imovel, o número de quartos.
         */
        void imovel(double, int, int, int, double);

        /** \brief método responsável pela impressão das especificações comuns a todos os imoveis anunciados
         *pela imobiliária.
         */
        virtual void print();

        double ValorDoImovel();
};

#endif
