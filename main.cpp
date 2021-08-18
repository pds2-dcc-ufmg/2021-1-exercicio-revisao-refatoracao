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

    int qntAps = 0;
    int qntCasas = 0;
    int qntCoberturas = 0;

    Apartamento ap1;
    ap1.corretor = "Tuoruars";
    ap1.area = 55.4;
    ap1.quartos = 2;
    ap1.banheiros = 1;
    ap1.vagas = 0;
    ap1.valorM2 = 987.0;
    ap1.valorComissao = ap1.comissao();
    ap1.valorVenda = ap1.valor() + ap1.comissao();
    ap1.vendedor = cl1;
    qntAps++;

    Apartamento ap2;
    ap2.corretor = "Fyubyeis";
    ap2.area = 74.5;
    ap2.quartos = 2;
    ap2.banheiros = 1;
    ap2.vagas = 2;
    ap2.valorM2 = 1540.0;
    ap2.valorComissao = ap2.comissao();
    ap2.valorVenda = ap2.valor() + ap2.comissao();
    ap2.vendedor = cl2;
    qntAps++;

    Apartamento ap3;
    ap3.corretor = "Kelia";
    ap3.area = 87.2;
    ap3.quartos = 3;
    ap3.banheiros = 2;
    ap3.vagas = 2;
    ap3.valorM2 = 2354.0;
    ap3.valorComissao = ap3.comissao();
    ap3.valorVenda = ap3.valor() + ap3.comissao();
    ap3.vendedor = cl3;
    qntAps++;

    // Cobertura
    Cobertura cb1;
    cb1.corretor = "Koci";
    cb1.area = 120.1;
    cb1.quartos = 3;
    cb1.banheiros = 3;
    cb1.vagas = 2;
    cb1.valorM2 = 3123.5;
    cb1.valorComissao = cb1.comissao();
    cb1.valorVenda = cb1.valor() + cb1.comissao();
    cb1.vendedor = cl4;
    qntCoberturas++;
    
    Cobertura cb2;
    cb2.corretor = "Wail";
    cb2.area = 134.8;
    cb2.quartos = 4;
    cb2.banheiros = 3;
    cb2.vagas = 3;
    cb2.valorM2 = 3578.2;
    cb2.valorComissao = cb2.comissao();
    cb2.valorVenda = cb2.valor() + cb2.comissao();
    cb2.vendedor = cl5;
    qntCoberturas++;

    Cobertura cb3;
    cb3.corretor = "Fival";
    cb3.area = 180.0;
    cb3.quartos = 4;
    cb3.banheiros = 4;
    cb3.vagas = 4;
    cb3.valorM2 = 4165.7;
    cb3.valorComissao = cb3.comissao();
    cb3.valorVenda = cb3.valor() + cb3.comissao();
    cb3.vendedor = cl6;
    qntCoberturas++;

    // Casas
    Casa ca1;
    ca1.corretor = "Beydo";
    ca1.area = 145.6;
    ca1.quartos = 3;
    ca1.banheiros = 3;
    ca1.vagas = 2;
    ca1.valorM2 = 4023.6;
    ca1.valorComissao = ca1.comissao();
    ca1.valorVenda = ca1.valor() + ca1.comissao();
    ca1.vendedor = cl7;
    qntCasas++;

    Casa ca2;
    ca2.corretor = "Riuzi";
    ca2.area = 245.0;
    ca2.quartos = 5;
    ca2.banheiros = 4;
    ca2.vagas = 4;
    ca2.valorM2 = 4856.2;
    ca2.valorComissao = ca2.comissao();
    ca2.valorVenda = ca2.valor() + ca2.comissao();
    ca2.vendedor = cl8;
    qntCasas++;

    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    double totalValorAp = 0.0;
    double totalValorCobertura = 0.0;
    double totalValorCasa = 0.0;
    double totalComissaoAp = 0.0;
    double totalComissaoCobertura = 0.0;
    double totalComissaoCasa = 0.0;
    
    ap1.print();
    totalValorAp += ap1.valor();
    totalComissaoAp += ap1.comissao();
    std::cout << endl;

    ap2.print();
    totalValorAp += ap2.valor();
    totalComissaoAp += ap2.comissao();
    std::cout << endl;

    ap3.print();
    totalValorAp += ap3.valor();
    totalComissaoAp += ap3.comissao();
    std::cout << endl;

    cb1.print();
    totalValorCobertura += cb1.valor();
    totalComissaoCobertura += cb1.comissao();
    std::cout << endl;

    cb2.print();
    totalValorCobertura += cb2.valor();
    totalComissaoCobertura += cb2.comissao();
    std::cout << endl;

    cb3.print();
    totalValorCobertura += cb3.valor();
    totalComissaoCobertura += cb3.comissao();
    std::cout << endl;

    ca1.print();
    totalValorCasa += ca1.valor();
    totalComissaoCasa += ca1.comissao();
    std::cout << endl;

    ca2.print();
    totalValorCasa += ca2.valor();
    totalComissaoCasa += ca2.comissao();
    std::cout << endl;

    std::cout << "\n>> Resumo Geral <<" << endl;

    std::cout << "\n>>Apartamentos<<\n"
            << "\n Quantidade: " << qntAps
            << "\n Valor Total: R$ " << fixed << setprecision(2) << totalValorAp
            << "\n Comissão Total: R$" << totalComissaoAp
            << endl
            << "\n>>Coberturas<<\n"
            << "\n Quantidade: " << qntCoberturas
            << "\n Valor Total: R$ " << fixed << setprecision(2) << totalValorCobertura
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << totalComissaoCobertura
            << endl
            << "\n>>Casas<<\n"
            << "\n Quantidade: " << qntCasas
            << "\n Valor Total: R$ " << fixed << setprecision(2) << totalValorCasa
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << totalComissaoCasa
            << endl;
}
