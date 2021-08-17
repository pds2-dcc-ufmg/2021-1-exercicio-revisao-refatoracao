#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

int main() {
    
    Cliente cliente1;
    cliente1.nome = "Xayso Sovon Ziahaka";
    cliente1.endereco = "Rua Xangrilá - Braúnas";
    cliente1.cidade = "Belo Horizonte";
    cliente1.uf = "MG";
    cliente1.cep = "31365-570";
    cliente1.telefone = "3196007958";
    
    Cliente cliente2;
    cliente2.nome = "Minia Pasies Kituos";
    cliente2.endereco = "Rua dos Jacobinos - Ouro Minas";
    cliente2.cidade = "Belo Horizonte";
    cliente2.uf = "MG";
    cliente2.cep = "31870-290";
    cliente2.telefone = "3197627067";
    
    Cliente cliente3;
    cliente3.nome = "Vuocue Leiur Baonauza";
    cliente3.endereco = "Rua Orminda de Almeida - Tupi B";
    cliente3.cidade = "Belo Horizonte";
    cliente3.uf = "MG";
    cliente3.cep = "31842-630";
    cliente3.telefone = "3195949327";
    
    Cliente cliente4;
    cliente4.nome = "Zerer Huduy Fyogar";
    cliente4.endereco = "Rua Taquaril - Jonas Veiga";
    cliente4.cidade = "Belo Horizonte";
    cliente4.uf = "MG";
    cliente4.cep = "30285-422";
    cliente4.telefone = "3198596327";
    
    Cliente cliente5;
    cliente5.nome = "Ceziel Mioti Pler";
    cliente5.endereco = "Rua João Gualberto Costa - Serrano";
    cliente5.cidade = "Belo Horizonte";
    cliente5.uf = "MG";
    cliente5.cep = "30882-747";
    cliente5.telefone = "3196274465";
    
    Cliente cliente6;
    cliente6.nome = "Esxo Cilal Zyais";
    cliente6.endereco = "Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)";
    cliente6.cidade = "Belo Horizonte";
    cliente6.uf = "MG";
    cliente6.cep = "31650-560";
    cliente6.telefone = "3195004414";
    
    Cliente cliente7;
    cliente7.nome = "Leova Wikyecil Neaca";
    cliente7.endereco = "Rua João Arantes - Cidade Nova";
    cliente7.cidade = "Belo Horizonte";
    cliente7.uf = "MG";
    cliente7.cep = "31170-240";
    cliente7.telefone = "3198461192";
    
    Cliente cliente8;
    cliente8.nome = "Teas Heimeu Pipe";
    cliente8.endereco = "Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)";
    cliente8.cidade = "Belo Horizonte";
    cliente8.uf = "MG";
    cliente8.cep = "30668-430";
    cliente8.telefone = "3197317802";

    int qtdeA = 0;
    int qtdeCa = 0;
    int qtdeCb = 0;

    Apartamento apartamento1;
    apartamento1.corretor = "Tuoruars";
    apartamento1.AREA = 55.4;
    apartamento1.Q = 2;
    apartamento1.B = 1;
    apartamento1.V = 0;
    apartamento1.VALORm2 = 987.0;
    apartamento1.C = ap1.comissao();
    apartamento1.Valor = ap1.valor() + ap1.comissao();
    apartamento1.vendedor = cl1;
    qtdeA++;

    Apartamento apartamento2;
    apartamento2.corretor = "Fyubyeis";
    apartamento2.AREA = 74.5;
    apartamento2.Q = 2;
    apartamento2.B = 1;
    apartamento2.V = 2;
    apartamento2.VALORm2 = 1540.0;
    apartamento2.C = ap2.comissao();
    apartamento2.Valor = ap2.valor() + ap2.comissao();
    apartamento2.vendedor = cl2;
    qtdeA++;

    Apartamento apartamento3;
    apartamento3.corretor = "Kelia";
    apartamento3.AREA = 87.2;
    apartamento3.Q = 3;
    apartamento3.B = 2;
    apartamento3.V = 2;
    apartamento3.VALORm2 = 2354.0;
    apartamento3.C = ap3.comissao();
    apartamento3.Valor = ap3.valor() + ap3.comissao();
    apartamento3.vendedor = cl3;
    qtdeA++;

    // Cobertura
    Cobertura cobertura1;
    cobertura1.corretor = "Koci";
    cobertura1.AREA = 120.1;
    cobertura1.Q = 3;
    cobertura1.B = 3;
    cobertura1.V = 2;
    cobertura1.VALORm2 = 3123.5;
    cobertura1.C = cobertura1.comissao();
    cobertura1.Valor = cobertura1.valor() + cobertura1.comissao();
    cobertura1.vendedor = cl4;
    qtdeCb++;
    
    Cobertura cobertura2;
    cobertura2.corretor = "Wail";
    cobertura2.AREA = 134.8;
    cobertura2.Q = 4;
    cobertura2.B = 3;
    cobertura2.V = 3;
    cobertura2.VALORm2 = 3578.2;
    cobertura2.C = cobertura2.comissao();
    cobertura2.Valor = cobertura2.valor() + cobertura2.comissao();
    cobertura2.vendedor = cl5;
    qtdeCb++;

    Cobertura cobertura3;
    cobertura3.corretor = "Fival";
    cobertura3.AREA = 180.0;
    cobertura3.Q = 4;
    cobertura3.B = 4;
    cobertura3.V = 4;
    cobertura3.VALORm2 = 4165.7;
    cobertura3.C = cobertura3.comissao();
    cobertura3.Valor = cobertura3.valor() + cobertura3.comissao();
    cobertura3.vendedor = cl6;
    qtdeCb++;

    // Casas
    Casa casa1;
    casa1.corretor = "Beydo";
    casa1.AREA = 145.6;
    casa1.Q = 3;
    casa1.B = 3;
    casa1.V = 2;
    casa1.VALORm2 = 4023.6;
    casa1.C = casa1.comissao();
    casa1.Valor = casa1.valor() + casa1.comissao();
    casa1.vendedor = cl7;
    qtdeCa++;

    Casa casa2;
    casa2.corretor = "Riuzi";
    casa2.AREA = 245.0;
    casa2.Q = 5;
    casa2.B = 4;
    casa2.V = 4;
    casa2.VALORm2 = 4856.2;
    casa2.C = casa2.comissao();
    casa2.Valor = casa2.valor() + casa2.comissao();
    casa2.vendedor = cl8;
    qtdeCa++;

    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    double valorAp = 0.0;
    double valorCb = 0.0;
    double valorCa = 0.0;
    double comissAp = 0.0;
    double comissCb = 0.0;
    double comissCa = 0.0;
    
    apartamento1.print();
    valorAp += apartamento1.valor();
    comissAp += apartamento1.comissao();
    std::cout << endl;

    apartamento2.print();
    valorAp += apartamento2.valor();
    comissAp += apartamento2.comissao();
    std::cout << endl;

    ap3.print();
    valorAp += apartamento3.valor();
    comissAp += apartamento3.comissao();
    std::cout << endl;

    cobertura1.print();
    valorCb += cobertura1.valor();
    comissCb += cobertura1.comissao();
    std::cout << endl;

    cobertura2.print();
    valorCb += cobertura2.valor();
    comissCb += cobertura2.comissao();
    std::cout << endl;

    cobertura3.print();
    valorCb += cobertura3.valor();
    comissCb += cobertura3.comissao();
    std::cout << endl;

    casa1.print();
    valorCa += casa1.valor();
    comissCa += casa1.comissao();
    std::cout << endl;

    casa2.print();
    valorCa += casa2.valor();
    comissCa += casa2.comissao();
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
