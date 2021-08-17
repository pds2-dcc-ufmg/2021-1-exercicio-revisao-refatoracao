#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

int main() {
    
    Cliente cl1;
    cl1.NOME = "Xayso Sovon Ziahaka";
    cl1.endereco = "Rua Xangrilá - Braúnas";
    cl1.CIDADE = "Belo Horizonte";
    cl1.UF = "MG";
    cl1.cep = "31365-570";
    cl1.telefone = "3196007958";
    
    Cliente cl2;
    cl2.NOME = "Minia Pasies Kituos";
    cl2.endereco = "Rua dos Jacobinos - Ouro Minas";
    cl2.CIDADE = "Belo Horizonte";
    cl2.UF = "MG";
    cl2.cep = "31870-290";
    cl2.telefone = "3197627067";
    
    Cliente cl3;
    cl3.NOME = "Vuocue Leiur Baonauza";
    cl3.endereco = "Rua Orminda de Almeida - Tupi B";
    cl3.CIDADE = "Belo Horizonte";
    cl3.UF = "MG";
    cl3.cep = "31842-630";
    cl3.telefone = "3195949327";
    
    Cliente cl4;
    cl4.NOME = "Zerer Huduy Fyogar";
    cl4.endereco = "Rua Taquaril - Jonas Veiga";
    cl4.CIDADE = "Belo Horizonte";
    cl4.UF = "MG";
    cl4.cep = "30285-422";
    cl4.telefone = "3198596327";
    
    Cliente cl5;
    cl5.NOME = "Ceziel Mioti Pler";
    cl5.endereco = "Rua João Gualberto Costa - Serrano";
    cl5.CIDADE = "Belo Horizonte";
    cl5.UF = "MG";
    cl5.cep = "30882-747";
    cl5.telefone = "3196274465";
    
    Cliente cl6;
    cl6.NOME = "Esxo Cilal Zyais";
    cl6.endereco = "Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)";
    cl6.CIDADE = "Belo Horizonte";
    cl6.UF = "MG";
    cl6.cep = "31650-560";
    cl6.telefone = "3195004414";
    
    Cliente cl7;
    cl7.NOME = "Leova Wikyecil Neaca";
    cl7.endereco = "Rua João Arantes - Cidade Nova";
    cl7.CIDADE = "Belo Horizonte";
    cl7.UF = "MG";
    cl7.cep = "31170-240";
    cl7.telefone = "3198461192";
    
    Cliente cl8;
    cl8.NOME = "Teas Heimeu Pipe";
    cl8.endereco = "Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)";
    cl8.CIDADE = "Belo Horizonte";
    cl8.UF = "MG";
    cl8.cep = "30668-430";
    cl8.telefone = "3197317802";

    int qtdeApartamentos = 0;
    int qtdeCasas = 0;
    int qtdeCoberturas = 0;

    Apartamento ap1;
    ap1.corretor = "Tuoruars";
    ap1.AREA = 55.4;
    ap1.Quartos = 2;
    ap1.Banheiros = 1;
    ap1.Vagas = 0;
    ap1.VALORm2 = 987.0;
    ap1.Comissao = ap1.comissao();
    ap1.Valor = ap1.ValorFinal();
    ap1.vendedor = cl1;
    qtdeApartamentos++;

    Apartamento ap2;
    ap2.corretor = "Fyubyeis";
    ap2.AREA = 74.5;
    ap2.Quartos = 2;
    ap2.Banheiros = 1;
    ap2.Vagas = 2;
    ap2.VALORm2 = 1540.0;
    ap2.Comissao = ap2.comissao();
    ap2.Valor = ap2.ValorFinal();
    ap2.vendedor = cl2;
    qtdeApartamentos++;

    Apartamento ap3;
    ap3.corretor = "Kelia";
    ap3.AREA = 87.2;
    ap3.Quartos = 3;
    ap3.Banheiros = 2;
    ap3.Vagas = 2;
    ap3.VALORm2 = 2354.0;
    ap3.Comissao = ap3.comissao();
    ap3.Valor = ap3.ValorFinal();
    ap3.vendedor = cl3;
    qtdeApartamentos++;

    // Cobertura
    Cobertura cb1;
    cb1.corretor = "Koci";
    cb1.AREA = 120.1;
    cb1.Quartos = 3;
    cb1.Banheiros = 3;
    cb1.Vagas = 2;
    cb1.VALORm2 = 3123.5;
    cb1.Comissao = cb1.comissao();
    cb1.Valor = cb1.ValorFinal();
    cb1.vendedor = cl4;
    qtdeCoberturas++;
    
    Cobertura cb2;
    cb2.corretor = "Wail";
    cb2.AREA = 134.8;
    cb2.Quartos = 4;
    cb2.Banheiros = 3;
    cb2.Vagas = 3;
    cb2.VALORm2 = 3578.2;
    cb2.Comissao = cb2.comissao();
    cb2.Valor = cb2.ValorFinal();
    cb2.vendedor = cl5;
    qtdeCoberturas++;

    Cobertura cb3;
    cb3.corretor = "Fival";
    cb3.AREA = 180.0;
    cb3.Quartos = 4;
    cb3.Banheiros = 4;
    cb3.Vagas = 4;
    cb3.VALORm2 = 4165.7;
    cb3.Comissao = cb3.comissao();
    cb3.Valor = cb3.ValorFinal();
    cb3.vendedor = cl6;
    qtdeCoberturas++;

    // Casas
    Casa ca1;
    ca1.corretor = "Beydo";
    ca1.AREA = 145.6;
    ca1.Quartos = 3;
    ca1.Banheiros = 3;
    ca1.Vagas = 2;
    ca1.VALORm2 = 4023.6;
    ca1.Comissao = ca1.comissao();
    ca1.Valor = ca1.ValorFinal();
    ca1.vendedor = cl7;
    qtdeCasas++;

    Casa ca2;
    ca2.corretor = "Riuzi";
    ca2.AREA = 245.0;
    ca2.Quartos = 5;
    ca2.Banheiros = 4;
    ca2.Vagas = 4;
    ca2.VALORm2 = 4856.2;
    ca2.Comissao = ca2.comissao();
    ca2.Valor = ca2.ValorFinal();
    ca2.vendedor = cl8;
    qtdeCasas++;

    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    double valorApartamento = 0.0;
    double valorCobertura = 0.0;
    double valorCasa = 0.0;
    double comissaoApartamento = 0.0;
    double comissaoCobertura = 0.0;
    double comissaoCasa = 0.0;
    
    ap1.print();
    valorApartamento += ap1.valor();
    comissaoApartamento += ap1.comissao();
    std::cout << endl;

    ap2.print();
    valorApartamento += ap2.valor();
    comissaoApartamento += ap2.comissao();
    std::cout << endl;

    ap3.print();
    valorApartamento += ap3.valor();
    comissaoApartamento += ap3.comissao();
    std::cout << endl;

    cb1.print();
    valorCobertura += cb1.valor();
    comissaoCobertura += cb1.comissao();
    std::cout << endl;

    cb2.print();
    valorCobertura += cb2.valor();
    comissaoCobertura += cb2.comissao();
    std::cout << endl;

    cb3.print();
    valorCobertura += cb3.valor();
    comissaoCobertura += cb3.comissao();
    std::cout << endl;

    ca1.print();
    valorCasa += ca1.valor();
    comissaoCasa += ca1.comissao();
    std::cout << endl;

    ca2.print();
    valorCasa += ca2.valor();
    comissaoCasa += ca2.comissao();
    std::cout << endl;

    std::cout << "\n>> Resumo Geral <<" << endl;

    std::cout << "\n>>Apartamentos<<\n"
            << "\n Quantidade: " << qtdeApartamentos
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorApartamento
            << "\n Comissão Total: R$" << comissaoApartamento
            << endl
            << "\n>>Coberturas<<\n"
            << "\n Quantidade: " << qtdeCoberturas
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorCobertura
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissaoCobertura
            << endl
            << "\n>>Casas<<\n"
            << "\n Quantidade: " << qtdeCasas
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorCasa
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissaoCasa
            << endl;
}
