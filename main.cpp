#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

int main() {
    
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

    int qtdeA = 0;
    int qtdeCa = 0;
    int qtdeCb = 0;

    Apartamento ap1;
    ap1.corretor = "Tuoruars";
    ap1.area = 55.4;
    ap1.numeroQuartos = 2;
    ap1.numeroBanheiros = 1;
    ap1.numeroVagas = 0;
    ap1.valorMetroQuadrado = 987.0;
    ap1.comissao = ap1.calcularComissao();
    ap1.valorVenda = ap1.calcularValorVenda();
    ap1.vendedor = cl1;
    qtdeA++;

    Apartamento ap2;
    ap2.corretor = "Fyubyeis";
    ap2.area = 74.5;
    ap2.numeroQuartos = 2;
    ap2.numeroBanheiros = 1;
    ap2.numeroVagas = 2;
    ap2.valorMetroQuadrado = 1540.0;
    ap2.comissao = ap2.calcularComissao();
    ap2.valorVenda = ap2.calcularValorVenda();
    ap2.vendedor = cl2;
    qtdeA++;

    Apartamento ap3;
    ap3.corretor = "Kelia";
    ap3.area = 87.2;
    ap3.numeroQuartos = 3;
    ap3.numeroBanheiros = 2;
    ap3.numeroVagas = 2;
    ap3.valorMetroQuadrado = 2354.0;
    ap3.comissao = ap3.calcularComissao();
    ap3.valorVenda = ap3.calcularValorVenda();
    ap3.vendedor = cl3;
    qtdeA++;

    // Cobertura
    Cobertura cb1;
    cb1.corretor = "Koci";
    cb1.area = 120.1;
    cb1.numeroQuartos = 3;
    cb1.numeroBanheiros = 3;
    cb1.numeroVagas = 2;
    cb1.valorMetroQuadrado = 3123.5;
    cb1.comissao = cb1.calcularComissao();
    cb1.valorVenda = cb1.calcularValorVenda();
    cb1.vendedor = cl4;
    qtdeCb++;
    
    Cobertura cb2;
    cb2.corretor = "Wail";
    cb2.area = 134.8;
    cb2.numeroQuartos = 4;
    cb2.numeroBanheiros = 3;
    cb2.numeroVagas = 3;
    cb2.valorMetroQuadrado = 3578.2;
    cb2.comissao = cb2.calcularComissao();
    cb2.valorVenda = cb2.calcularValorVenda();
    cb2.vendedor = cl5;
    qtdeCb++;

    Cobertura cb3;
    cb3.corretor = "Fival";
    cb3.area = 180.0;
    cb3.numeroQuartos = 4;
    cb3.numeroBanheiros = 4;
    cb3.numeroVagas = 4;
    cb3.valorMetroQuadrado = 4165.7;
    cb3.comissao = cb3.calcularComissao();
    cb3.valorVenda = cb3.calcularValorVenda();
    cb3.vendedor = cl6;
    qtdeCb++;

    // Casas
    Casa ca1;
    ca1.corretor = "Beydo";
    ca1.area = 145.6;
    ca1.numeroQuartos = 3;
    ca1.numeroBanheiros = 3;
    ca1.numeroVagas = 2;
    ca1.valorMetroQuadrado = 4023.6;
    ca1.comissao = ca1.calcularComissao();
    ca1.valorVenda = ca1.calcularValorVenda();
    ca1.vendedor = cl7;
    qtdeCa++;

    Casa ca2;
    ca2.corretor = "Riuzi";
    ca2.area = 245.0;
    ca2.numeroQuartos = 5;
    ca2.numeroBanheiros = 4;
    ca2.numeroVagas = 4;
    ca2.valorMetroQuadrado = 4856.2;
    ca2.comissao = ca2.calcularComissao();
    ca2.valorVenda = ca2.calcularValorVenda();
    ca2.vendedor = cl8;
    qtdeCa++;

    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    double valorAp = 0.0;
    double valorCb = 0.0;
    double valorCa = 0.0;
    double comissAp = 0.0;
    double comissCb = 0.0;
    double comissCa = 0.0;
    
    ap1.print();
    valorAp += ap1.calcularValorTotal();
    comissAp += ap1.calcularComissao();
    std::cout << endl;

    ap2.print();
    valorAp += ap2.calcularValorTotal();
    comissAp += ap2.calcularComissao();
    std::cout << endl;

    ap3.print();
    valorAp += ap3.calcularValorTotal();
    comissAp += ap3.calcularComissao();
    std::cout << endl;

    cb1.print();
    valorCb += cb1.calcularValorTotal();
    comissCb += cb1.calcularComissao();
    std::cout << endl;

    cb2.print();
    valorCb += cb2.calcularValorTotal();
    comissCb += cb2.calcularComissao();
    std::cout << endl;

    cb3.print();
    valorCb += cb3.calcularValorTotal();
    comissCb += cb3.calcularComissao();
    std::cout << endl;

    ca1.print();
    valorCa += ca1.calcularValorTotal();
    comissCa += ca1.calcularComissao();
    std::cout << endl;

    ca2.print();
    valorCa += ca2.calcularValorTotal();
    comissCa += ca2.calcularComissao();
    std::cout << endl;

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
