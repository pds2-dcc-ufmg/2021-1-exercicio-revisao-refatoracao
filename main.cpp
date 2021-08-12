#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

#define valorincial 0.0;

int main() {
    
    // Clientes
    Cliente cl1;
    cl1.NOME = "Xayso Sovon Ziahaka";
    cl1.ENDERECO = "Rua Xangrilá - Braúnas";
    cl1.CIDADE = "Belo Horizonte";
    cl1.UF = "MG";
    cl1.CEP = "31365-570";
    cl1.TELEFONE = "3196007958";
    
    Cliente cl2;
    cl2.NOME = "Minia Pasies Kituos";
    cl2.ENDERECO = "Rua dos Jacobinos - Ouro Minas";
    cl2.CIDADE = "Belo Horizonte";
    cl2.UF = "MG";
    cl2.CEP = "31870-290";
    cl2.TELEFONE = "3197627067";
    
    Cliente cl3;
    cl3.NOME = "Vuocue Leiur Baonauza";
    cl3.ENDERECO = "Rua Orminda de Almeida - Tupi B";
    cl3.CIDADE = "Belo Horizonte";
    cl3.UF = "MG";
    cl3.CEP = "31842-630";
    cl3.TELEFONE = "3195949327";
    
    Cliente cl4;
    cl4.NOME = "Zerer Huduy Fyogar";
    cl4.ENDERECO = "Rua Taquaril - Jonas Veiga";
    cl4.CIDADE = "Belo Horizonte";
    cl4.UF = "MG";
    cl4.CEP = "30285-422";
    cl4.TELEFONE = "3198596327";
    
    Cliente cl5;
    cl5.NOME = "Ceziel Mioti Pler";
    cl5.ENDERECO = "Rua João Gualberto Costa - Serrano";
    cl5.CIDADE = "Belo Horizonte";
    cl5.UF = "MG";
    cl5.CEP = "30882-747";
    cl5.TELEFONE = "3196274465";
    
    Cliente cl6;
    cl6.NOME = "Esxo Cilal Zyais";
    cl6.ENDERECO = "Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)";
    cl6.CIDADE = "Belo Horizonte";
    cl6.UF = "MG";
    cl6.CEP = "31650-560";
    cl6.TELEFONE = "3195004414";
    
    Cliente cl7;
    cl7.NOME = "Leova Wikyecil Neaca";
    cl7.ENDERECO = "Rua João Arantes - Cidade Nova";
    cl7.CIDADE = "Belo Horizonte";
    cl7.UF = "MG";
    cl7.CEP = "31170-240";
    cl7.TELEFONE = "3198461192";
    
    Cliente cl8;
    cl8.NOME = "Teas Heimeu Pipe";
    cl8.ENDERECO = "Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)";
    cl8.CIDADE = "Belo Horizonte";
    cl8.UF = "MG";
    cl8.CEP = "30668-430";
    cl8.TELEFONE = "3197317802";

    int qtdeA = 0;
    int qtdeCa = 0;
    int qtdeCb = 0;

    // Apartamentos
    Apartamento ap1;
    ap1.corretor = "Tuoruars";
    ap1.AREA = 55.4;
    ap1.QUARTOS = 2;
    ap1.BANHEIROS = 1;
    ap1.VAGAS = 0;
    ap1.VALORm2 = 987.0;
    ap1.C = ap1.comissao();
    ap1.Valor = ap1.valor() + ap1.comissao();
    ap1.vendedor = cl1;
    qtdeA++;

    Apartamento ap2;
    ap2.corretor = "Fyubyeis";
    ap2.AREA = 74.5;
    ap2.QUARTOS = 2;
    ap2.BANHEIROS = 1;
    ap2.VAGAS = 2;
    ap2.VALORm2 = 1540.0;
    ap2.C = ap2.comissao();
    ap2.Valor = ap2.valor() + ap2.comissao();
    ap2.vendedor = cl2;
    qtdeA++;

    Apartamento ap3;
    ap3.corretor = "Kelia";
    ap3.AREA = 87.2;
    ap3.QUARTOS = 3;
    ap3.BANHEIROS = 2;
    ap3.VAGAS = 2;
    ap3.VALORm2 = 2354.0;
    ap3.C = ap3.comissao();
    ap3.Valor = ap3.valor() + ap3.comissao();
    ap3.vendedor = cl3;
    qtdeA++;

    // Coberturas
    Cobertura cb1;
    cb1.corretor = "Koci";
    cb1.AREA = 120.1;
    cb1.QUARTOS = 3;
    cb1.BANHEIROS = 3;
    cb1.VAGAS = 2;
    cb1.VALORm2 = 3123.5;
    cb1.C = cb1.comissao();
    cb1.Valor = cb1.valor() + cb1.comissao();
    cb1.vendedor = cl4;
    qtdeCb++;
    
    Cobertura cb2;
    cb2.corretor = "Wail";
    cb2.AREA = 134.8;
    cb2.QUARTOS = 4;
    cb2.BANHEIROS = 3;
    cb2.VAGAS = 3;
    cb2.VALORm2 = 3578.2;
    cb2.C = cb2.comissao();
    cb2.Valor = cb2.valor() + cb2.comissao();
    cb2.vendedor = cl5;
    qtdeCb++;

    Cobertura cb3;
    cb3.corretor = "Fival";
    cb3.AREA = 180.0;
    cb3.QUARTOS = 4;
    cb3.BANHEIROS = 4;
    cb3.VAGAS = 4;
    cb3.VALORm2 = 4165.7;
    cb3.C = cb3.comissao();
    cb3.Valor = cb3.valor() + cb3.comissao();
    cb3.vendedor = cl6;
    qtdeCb++;

    // Casas
    Casa ca1;
    ca1.corretor = "Beydo";
    ca1.AREA = 145.6;
    ca1.QUARTOS = 3;
    ca1.BANHEIROS = 3;
    ca1.VAGAS = 2;
    ca1.VALORm2 = 4023.6;
    ca1.C = ca1.comissao();
    ca1.Valor = ca1.valor() + ca1.comissao();
    ca1.vendedor = cl7;
    qtdeCa++;

    Casa ca2;
    ca2.corretor = "Riuzi";
    ca2.AREA = 245.0;
    ca2.QUARTOS = 5;
    ca2.BANHEIROS = 4;
    ca2.VAGAS = 4;
    ca2.VALORm2 = 4856.2;
    ca2.C = ca2.comissao();
    ca2.Valor = ca2.valor() + ca2.comissao();
    ca2.vendedor = cl8;
    qtdeCa++;
    
    // Relatorio dos Imoveis
    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    double valorAp = valorincial;
    double valorCb = valorincial;
    double valorCa = valorincial;
    double comissAp = valorincial;
    double comissCb = valorincial;
    double comissCa = valorincial;
    
    ap1.print();
    valorAp += ap1.valor();
    comissAp += ap1.comissao();
    std::cout << endl;

    ap2.print();
    valorAp += ap2.valor();
    comissAp += ap2.comissao();
    std::cout << endl;

    ap3.print();
    valorAp += ap3.valor();
    comissAp += ap3.comissao();
    std::cout << endl;

    cb1.print();
    valorCb += cb1.valor();
    comissCb += cb1.comissao();
    std::cout << endl;

    cb2.print();
    valorCb += cb2.valor();
    comissCb += cb2.comissao();
    std::cout << endl;

    cb3.print();
    valorCb += cb3.valor();
    comissCb += cb3.comissao();
    std::cout << endl;

    ca1.print();
    valorCa += ca1.valor();
    comissCa += ca1.comissao();
    std::cout << endl;

    ca2.print();
    valorCa += ca2.valor();
    comissCa += ca2.comissao();
    std::cout << endl;

    // Resumo Geral do portifolio
    std::cout << "\n>> Resumo Geral <<" << endl;

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
