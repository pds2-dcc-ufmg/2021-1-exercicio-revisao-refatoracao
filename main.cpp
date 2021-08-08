#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

int main() {
    // Cadastro do cliente 1
    Cliente cl1;
    cl1.NOME = "Xayso Sovon Ziahaka";
    cl1.endereco = "Rua Xangrilá - Braúnas";
    cl1.CIDADE = "Belo Horizonte";
    cl1.UF = "MG";
    cl1.cep = "31365-570";
    cl1.telefone = "3196007958";
    // Cadastro do cliente 2
    Cliente cl2;
    cl2.NOME = "Minia Pasies Kituos";
    cl2.endereco = "Rua dos Jacobinos - Ouro Minas";
    cl2.CIDADE = "Belo Horizonte";
    cl2.UF = "MG";
    cl2.cep = "31870-290";
    cl2.telefone = "3197627067";
    // Cadastro do cliente 3
    Cliente cl3;
    cl3.NOME = "Vuocue Leiur Baonauza";
    cl3.endereco = "Rua Orminda de Almeida - Tupi B";
    cl3.CIDADE = "Belo Horizonte";
    cl3.UF = "MG";
    cl3.cep = "31842-630";
    cl3.telefone = "3195949327";
    // Cadastro do cliente 4
    Cliente cl4;
    cl4.NOME = "Zerer Huduy Fyogar";
    cl4.endereco = "Rua Taquaril - Jonas Veiga";
    cl4.CIDADE = "Belo Horizonte";
    cl4.UF = "MG";
    cl4.cep = "30285-422";
    cl4.telefone = "3198596327";
    // Cadastro do cliente 5
    Cliente cl5;
    cl5.NOME = "Ceziel Mioti Pler";
    cl5.endereco = "Rua João Gualberto Costa - Serrano";
    cl5.CIDADE = "Belo Horizonte";
    cl5.UF = "MG";
    cl5.cep = "30882-747";
    cl5.telefone = "3196274465";
    // Cadastro do cliente 6
    Cliente cl6;
    cl6.NOME = "Esxo Cilal Zyais";
    cl6.endereco = "Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)";
    cl6.CIDADE = "Belo Horizonte";
    cl6.UF = "MG";
    cl6.cep = "31650-560";
    cl6.telefone = "3195004414";
    // Cadastro do cliente 7
    Cliente cl7;
    cl7.NOME = "Leova Wikyecil Neaca";
    cl7.endereco = "Rua João Arantes - Cidade Nova";
    cl7.CIDADE = "Belo Horizonte";
    cl7.UF = "MG";
    cl7.cep = "31170-240";
    cl7.telefone = "3198461192";
    // Cadastro do cliente 8
    Cliente cl8;
    cl8.NOME = "Teas Heimeu Pipe";
    cl8.endereco = "Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)";
    cl8.CIDADE = "Belo Horizonte";
    cl8.UF = "MG";
    cl8.cep = "30668-430";
    cl8.telefone = "3197317802";
    // Quantidade de Apartamentos, Casas e Coberturas
    int qtdeA = 0;
    int qtdeCa = 0;
    int qtdeCb = 0;
    // Cadastro do apartamento 1
    Apartamento ap1;
    ap1.corretor = "Tuoruars";
    ap1.AREA = 55.4;
    ap1.Q = 2;
    ap1.B = 1;
    ap1.V = 0;
    ap1.VALORm2 = 987.0;
    ap1.C = ap1.comissao();
    ap1.Valor = ap1.valor() + ap1.comissao();
    ap1.vendedor = cl1;
    qtdeA++;
    // Cadastro do apartamento 2
    Apartamento ap2;
    ap2.corretor = "Fyubyeis";
    ap2.AREA = 74.5;
    ap2.Q = 2;
    ap2.B = 1;
    ap2.V = 2;
    ap2.VALORm2 = 1540.0;
    ap2.C = ap2.comissao();
    ap2.Valor = ap2.valor() + ap2.comissao();
    ap2.vendedor = cl2;
    qtdeA++;
    // Cadastro do apartamento 3
    Apartamento ap3;
    ap3.corretor = "Kelia";
    ap3.AREA = 87.2;
    ap3.Q = 3;
    ap3.B = 2;
    ap3.V = 2;
    ap3.VALORm2 = 2354.0;
    ap3.C = ap3.comissao();
    ap3.Valor = ap3.valor() + ap3.comissao();
    ap3.vendedor = cl3;
    qtdeA++;
    // Cadastro da cobertura 1
    // Cobertura
    Cobertura cb1;
    cb1.corretor = "Koci";
    cb1.AREA = 120.1;
    cb1.Q = 3;
    cb1.B = 3;
    cb1.V = 2;
    cb1.VALORm2 = 3123.5;
    cb1.C = cb1.comissao();
    cb1.Valor = cb1.valor() + cb1.comissao();
    cb1.vendedor = cl4;
    qtdeCb++;
    // Cadastro da cobertura 2
    Cobertura cb2;
    cb2.corretor = "Wail";
    cb2.AREA = 134.8;
    cb2.Q = 4;
    cb2.B = 3;
    cb2.V = 3;
    cb2.VALORm2 = 3578.2;
    cb2.C = cb2.comissao();
    cb2.Valor = cb2.valor() + cb2.comissao();
    cb2.vendedor = cl5;
    qtdeCb++;
    // Cadastro da cobertura 3
    Cobertura cb3;
    cb3.corretor = "Fival";
    cb3.AREA = 180.0;
    cb3.Q = 4;
    cb3.B = 4;
    cb3.V = 4;
    cb3.VALORm2 = 4165.7;
    cb3.C = cb3.comissao();
    cb3.Valor = cb3.valor() + cb3.comissao();
    cb3.vendedor = cl6;
    qtdeCb++;
    // Cadastro da casa 1
    // Casas
    Casa ca1;
    ca1.corretor = "Beydo";
    ca1.AREA = 145.6;
    ca1.Q = 3;
    ca1.B = 3;
    ca1.V = 2;
    ca1.VALORm2 = 4023.6;
    ca1.C = ca1.comissao();
    ca1.Valor = ca1.valor() + ca1.comissao();
    ca1.vendedor = cl7;
    qtdeCa++;
    // Cadastro da casa 2
    Casa ca2;
    ca2.corretor = "Riuzi";
    ca2.AREA = 245.0;
    ca2.Q = 5;
    ca2.B = 4;
    ca2.V = 4;
    ca2.VALORm2 = 4856.2;
    ca2.C = ca2.comissao();
    ca2.Valor = ca2.valor() + ca2.comissao();
    ca2.vendedor = cl8;
    qtdeCa++;
    // Relatório
    std::cout << "\n>> Relatório de Imóveis <<" << endl;
    // Valores e comissões
    double valorAp = 0.0;
    double valorCb = 0.0;
    double valorCa = 0.0;
    double comissAp = 0.0;
    double comissCb = 0.0;
    double comissCa = 0.0;
    // Obtenção de valores e comissões do apartamento 1
    ap1.print();
    valorAp += ap1.valor();
    comissAp += ap1.comissao();
    std::cout << endl;
    // Obtenção de valores e comissões do apartamento 2
    ap2.print();
    valorAp += ap2.valor();
    comissAp += ap2.comissao();
    std::cout << endl;
    // Obtenção de valores e comissões do apartamento 3
    ap3.print();
    valorAp += ap3.valor();
    comissAp += ap3.comissao();
    std::cout << endl;
    // Obtenção de valores e comissões da cobertura 1
    cb1.print();
    valorCb += cb1.valor();
    comissCb += cb1.comissao();
    std::cout << endl;
    // Obtenção de valores e comissões da cobertura 2
    cb2.print();
    valorCb += cb2.valor();
    comissCb += cb2.comissao();
    std::cout << endl;
    // Obtenção de valores e comissões da cobertura 3
    cb3.print();
    valorCb += cb3.valor();
    comissCb += cb3.comissao();
    std::cout << endl;
    // Obtenção de valores e comissões da casa 1
    ca1.print();
    valorCa += ca1.valor();
    comissCa += ca1.comissao();
    std::cout << endl;
    // Obtenção de valores e comissões da casa 2
    ca2.print();
    valorCa += ca2.valor();
    comissCa += ca2.comissao();
    std::cout << endl;
    // Resumo
    std::cout << "\n>> Resumo Geral <<" << endl;
    // Resumo de apartamentos, coberturas e casas
    std::cout << "\n>>Apartamentos<<\n"
            << "\n Quantidade: " << qtdeA
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorAp
            << "\n Comissão Total: R$" << comissAp
            << endl
            << "\n>>Coberturas<<\n"
            << "\n Quantidade: " << qtdeCb
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorCb
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissCb
            << endl
            << "\n>>Casas<<\n"
            << "\n Quantidade: " << qtdeCa
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorCa
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissCa
            << endl;
}
