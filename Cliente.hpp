#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>

/**
 *classe Cliente
 *
 *\brief Esta classe armazena os dados pessoais dos proprietários dos imóveis que são anunciados no portifólio,
 *ou seja, são os clientes interressados em vender não em comprar
 */

class Cliente {

    protected:

        std::string Nome, Telefone, Rua, Cidade, Estado, CEP;

    public:

        /** \brief método que recebe e armazena o nome e o telefone do cliente na classe.
         */
        void DadosPessoais(std::string, std::string);

        /** \brief método que recebe e armazena o nome da rua, da cidade e do Estado onde reside o cliente
         *além do CEP da região.
         */
        void Endereco(std::string, std::string, std::string, std::string);

        /** \brief método que imprimi os dados pessoais do cliente.
         */
        void print();
};

#endif
