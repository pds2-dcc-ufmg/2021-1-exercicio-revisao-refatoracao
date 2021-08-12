#include <iostream>
#include <iomanip>
#include <vector>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

// Macros para os valores de comissão, que dependem do tipo de Imovel
#define COMISSAO_CASA 0.06
#define COMISSAO_COBERTURA 0.10
#define COMISSAO_APARTAMENTO 0.04

/*
 *  Métodos Auxiliares para gerar os Relatórios e os Resumos , reduzindo os códigos duplicados
 *   
 *  ATENÇÃO!!!!!!! : o tipo T deve ser, exclusivamente, Imovel ou qualquer de seus subtipos , devido à chamada de getTipo()
 * 
 */

/*
 *  \method gerarResumo()
 *  \brief  Responsável por gerar um resumo que contém informações sobre todos os elementos de um tipo T armazenados em lista
 *  \params typename T ==> tipo dos elementos armazenados no vector lista ; 
 *          vector<T> &lista ==> referência para vetor que contém Imóveis do tipo T;
 *          double &valorTotal ==> referência para variável que armazena o valor total dos imóveis em lista ; 
 *          double &comissaoTotal ==> referência para variável que armazena o valor da soma das comissões dos imóveis em lista    
 */
template<typename T>
void gerarResumo(std::vector<T> &lista , double &valorTotal , double &comissaoTotal){
    std::cout << "\n>>" + lista[0].getTipo() + "<<\n" // NÃO É UMA BOA SOLUÇÃO ===> SUGESTÕES SÃO BEM-VINDAS!!!!
            << "\n Quantidade: " << lista.size()
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorTotal
            << "\n Comissão Total: R$" << comissaoTotal
            << endl;
}

/*
 *  \method gerarRelatorio()
 *  \brief  Responsável por gerar um relatorio de cada um dos elementos em lista
 *  \params typename T ==> tipo dos elementos armazenados no vector lista ; 
 *          vector<T> &lista ==> referência para vetor que contém Imóveis do tipo T ;
 *          double &valorTotal ==> referência para variável que armazena o valor total dos imóveis em lista ; 
 *          double &comissaoTotal ==> referência para variável que armazena o valor da soma das comissões dos imóveis em lista    
 */
template<typename T>
void gerarRelatorio(std::vector<T> &lista , double &valorTotal , double &comissaoTotal){
    for(T elemento : lista){
        elemento.info();
        cout << endl;
        valorTotal += elemento.valor();
        comissaoTotal += elemento.comissao();
    }
}

