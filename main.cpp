#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

int main() {
    
    //Lista de clientes
    Cliente cl1;
    cl1.nome = "Xayso Sovon Ziahaka";
    cl1.endereco = "Rua Xangrilá - Braúnas";
    cl1.cidade = "Belo Horizonte";
    cl1.uf = "MG";
    cl1.cep = "31365-570";
    cl1.telefone = "3196007958";
    
    Cliente cl2;
    cl2.nome = "Minia Pasies Kituos";
    cl2.endereco = "Rua dos Jacobinos - Ouro Minas";
    cl2.cidade = "Belo Horizonte";
    cl2.uf = "MG";
    cl2.cep = "31870-290";
    cl2.telefone = "3197627067";
    
    Cliente cl3;
    cl3.nome = "Vuocue Leiur Baonauza";
    cl3.endereco = "Rua Orminda de Almeida - Tupi B";
    cl3.cidade = "Belo Horizonte";
    cl3.uf = "MG";
    cl3.cep = "31842-630";
    cl3.telefone = "3195949327";
    
    Cliente cl4;
    cl4.nome = "Zerer Huduy Fyogar";
    cl4.endereco = "Rua Taquaril - Jonas Veiga";
    cl4.cidade = "Belo Horizonte";
    cl4.uf = "MG";
    cl4.cep = "30285-422";
    cl4.telefone = "3198596327";
    
    Cliente cl5;
    cl5.nome = "Ceziel Mioti Pler";
    cl5.endereco = "Rua João Gualberto Costa - Serrano";
    cl5.cidade = "Belo Horizonte";
    cl5.uf = "MG";
    cl5.cep = "30882-747";
    cl5.telefone = "3196274465";
    
    Cliente cl6;
    cl6.nome = "Esxo Cilal Zyais";
    cl6.endereco = "Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)";
    cl6.cidade = "Belo Horizonte";
    cl6.uf = "MG";
    cl6.cep = "31650-560";
    cl6.telefone = "3195004414";
    
    Cliente cl7;
    cl7.nome = "Leova Wikyecil Neaca";
    cl7.endereco = "Rua João Arantes - Cidade Nova";
    cl7.cidade = "Belo Horizonte";
    cl7.uf = "MG";
    cl7.cep = "31170-240";
    cl7.telefone = "3198461192";
    
    Cliente cl8;
    cl8.nome = "Teas Heimeu Pipe";
    cl8.endereco = "Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)";
    cl8.cidade = "Belo Horizonte";
    cl8.uf = "MG";
    cl8.cep = "30668-430";
    cl8.telefone = "3197317802";

    //Contador para a quatidade de casas,apartamentos e coberturas
    unsigned int quantidade_apartamentos = 0;
    unsigned int quantidade_casas = 0;
    unsigned int quantidade_coberturas = 0;
    
    // Apartamento
    Apartamento ap1;
    ap1.corretor = "Tuoruars";
    ap1.area = 55.4;
    ap1.qtd_quartos = 2;
    ap1.qtd_banheiros = 1;
    ap1.qtd_vagas = 0;
    ap1.valor_m2 = 987.0;
    ap1.comissao_valor = ap1.comissao();
    ap1.valor = ap1.valor() + ap1.comissao();
    ap1.vendedor = cl1;
    quantidade_apartamentos++;

    Apartamento ap2;
    ap2.corretor = "Fyubyeis";
    ap2.area = 74.5;
    ap2.qtd_quartos = 2;
    ap2.qtd_banheiros = 1;
    ap2.qtd_vagas = 2;
    ap2.valor_m2 = 1540.0;
    ap2.comissao_valor = ap2.comissao();
    ap2.valor = ap2.valor() + ap2.comissao();
    ap2.vendedor = cl2;
    quantidade_apartamentos++;

    Apartamento ap3;
    ap3.corretor = "Kelia";
    ap3.area = 87.2;
    ap3.qtd_quartos = 3;
    ap3.qtd_banheiros = 2;
    ap3.qtd_vagas = 2;
    ap3.valor_m2 = 2354.0;
    ap3.comissao_valor = ap3.comissao();
    ap3.valor = ap3.valor() + ap3.comissao();
    ap3.vendedor = cl3;
    quantidade_apartamentos++;

    // Cobertura
    Cobertura cb1;
    cb1.corretor = "Koci";
    cb1.area = 120.1;
    cb1.qtd_quartos = 3;
    cb1.qtd_banheiros = 3;
    cb1.qtd_vagas = 2;
    cb1.valor_m2 = 3123.5;
    cb1.comissao_valor = cb1.comissao();
    cb1.valor = cb1.valor() + cb1.comissao();
    cb1.vendedor = cl4;
    quantidade_coberturas++;
    
    Cobertura cb2;
    cb2.corretor = "Wail";
    cb2.area = 134.8;
    cb2.qtd_quartos = 4;
    cb2.qtd_banheiros = 3;
    cb2.qtd_vagas = 3;
    cb2.valor_m2 = 3578.2;
    cb2.comissao_valor = cb2.comissao();
    cb2.valor = cb2.valor() + cb2.comissao();
    cb2.vendedor = cl5;
    quantidade_coberturas++;

    Cobertura cb3;
    cb3.corretor = "Fival";
    cb3.area = 180.0;
    cb3.qtd_quartos = 4;
    cb3.qtd_banheiros = 4;
    cb3.qtd_vagas = 4;
    cb3.valor_m2 = 4165.7;
    cb3.comissao_valor = cb3.comissao();
    cb3.valor = cb3.valor() + cb3.comissao();
    cb3.vendedor = cl6;
    quantidade_coberturas++;

    // Casas
    Casa ca1;
    ca1.corretor = "Beydo";
    ca1.area = 145.6;
    ca1.qtd_quartos = 3;
    ca1.qtd_banheiros = 3;
    ca1.qtd_vagas = 2;
    ca1.valor_m2 = 4023.6;
    ca1.comissao_valor = ca1.comissao();
    ca1.valor = ca1.valor() + ca1.comissao();
    ca1.vendedor = cl7;
    quantidade_casas++;

    Casa ca2;
    ca2.corretor = "Riuzi";
    ca2.area = 245.0;
    ca2.qtd_quartos = 5;
    ca2.qtd_banheiros = 4;
    ca2.qtd_vagas = 4;
    ca2.valor_m2 = 4856.2;
    ca2.comissao_valor = ca2.comissao();
    ca2.valor = ca2.valor() + ca2.comissao();
    ca2.vendedor = cl8;
    quantidade_casas++;

    // Relatorio geral dos imoveis 
    std::cout << "\n>> Relatório de Imóveis <<" << endl;
    
    //Soma total dos valores de cada tipo de imovel 
    double valor_total_apartamentos = 0.0;
    double valor_total_coberturas = 0.0;
    double valor_total_casas = 0.0;
    
    //Soma total das comissões de cada tipo de imovel 
    double comissao_total_apartamentos = 0.0;
    double comissao_total_coberturas = 0.0;
    double comissao_total_casas = 0.0;
    
    ap1.print();
    valor_total_apartamentos += ap1.valor();
    comissao_total_apartamentos += ap1.comissao();
    std::cout << endl;

    ap2.print();
    valor_total_apartamentos += ap2.valor();
    comissao_total_apartamentos += ap2.comissao();
    std::cout << endl;

    ap3.print();
    valor_total_apartamentos += ap3.valor();
    comissao_total_apartamentos += ap3.comissao();
    std::cout << endl;


    cb1.print();
    valor_total_coberturas += cb1.valor();
    comissao_total_coberturas += cb1.comissao();
    std::cout << endl;

    cb2.print();
    valor_total_coberturas += cb2.valor();
    comissao_total_coberturas += cb2.comissao();
    std::cout << endl;

    cb3.print();
    valor_total_coberturas += cb3.valor();
    comissao_total_coberturas += cb3.comissao();
    std::cout << endl;

     ca1.print();
    valor_total_casas += ca1.valor();
    comissao_total_casas += ca1.comissao();
    std::cout << endl;

    ca2.print();
    valor_total_casas += ca2.valor();
    comissao_total_casas += ca2.comissao();
    std::cout << endl;

//Resumo final
    std::cout << "\n>> Resumo Geral <<" << endl;

     std::cout << "\n>>Apartamentos<<\n"
            << "\n Quantidade: " << quantidade_apartamentos
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valor_total_apartamentos
            << "\n Comissão Total: R$" << comissao_total_apartamentos
            << endl
            << "\n>>Coberturas<<\n"
            << "\n Quantidade: " << quantidade_coberturas
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valor_total_coberturas
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissao_total_coberturas
            << endl
            << "\n>>Casas<<\n"
            << "\n Quantidade: " << quantidade_casas
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valor_total_casas
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissao_total_casas
            << endl;
}
