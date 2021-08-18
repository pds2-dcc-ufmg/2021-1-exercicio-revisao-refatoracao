#include <iostream>
#include <iomanip>

// Interfaces contendo a assinatura/definição dos metodos
#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

// Desenvolvimento dos metodos
// (Este campo é necessario para o funcionamento do codigo na IDE CodeBlocks)
//#include "Imovel.cpp"
//#include "Casa.cpp"
//#include "Cobertura.cpp"
//#include "Apartamento.cpp"
//#include "Cliente.cpp"


int main() {
    // -----------------------------------
    //              Cliente
    // -----------------------------------
    Cliente cliente_1;
    cliente_1.set_nome    ("Xayso Sovon Ziahaka");
    cliente_1.set_endereco("Rua Xangrilá - Braúnas");
    cliente_1.set_cidade  ("Belo Horizonte");
    cliente_1.set_estado  ("MG");
    cliente_1.set_cep     ("31365-570");
    cliente_1.set_telefone("3196007958");

    Cliente cliente_2;
    cliente_2.set_nome    ("Minia Pasies Kituos");
    cliente_2.set_endereco("Rua dos Jacobinos - Ouro Minas");
    cliente_2.set_cidade  ("Belo Horizonte");
    cliente_2.set_estado  ("MG");
    cliente_2.set_cep     ("31870-290");
    cliente_2.set_telefone("3197627067");

    Cliente cliente_3;
    cliente_3.set_nome    ("Vuocue Leiur Baonauza");
    cliente_3.set_endereco("Rua Orminda de Almeida - Tupi B");
    cliente_3.set_cidade  ("Belo Horizonte");
    cliente_3.set_estado  ("MG");
    cliente_3.set_cep     ("31842-630");
    cliente_3.set_telefone("3195949327");

    Cliente cliente_4;
    cliente_4.set_nome    ("Zerer Huduy Fyogar");
    cliente_4.set_endereco("Rua Taquaril - Jonas Veiga");
    cliente_4.set_cidade  ("Belo Horizonte");
    cliente_4.set_estado  ("MG");
    cliente_4.set_cep     ("30285-422");
    cliente_4.set_telefone("3198596327");

    Cliente cliente_5;
    cliente_5.set_nome    ("Ceziel Mioti Pler");
    cliente_5.set_endereco("Rua João Gualberto Costa - Serrano");
    cliente_5.set_cidade  ("Belo Horizonte");
    cliente_5.set_estado  ("MG");
    cliente_5.set_cep     ("30882-747");
    cliente_5.set_telefone("3196274465");

    Cliente cliente_6;
    cliente_6.set_nome    ("Esxo Cilal Zyais");
    cliente_6.set_endereco("Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)");
    cliente_6.set_cidade  ("Belo Horizonte");
    cliente_6.set_estado  ("MG");
    cliente_6.set_cep     ("31650-560");
    cliente_6.set_telefone("3195004414");

    Cliente cliente_7;
    cliente_7.set_nome    ("Leova Wikyecil Neaca");
    cliente_7.set_endereco("Rua João Arantes - Cidade Nova");
    cliente_7.set_cidade  ("Belo Horizonte");
    cliente_7.set_estado  ("MG");
    cliente_7.set_cep     ("31170-240");
    cliente_7.set_telefone("3198461192");

    Cliente cliente_8;
    cliente_8.set_nome    ("Teas Heimeu Pipe");
    cliente_8.set_endereco("Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)");
    cliente_8.set_cidade  ("Belo Horizonte");
    cliente_8.set_estado  ("MG");
    cliente_8.set_cep     ("30668-430");
    cliente_8.set_telefone("3197317802");


    // -----------------------------------
    //              Apartamento
    // -----------------------------------
    int qtdeApartamento = 0;
    int qtdeCobertura = 0;
    int qtdeCasa = 0;

    Apartamento apartamento_1;
    apartamento_1.set_corretor ("Tuoruars");
    apartamento_1.set_area     (55.4);
    apartamento_1.set_quartos  (2);
    apartamento_1.set_banheiros(1);
    apartamento_1.set_vagas    (0);
    apartamento_1.set_valor_m2 (987.0);
    apartamento_1.set_comissao (apartamento_1.comissao());
    apartamento_1.set_total    (apartamento_1.valor() + apartamento_1.comissao());
    apartamento_1.set_vendedor (cliente_1);
    qtdeApartamento++;

    Apartamento apartamento_2;
    apartamento_2.set_corretor ("Fyubyeis");
    apartamento_2.set_area     (74.5);
    apartamento_2.set_quartos  (2);
    apartamento_2.set_banheiros(1);
    apartamento_2.set_vagas    (2);
    apartamento_2.set_valor_m2 (1540.0);
    apartamento_2.set_comissao (apartamento_2.comissao());
    apartamento_2.set_total    (apartamento_2.valor() + apartamento_2.comissao());
    apartamento_2.set_vendedor (cliente_2);
    qtdeApartamento++;

    Apartamento apartamento_3;
    apartamento_3.set_corretor ("Kelia");
    apartamento_3.set_area     (87.2);
    apartamento_3.set_quartos  (3);
    apartamento_3.set_banheiros(2);
    apartamento_3.set_vagas    (2);
    apartamento_3.set_valor_m2 (2354.0);
    apartamento_3.set_comissao (apartamento_3.comissao());
    apartamento_3.set_total    (apartamento_3.valor() + apartamento_3.comissao());
    apartamento_3.set_vendedor (cliente_3);
    qtdeApartamento++;



    // -----------------------------------
    //              Cobertura
    // -----------------------------------
    Cobertura cobertura_1;
    cobertura_1.set_corretor  ("Koci");
    cobertura_1.set_area      (120.1);
    cobertura_1.set_quartos   (3);
    cobertura_1.set_banheiros (3);
    cobertura_1.set_vagas     (2);
    cobertura_1.set_valor_m2  (3123.5);
    cobertura_1.set_comissao  (cobertura_1.comissao());
    cobertura_1.set_total     (cobertura_1.valor() + cobertura_1.comissao());
    cobertura_1.set_vendedor  (cliente_4);
    qtdeCobertura++;

    Cobertura cobertura_2;
    cobertura_2.set_corretor  ("Wail");
    cobertura_2.set_area      (34.8);
    cobertura_2.set_quartos   (4);
    cobertura_2.set_banheiros (3);
    cobertura_2.set_vagas     (3);
    cobertura_2.set_valor_m2  (3578.2);
    cobertura_2.set_comissao  (cobertura_2.comissao());
    cobertura_2.set_total     (cobertura_2.valor() + cobertura_2.comissao());
    cobertura_2.set_vendedor  (cliente_5);
    qtdeCobertura++;

    Cobertura cobertura_3;
    cobertura_3.set_corretor  ("Fival");
    cobertura_3.set_area      (180.0);
    cobertura_3.set_quartos   (4);
    cobertura_3.set_banheiros (4);
    cobertura_3.set_vagas     (4);
    cobertura_3.set_valor_m2  (4165.7);
    cobertura_3.set_comissao  (cobertura_3.comissao());
    cobertura_3.set_total     (cobertura_3.valor() + cobertura_3.comissao());
    cobertura_3.set_vendedor  (cliente_6);
    qtdeCobertura++;


    // -----------------------------------
    //              Casas
    // -----------------------------------
    Casa casa_1;
    casa_1.set_corretor  ("Beydo");
    casa_1.set_area      (145.6);
    casa_1.set_quartos   (3);
    casa_1.set_banheiros (3);
    casa_1.set_vagas     (2);
    casa_1.set_valor_m2  (4023.6);
    casa_1.set_comissao  (casa_1.comissao());
    casa_1.set_total     (casa_1.valor() + casa_1.comissao());
    casa_1.set_vendedor  (cliente_7);
    qtdeCasa++;

    Casa casa_2;
    casa_2.set_corretor  ("Riuzi");
    casa_2.set_area      (245.0);
    casa_2.set_quartos   (5);
    casa_2.set_banheiros (4);
    casa_2.set_vagas     (4);
    casa_2.set_valor_m2  (4856.2);
    casa_2.set_comissao  (casa_2.comissao());
    casa_2.set_total     (casa_2.valor() + casa_2.comissao());
    casa_2.set_vendedor  (cliente_8);
    qtdeCasa++;



    // -----------------------------------
    //              Relatorio
    // -----------------------------------
    // Variaveis
    double valorAp = 0.0;
    double valorCb = 0.0;
    double valorCa = 0.0;
    double comissAp = 0.0;
    double comissCb = 0.0;
    double comissCa = 0.0;

    std::cout << "\n>> Relatório de Imóveis <<" << std::endl;

    apartamento_1.print();
    valorAp += apartamento_1.valor();
    comissAp += apartamento_1.comissao();
    std::cout << std::endl;

    apartamento_2.print();
    valorAp += apartamento_2.valor();
    comissAp += apartamento_2.comissao();
    std::cout << std::endl;

    apartamento_3.print();
    valorAp += apartamento_3.valor();
    comissAp += apartamento_3.comissao();
    std::cout << std::endl;

    cobertura_1.print();
    valorCb += cobertura_1.valor();
    comissCb += cobertura_1.comissao();
    std::cout << std::endl;

    cobertura_2.print();
    valorCb += cobertura_2.valor();
    comissCb += cobertura_2.comissao();
    std::cout << std::endl;

    cobertura_3.print();
    valorCb += cobertura_3.valor();
    comissCb += cobertura_3.comissao();
    std::cout << std::endl;

    casa_1.print();
    valorCa += casa_1.valor();
    comissCa += casa_1.comissao();
    std::cout << std::endl;

    casa_2.print();
    valorCa += casa_2.valor();
    comissCa += casa_2.comissao();
    std::cout << std::endl;


    std::cout << "\n>> Resumo Geral <<" << std::endl;

    std::cout << "\n>>Apartamentos<<\n"
              << "\n Quantidade: " << qtdeApartamento
              << "\n Valor Total: R$ " << std::fixed << std::setprecision(2) << valorAp
              << "\n Comissão Total: R$" << comissAp
              << std::endl
              << "\n>>Coberturas<<\n"
              << "\n Quantidade: " << qtdeCobertura
              << "\n Valor Total: R$ " << std::fixed << std::setprecision(2) << valorCb
              << "\n Comissão Total: R$ " << std::fixed << std::setprecision(2) << comissCb
              << std::endl
              << "\n>>Casas<<\n"
              << "\n Quantidade: " << qtdeCasa
              << "\n Valor Total: R$ " << std::fixed << std::setprecision(2) << valorCa
              << "\n Comissão Total: R$ " << std::fixed << std::setprecision(2) << comissCa
              << std::endl;
}
