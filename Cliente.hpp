#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>

/**
 *classe Cliente
 *
 *\brief Esta classe armazena os dados pessoais dos propriet�rios dos im�veis que s�o anunciados no portif�lio,
 *ou seja, s�o os clientes interressados em vender n�o em comprar
 */

class Cliente {

    protected:

        std::string Nome, Telefone, Rua, Cidade, Estado, CEP;

    public:

        /** \brief m�todo que recebe e armazena o nome e o telefone do cliente na classe.
         */
        void DadosPessoais(std::string, std::string);

        /** \brief m�todo que recebe e armazena o nome da rua, da cidade e do Estado onde reside o cliente
         *al�m do CEP da regi�o.
         */
        void Endereco(std::string, std::string, std::string, std::string);

        /** \brief m�todo que imprimi os dados pessoais do cliente.
         */
        void print();
};

#endif
