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

    int qtdeA = 0;
    int qtdeCa = 0;
    int qtdeCb = 0;

    Apartamento ap1;
    ap1.corretor = "Tuoruars";
    ap1.Area = 55.4;
    ap1.Quartos = 2;
    ap1.Banheiros = 1;
    ap1.Vagas = 0;
    ap1.Valor_do_m2 = 987.0;
    ap1.taxa = 0.04;
    ap1.Comissao = ap1.getComissaoApartamento();
    ap1.valorVenda= ap1.getValor() + ap1.Comissao;
    ap1.vendedor = cl1;
    qtdeA++;

    Apartamento ap2;
    ap2.corretor = "Fyubyeis";
    ap2.Area = 74.5;
    ap2.Quartos = 2;
    ap2.Banheiros = 1;
    ap2.Vagas = 2;
    ap2.Valor_do_m2 = 1540.0;
    ap2.taxa = 0.04;
    ap2.Comissao = ap2.getComissaoApartamento();
    ap2.valorVenda = ap2.getValor() + ap2.Comissao;
    ap2.vendedor = cl2;
    qtdeA++;

    Apartamento ap3;
    ap3.corretor = "Kelia";
    ap3.Area = 87.2;
    ap3.Quartos = 3;
    ap3.Banheiros = 2;
    ap3.Vagas = 2;
    ap3.Valor_do_m2 = 2354.0;
    ap3.taxa = 0.04;
    ap3.Comissao = ap3.getComissaoApartamento();
    ap3.valorVenda = ap3.getValor() + ap3.Comissao;
    ap3.vendedor = cl3;
    qtdeA++;

    // Cobertura
    Cobertura cb1;
    cb1.corretor = "Koci";
    cb1.Area = 120.1;
    cb1.Quartos = 3;
    cb1.Banheiros = 3;
    cb1.Vagas = 2;
    cb1.Valor_do_m2 = 3123.5;
    cb1.taxa = 0.10;
    cb1.Comissao = cb1.getComissaoCobertura();
    cb1.valorVenda = cb1.getvalor() + cb1.Comissao;
    cb1.vendedor = cl4;
    qtdeCb++;
    
    Cobertura cb2;
    cb2.corretor = "Wail";
    cb2.Area = 134.8;
    cb2.Quartos = 4;
    cb2.Banheiros = 3;
    cb2.Vagas = 3;
    cb2.Valor_do_m2 = 3578.2;
    cb2.taxa = 0.10;
    cb2.Comissao = cb2.getComissaoCobertura();
    cb2.valorVenda = cb2.getvalor() + cb2.Comissao;
    cb2.vendedor = cl5;
    qtdeCb++;

    Cobertura cb3;
    cb3.corretor = "Fival";
    cb3.Area = 180.0;
    cb3.Quartos = 4;
    cb3.Banheiros = 4;
    cb3.Vagas = 4;
    cb3.Valor_do_m2 = 4165.7;
    cb3.taxa = 0.10;
    cb3.Comissao = cb3.getComissaoCobertura();
    cb3.valorVenda = cb3.getvalor() + cb3.Comissao;
    cb3.vendedor = cl6;
    qtdeCb++;

    // Casas
    Casa ca1;
    ca1.corretor = "Beydo";
    ca1.Area = 145.6;
    ca1.Quartos = 3;
    ca1.Banheiros = 3;
    ca1.Vagas = 2;
    ca1.Valor_do_m2 = 4023.6;
    ca1.taxa = 0.06;
    ca1.Comissao = ca1.getComissaoCasa();
    ca1.valorVenda = ca1.getvalor() + ca1.Comissao;
    ca1.vendedor = cl7;
    qtdeCa++;

    Casa ca2;
    ca2.corretor = "Riuzi";
    ca2.AREA = 245.0;
    ca2.Quartos = 5;
    ca2.Banheiros = 4;
    ca2.Vagas = 4;
    ca2.Valor_do_m2 = 4856.2;
    ca2.taxa = 0.06;
    ca2.Comissao = ca2.getComissaoCasa();
    ca2.valorVenda = ca2.getvalor() + ca2.Comissao;
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
    valorAp += ap1.getvalor();
    comissAp += ap1.getComissaoApartamento();
    std::cout << endl;

    ap2.print();
    valorAp += ap2.getvalor();
    comissAp += ap2.getComissaoApartamento();
    std::cout << endl;

    ap3.print();
    valorAp += ap3.getvalor();
    comissAp += ap3.getComissaoApartamento();
    std::cout << endl;

    cb1.print();
    valorCb += cb1.getvalor();
    comissCb += cb1.getComissaoCobertura();
    std::cout << endl;

    cb2.print();
    valorCb += cb2.getvalor();
    comissCb += cb2.getComissaoCobertura();
    std::cout << endl;

    cb3.print();
    valorCb += cb3.getvalor();
    comissCb += cb3.getComissaoCobertura();
    std::cout << endl;

    ca1.print();
    valorCa += ca1.getvalor();
    comissCa += ca1.getComissaoCasa();
    std::cout << endl;

    ca2.print();
    valorCa += ca2.getvalor();
    comissCa += ca2.getComissaoCasa();
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
