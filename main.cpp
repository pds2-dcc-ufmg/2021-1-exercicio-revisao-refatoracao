#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

int main() {
    
    Pessoa p1;
    p1.nome = "Xayso Sovon Ziahaka";
    p1.endereco = "Rua Xangrilá - Braúnas";
    p1.cidade = "Belo Horizonte";
    p1.uf = "MG";
    p1.cep = "31365-570";
    p1.telefone = "3196007958";
    
    Pessoa p2;
    p2.nome = "Minia Pasies Kituos";
    p2.endereco = "Rua dos Jacobinos - Ouro Minas";
    p2.cidade = "Belo Horizonte";
    p2.uf = "MG";
    p2.cep = "31870-290";
    p2.telefone = "3197627067";
    
    Pessoa p3;
    p3.nome = "Vuocue Leiur Baonauza";
    p3.endereco = "Rua Orminda de Almeida - Tupi B";
    p3.cidade = "Belo Horizonte";
    p3.uf = "MG";
    p3.cep = "31842-630";
    p3.telefone = "3195949327";
    
    Pessoa p4;
    p4.nome = "Zerer Huduy Fyogar";
    p4.endereco = "Rua Taquaril - Jonas Veiga";
    p4.cidade = "Belo Horizonte";
    p4.uf = "MG";
    p4.cep = "30285-422";
    p4.telefone = "3198596327";
    
    Pessoa p5;
    p5.nome = "Ceziel Mioti Pler";
    p5.endereco = "Rua João Gualberto Costa - Serrano";
    p5.cidade = "Belo Horizonte";
    p5.uf = "MG";
    p5.cep = "30882-747";
    p5.telefone = "3196274465";
    
    Pessoa p6;
    p6.nome = "Esxo Cilal Zyais";
    p6.endereco = "Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)";
    p6.cidade = "Belo Horizonte";
    p6.uf = "MG";
    p6.cep = "31650-560";
    p6.telefone = "3195004414";
    
    Pessoa p7;
    p7.nome = "Leova Wikyecil Neaca";
    p7.endereco = "Rua João Arantes - Cidade Nova";
    p7.cidade = "Belo Horizonte";
    p7.uf = "MG";
    p7.cep = "31170-240";
    p7.telefone = "3198461192";
    
    Pessoa p8;
    p8.nome = "Teas Heimeu Pipe";
    p8.endereco = "Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)";
    p8.cidade = "Belo Horizonte";
    p8.uf = "MG";
    p8.cep = "30668-430";
    p8.telefone = "3197317802";

    int qtdeA = 0;
    int qtdeCa = 0;
    int qtdeCb = 0;

    Apartamento ap1;
    ap1.corretor = "Tuoruars";
    ap1.area = 55.4;
    ap1.quartos = 2;
    ap1.banheiros = 1;
    ap1.vagas = 0;
    ap1.VALORm2 = 987.0;
    ap1.taxa_comissao = ap1.comissao();
    ap1.Valor = ap1.valor() + ap1.comissao();
    ap1.vendedor = p1;
    qtdeA++;

    Apartamento ap2;
    ap2.corretor = "Fyubyeis";
    ap2.area = 74.5;
    ap2.quartos = 2;
    ap2.banheiros = 1;
    ap2.vagas = 2;
    ap2.VALORm2 = 1540.0;
    ap2.taxa_comissao = ap2.comissao();
    ap2.Valor = ap2.valor() + ap2.comissao();
    ap2.vendedor = p2;
    qtdeA++;

    Apartamento ap3;
    ap3.corretor = "Kelia";
    ap3.area = 87.2;
    ap3.quartos = 3;
    ap3.banheiros = 2;
    ap3.vagas = 2;
    ap3.VALORm2 = 2354.0;
    ap3.taxa_comissao = ap3.comissao();
    ap3.Valor = ap3.valor() + ap3.comissao();
    ap3.vendedor = p3;
    qtdeA++;

    Cobertura cb1;
    cb1.corretor = "Koci";
    cb1.area = 120.1;
    cb1.quartos = 3;
    cb1.banheiros = 3;
    cb1.vagas = 2;
    cb1.VALORm2 = 3123.5;
    cb1.taxa_comissao = cb1.comissao();
    cb1.Valor = cb1.valor() + cb1.comissao();
    cb1.vendedor = p4;
    qtdeCb++;
    
    Cobertura cb2;
    cb2.corretor = "Wail";
    cb2.area = 134.8;
    cb2.quartos = 4;
    cb2.banheiros = 3;
    cb2.vagas = 3;
    cb2.VALORm2 = 3578.2;
    cb2.taxa_comissao = cb2.comissao();
    cb2.Valor = cb2.valor() + cb2.comissao();
    cb2.vendedor = p5;
    qtdeCb++;

    Cobertura cb3;
    cb3.corretor = "Fival";
    cb3.area = 180.0;
    cb3.quartos = 4;
    cb3.banheiros = 4;
    cb3.vagas = 4;
    cb3.VALORm2 = 4165.7;
    cb3.taxa_comissao = cb3.comissao();
    cb3.Valor = cb3.valor() + cb3.comissao();
    cb3.vendedor = p6;
    qtdeCb++;

    Casa ca1;
    ca1.corretor = "Beydo";
    ca1.area = 145.6;
    ca1.quartos = 3;
    ca1.banheiros = 3;
    ca1.vagas = 2;
    ca1.VALORm2 = 4023.6;
    ca1.taxa_comissao = ca1.comissao();
    ca1.Valor = ca1.valor() + ca1.comissao();
    ca1.vendedor = p7;
    qtdeCa++;

    Casa ca2;
    ca2.corretor = "Riuzi";
    ca2.area = 245.0;
    ca2.quartos = 5;
    ca2.banheiros = 4;
    ca2.vagas = 4;
    ca2.VALORm2 = 4856.2;
    ca2.taxa_comissao = ca2.comissao();
    ca2.Valor = ca2.valor() + ca2.comissao();
    ca2.vendedor = p8;
    qtdeCa++;

    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    double valorAp = 0.0;
    double valorCb = 0.0;
    double valorCa = 0.0;
    double comissAp = 0.0;
    double comissCb = 0.0;
    double comissCa = 0.0;
    
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
