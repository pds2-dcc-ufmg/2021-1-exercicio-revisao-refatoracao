#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"
#include "DadosComodos.hpp"
#include "DadosValorArea.hpp"

using namespace std;

class Imovel {
    /*
     *  Mudanças neste segmento:
     *      ---> Aplicação do princípio do Encapsulamento. Todas as variáveis são privadas , sendo o acesso a elas possível somente através de métodos getters (OBS: Nem
     *           todas as variáveis possuem um método getter associado, sendo inacessíveis por elementos externos à classe Imovel)
     *      ---> Para as variáveis  int Q , int B e int V é introduzido um novo objeto DadosComodos, que armazena esses valores. O objetivo dessa mudança foi
     *           reduzir o número de argumentos do construtor da classe Imovel
     *      ---> Para as variáveis double VALORm2 , double Valor , double C e double AREA é introduzido um novo objeto DadosValorArea , que armazena esses valores.
     *           O objetivo dessa mudança foi reduzir o número de argumentos do construtor da classe Imovel
     *      ---> Foi introduzida uma nova variável string _tipo , que armazena o nome do tipo de Imovel. e.g "Casa" , "Cobertura" , "Apartamento"
     *      ---> Ao invés de se armazenar um objeto do tipo Cliente, agora temos uma referência , já que a relação entre essas classes é de Agregação
     */
    private:
        Cliente &_vendedor;
        DadosComodos _comodos;
        DadosValorArea _dadosValorArea;
        string _corretor , _tipo;
    
    /*
     *  Mudanças neste segmento:
     *      ---> Introdução de novos métodos:
     *           * Construtor ==> P/ código mais limpor/organizado e aplicação do Encapsulamento
     *           * infoVenda() ==> Basicamente uma renomeação do método print() do código original. Imprime os dados da venda do Imovel
     *           * infoImovel() ==> Função antes encontrada nas subclasses de Imovel , agora sua implementação é mais genérica. Imprime os dados do Imovel
     *           * info() ==> Junção de infoVenda + infoImovel em uma só função + a impressão do tipo de Imovel
     *           * valor() ==> Retorna o ValorTotal do Imovel. Esse valor está armazenado em _dadosValorArea. Por isso é necessário um getter
     *           * comissao() ==> Retorna o valor da Comissão do Imovel. Esse valor está armazenado em _dadosValorArea. Por isso é necessário um getter
     *           * getTipo() ==> Retorna o tipo do Imovel na forma de uma string
     */
    public:
        Imovel(Cliente &vendedor , string corretor , string tipo , DadosComodos omodos , DadosValorArea dadosValorArea);

        void infoVenda();

        void infoImovel();

        void info();

        double valor();

        double comissao();

        string getTipo();

};

#endif