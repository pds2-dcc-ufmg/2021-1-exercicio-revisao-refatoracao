#include <iostream>
#include <iomanip>
#include <vector>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

int main() {

    Cliente cl1;
    cl1.set_nome("Xayso Sovon Ziahaka");
    cl1.set_endereco("Rua Xangrilá - Braúnas");
    cl1.set_cidade("Belo Horizonte");
    cl1.set_estado("MG");
    cl1.set_cep("31365-570");
    cl1.set_telefone("3196007958");

    Cliente cl2;
    cl2.set_nome("Minia Pasies Kituos");
    cl2.set_endereco("Rua dos Jacobinos - Ouro Minas");
    cl2.set_cidade("Belo Horizonte");
    cl2.set_estado("MG");
    cl2.set_cep("31870-290");
    cl2.set_telefone("3197627067");

    Cliente cl3;
    cl3.set_nome("Vuocue Leiur Baonauza");
    cl3.set_endereco("Rua Orminda de Almeida - Tupi B");
    cl3.set_cidade("Belo Horizonte");
    cl3.set_estado("MG");
    cl3.set_cep("31842-630");
    cl3.set_telefone("3195949327");

    Cliente cl4;
    cl4.set_nome("Zerer Huduy Fyogar");
    cl4.set_endereco("Rua Taquaril - Jonas Veiga");
    cl4.set_cidade("Belo Horizonte");
    cl4.set_estado("MG");
    cl4.set_cep("30285-422");
    cl4.set_telefone("3198596327");

    Cliente cl5;
    cl5.set_nome("Ceziel Mioti Pler");
    cl5.set_endereco("Rua João Gualberto Costa - Serrano");
    cl5.set_cidade("Belo Horizonte");
    cl5.set_estado("MG");
    cl5.set_cep("30882-747");
    cl5.set_telefone("3196274465");

    Cliente cl6;
    cl6.set_nome("Esxo Cilal Zyais");
    cl6.set_endereco("Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)");
    cl6.set_cidade("Belo Horizonte");
    cl6.set_estado("MG");
    cl6.set_cep("31650-560");
    cl6.set_telefone("3195004414");

    Cliente cl7;
    cl7.set_nome("Leova Wikyecil Neaca");
    cl7.set_endereco("Rua João Arantes - Cidade Nova");
    cl7.set_cidade("Belo Horizonte");
    cl7.set_estado("MG");
    cl7.set_cep("31170-240");
    cl7.set_telefone("3198461192");

    Cliente cl8;
    cl8.set_nome("Teas Heimeu Pipe");
    cl8.set_endereco("Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)");
    cl8.set_cidade("Belo Horizonte");
    cl8.set_estado("MG");
    cl8.set_cep("30668-430");
    cl8.set_telefone("3197317802");

    int quant_apartamentos = 0;
    int quant_casas = 0;
    int quant_coberturas = 0;

    Apartamento apartamento_1(cl1,"Tuoruars",55.4,2,1,0,987.0);
    quant_apartamentos++;

    Apartamento apartamento_2(cl2,"Fyubyeis",74.5,2,1,2,1540.0);
    quant_apartamentos++;

    Apartamento apartamento_3(cl3,"Kelia",87.2,3,2,2,2354.0);
    quant_apartamentos++;

    Cobertura cobertura_1(cl4,"Koci",120.1,3,3,2,3123.5);
    quant_coberturas++;

    Cobertura cobertura_2(cl5,"Wail",134.8,4,3,3,3578.2);
    quant_coberturas++;

    Cobertura cobertura_3(cl6,"Fival",180.0,4,4,4,4165.7);
    quant_coberturas++;

    Casa casa_1(cl7,"Beydo",145.6,3,3,2,4023.6);
    quant_casas++;

    Casa casa_2(cl8,"Riuzi",245.0,5,4,4,4856.2);
    quant_casas++;

    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    double valor_total_apartamentos = 0.0;
    double valor_total_coberturas = 0.0;
    double valor_total_casas = 0.0;
    double comissao_total_apartamentos = 0.0;
    double comissao_total_coberturas = 0.0;
    double comissao_total_casas = 0.0;

    apartamento_1.mostrar_informacoes();
    valor_total_apartamentos += apartamento_1.get_valor_imovel();
    comissao_total_apartamentos += apartamento_1.get_comissao();
    std::cout << endl;

    apartamento_2.mostrar_informacoes();
    valor_total_apartamentos += apartamento_2.get_valor_imovel();
    comissao_total_apartamentos += apartamento_2.get_comissao();
    std::cout << endl;

    apartamento_3.mostrar_informacoes();
    valor_total_apartamentos += apartamento_3.get_valor_imovel();
    comissao_total_apartamentos += apartamento_3.get_comissao();
    std::cout << endl;

    cobertura_1.mostrar_informacoes();
    valor_total_coberturas += cobertura_1.get_valor_imovel();
    comissao_total_coberturas += cobertura_1.get_comissao();
    std::cout << endl;

    cobertura_2.mostrar_informacoes();
    valor_total_coberturas += cobertura_2.get_valor_imovel();
    comissao_total_coberturas += cobertura_2.get_comissao();
    std::cout << endl;

    cobertura_3.mostrar_informacoes();
    valor_total_coberturas += cobertura_3.get_valor_imovel();
    comissao_total_coberturas += cobertura_3.get_comissao();
    std::cout << endl;

    casa_1.mostrar_informacoes();
    valor_total_casas += casa_1.get_valor_imovel();
    comissao_total_casas += casa_1.get_comissao();
    std::cout << endl;

    casa_2.mostrar_informacoes();
    valor_total_casas += casa_2.get_valor_imovel();
    comissao_total_casas += casa_2.get_comissao();
    std::cout << endl;

    std::cout
            << "\n>> Resumo Geral <<" << endl

            << "\n>>Apartamentos<<\n"
            << "\n Quantidade: " << quant_apartamentos
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valor_total_apartamentos
            << "\n Comissão Total: R$" << comissao_total_apartamentos
            << endl
            << "\n>>Coberturas<<\n"
            << "\n Quantidade: " << quant_coberturas
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valor_total_coberturas
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissao_total_coberturas
            << endl
            << "\n>>Casas<<\n"
            << "\n Quantidade: " << quant_casas
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valor_total_casas
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissao_total_casas
            << endl;
}