int main() {
    
    /*
     *  Mudanças neste segmento:
     *      ---> Ao invés de se atribuir os valores a cada uma das características dos Clientes após sua construção , cada informação agora é passada ao construtor
     *           no momento da declaração do objeto. Assim, além do código ficar mais organizado, o princípio do Encapsulamento agora é respeitado (veja as alterações
     *           feitas na classe Cliente).
     */
    Cliente cl1("Xayso Sovon Ziahaka","Rua Xangrilá - Braúnas","Belo Horizonte","MG","31365-570","3196007958");
    
    Cliente cl2("Minia Pasies Kituos","Rua dos Jacobinos - Ouro Minas","Belo Horizonte","MG","31870-290","3197627067");
    
    Cliente cl3("Vuocue Leiur Baonauza","Rua Orminda de Almeida - Tupi B","Belo Horizonte","MG","31842-630","3195949327");
    
    Cliente cl4("Zerer Huduy Fyogar","Rua Taquaril - Jonas Veiga","Belo Horizonte","MG","30285-422","3198596327");
    
    Cliente cl5("Ceziel Mioti Pler","Rua João Gualberto Costa - Serrano","Belo Horizonte","MG","30882-747","3196274465");
    
    Cliente cl6("Esxo Cilal Zyais","Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)","Belo Horizonte","MG","31650-560","3195004414");
    
    Cliente cl7("Leova Wikyecil Neaca","Rua João Arantes - Cidade Nova","Belo Horizonte","MG","31170-240","3198461192");
    
    Cliente cl8("Teas Heimeu Pipe","Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)","Belo Horizonte","MG","30668-430","3197317802");

    
    /*
     *  Mudanças neste segmento:
     *      ---> Alterei os comentários que indicam o início das Listas de Imóveis , tornando-os maiores, para ficar mais fácil perceber onde se iniciam as listas
     *      ---> Para cada Lista, removi a variável que contava o número de objetos criados e inseri um vetor que armazena todos estes objetos. Assim , estamos
     *           "catalogando" todos os Imóveis inseridos, o que é benéfico para nosso sistema, sem contar que podemos simplesmente chamar a função size() para
     *           consultarmos a quantidade de elementos (o que fazíamos antes através das variáveis qtde)
     *      ---> Assim como no caso da classe Cliente , agora são utilizados construtores , de forma a tornar o código mais limpo e obedecer ao princípio do 
     *           Encapsulamento
     *      ---> Pode-se perceber que temos dois objetos novos: DadosComodos e DadosValorAreea. Entrarei em mais detalhes sobre eles nos comentário sobre a classe
     *           Imovel       
     *           
     */

    /*
     *   Lista de Apartamentos
     */

    std::vector<Apartamento> listaAps;

    Apartamento ap1(cl1 , "Tuoruars" , DadosComodos(2 , 1 , 0) , DadosValorArea(55.4 , 987.0 , COMISSAO_APARTAMENTO));
    listaAps.push_back(ap1);

    Apartamento ap2(cl2 , "Fyubyeis" , DadosComodos(2 , 1 , 2) , DadosValorArea(74.5 , 1540.0 , COMISSAO_APARTAMENTO));
    listaAps.push_back(ap2);

    Apartamento ap3(cl3 , "Kelia" , DadosComodos(3 , 2 , 2) , DadosValorArea(87.2 , 2354.0 , COMISSAO_APARTAMENTO));
    listaAps.push_back(ap3);

    /*
     *   Lista de Coberturas
     */

    std::vector<Cobertura> listaCbs;

    Cobertura cb1(cl4 , "Koci" , DadosComodos(3 , 3 , 2) , DadosValorArea(120.1 , 3123.5 , COMISSAO_COBERTURA));
    listaCbs.push_back(cb1);
    
    Cobertura cb2(cl5 , "Wail" , DadosComodos(4 , 3 , 3) , DadosValorArea(134.8 , 3578.2 , COMISSAO_COBERTURA));
    listaCbs.push_back(cb2);

    Cobertura cb3(cl6 , "Fival" , DadosComodos(4 , 4 , 4) , DadosValorArea(180.0 , 4165.7 , COMISSAO_COBERTURA));
    listaCbs.push_back(cb3);

    /* 
     *   Lista de Casas
     */

    std::vector<Casa> listaCas;

    Casa ca1(cl7 , "Beydo" , DadosComodos(3 , 3 , 2) , DadosValorArea(145.6 , 4023.6 , COMISSAO_CASA));
    listaCas.push_back(ca1);

    Casa ca2(cl8 , "Riuzi" , DadosComodos(5 , 4 , 4) , DadosValorArea(245.0 , 4856.2 , COMISSAO_CASA));
    listaCas.push_back(ca2);

    /*
     *  Mudanças neste segmento:
     *      ---> Para os segmentos de Processamento de Relatório de Imóveis e Resumo Geral, simplismente substituí os comandos repetidos por funções
     *           que executam aqueles exatos procedimentos, mas agora reduzimos significativamente a quantidade de códigos repetidos
     *          
     */

    /*
     *   Processamento de Relatório de Imóveis
     */

    double valorTotalAp = 0.0 , valorTotalCb = 0.0 , valorTotalCa = 0.0;
    double comissaoTotalAp = 0.0 , comissaoTotalCb = 0.0 , comissaoTotalCa = 0.0;

    std::cout << "\n>> Relatório de Imóveis <<" << endl;
    
    gerarRelatorio<Apartamento>(listaAps , valorTotalAp , comissaoTotalAp);

    gerarRelatorio<Cobertura>(listaCbs , valorTotalCb , comissaoTotalCb);

    gerarRelatorio<Casa>(listaCas , valorTotalCa , comissaoTotalCa);

    /*
     *   Resumo Geral
     */

    std::cout << "\n>> Resumo Geral <<" << endl;

    gerarResumo<Apartamento>(listaAps , valorTotalAp , comissaoTotalAp);

    gerarResumo<Cobertura>(listaCbs , valorTotalCb , comissaoTotalCb);

    gerarResumo<Casa>(listaCas , valorTotalCa , comissaoTotalCa);

    return 0;
}
