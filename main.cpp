#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"
using namespace std; 

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

    int qtdeApartamentos = 0;
    int qtdeCasas = 0;
    int qtdeCoberturas = 0;

    Apartamento apartamento1;
    apartamento1.corretor = "Tuoruars";
    apartamento1.area = 55.4;
    apartamento1.quartos = 2;
    apartamento1.banheiros = 1;
    apartamento1.vagas = 0;
    apartamento1.valor_m2 = 987.0;
    apartamento1.ComissaoFinal = apartamento1.comissao();
    apartamento1.Valor = apartamento1.valor() + apartamento1.comissao();
    apartamento1.vendedor = cliente1;
    qtdeApartamentos++;

    Apartamento apartamento2;
    apartamento2.corretor = "Fyubyeis";
    apartamento2.area  = 74.5;
    apartamento2.quartos = 2;
    apartamento2.banheiros = 1;
    apartamento2.vagas = 2;
    apartamento2.valor_m2 = 1540.0;
    apartamento2.ComissaoFinal = apartamento2.comissao();
    apartamento2.Valor = apartamento2.valor() + apartamento2.comissao();
    apartamento2.vendedor = cliente2;
    qtdeApartamentos++;

    Apartamento apartamento3;
    apartamento3.corretor = "Kelia";
    apartamento3.area  = 87.2;
    apartamento3.quartos = 3;
    apartamento3.banheiros = 2;
    apartamento3.vagas = 2;
    apartamento3.valor_m2 = 2354.0;
    apartamento3.ComissaoFinal = apartamento3.comissao();
    apartamento3.Valor = apartamento3.valor() + apartamento3.comissao();
    apartamento3.vendedor = cliente3;
    qtdeApartamentos++;

    // Cobertura
    Cobertura cobertura1;
    cobertura1.corretor = "Koci";
    cobertura1.area  = 120.1;
    cobertura1.quartos = 3;
    cobertura1.banheiros = 3;
    cobertura1.vagas = 2;
    cobertura1.valor_m2 = 3123.5;
    cobertura1.ComissaoFinal = cobertura1.comissao();
    cobertura1.Valor = cobertura1.valor() + cobertura1.comissao();
    cobertura1.vendedor = cliente4;
    qtdeCoberturas++;
    
    Cobertura cobertura2;
    cobertura2.corretor = "Wail";
    cobertura2.area  = 134.8;
    cobertura2.quartos = 4;
    cobertura2.banheiros = 3;
    cobertura2.vagas = 3;
    cobertura2.valor_m2 = 3578.2;
    cobertura2.ComissaoFinal = cobertura2.comissao();
    cobertura2.Valor = cobertura2.valor() + cobertura2.comissao();
    cobertura2.vendedor = cliente5;
    qtdeCoberturas++;

    Cobertura cobertura3;
    cobertura3.corretor = "Fival";
    cobertura3.area = 180.0;
    cobertura3.quartos = 4;
    cobertura3.banheiros = 4;
    cobertura3.vagas = 4;
    cobertura3.valor_m2  = 4165.7;
    cobertura3.ComissaoFinal = cobertura3.comissao();
    cobertura3.Valor = cobertura3.valor() + cobertura3.comissao();
    cobertura3.vendedor = cliente6;
    qtdeCoberturas++;

    // Casas
    Casa casa1;
    casa1.corretor = "Beydo";
    casa1.area = 145.6;
    casa1.quartos = 3;
    casa1.banheiros = 3;
    casa1.vagas = 2;
    casa1.valor_m2 = 4023.6;
    casa1.comissaoFinal = casa1.comissao();
    casa1.Valor = casa1.valor() + casa1.comissao();
    casa1.vendedor = cliente7;
    qtdeCasas++;

    Casa casa2;
    casa2.corretor = "Riuzi";
    casa2.area = 245.0;
    casa2.quartos = 5;
    casa2.banheiros = 4;
    casa2.vagas = 4;
    casa2.valor_m2 = 4856.2;
    casa2.comissaoFinal = casa2.comissao();
    casa2.Valor = casa2.valor() + casa2.comissao();
    casa2.vendedor = cliente8;
    qtdeCasas++;

    cout << "\n>> Relatório de Imóveis <<" << endl;

    double valorApartamentos = 0.0;
    double valorCoberturas = 0.0;
    double valorCasas = 0.0;
    double comissApartamentos = 0.0;
    double comissCoberturas = 0.0;
    double comissCasas = 0.0;
    
    apartamento1.print();
    valorApartamentos += apartamento1.valor();
    comissApartamentos += apartamento1.comissao();
    cout << endl;

    apartamento2.print();
    valorApartamentos += apartamento2.valor();
    comissApartamentos += apartamento2.comissao();
    cout << endl;

    ap3.print();
    valorApartamentos += apartamento3.valor();
    comissApartamentos += apartamento3.comissao();
    cout << endl;

    cobertura1.print();
    valorCoberturas += cobertura1.valor();
    comissCoberturas += cobertura1.comissao();
    cout << endl;

    cobertura2.print();
    valorCoberturas += cobertura2.valor();
    comissCoberturas += cobertura2.comissao();
    cout << endl;

    cobertura3.print();
    valorCoberturas += cobertura3.valor();
    comissCoberturas += cobertura3.comissao();
    cout << endl;

    casa1.print();
    valorCasas += casa1.valor();
    comissCasas += casa1.comissao();
    cout << std::endl;

    casa2.print();
    valorCasas += casa2.valor();
    comissCasas += casa2.comissao();
    cout <<  endl;

   cout << "\n>> Resumo Geral <<" << endl;

           cout << "\n>>Apartamentos<<\n"
            << "\n Quantidade: " << qtdeApartamentos
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorApartamento
            << "\n Comissão Total: R$" << comissApartamento
            << endl
            << "\n>>Coberturas<<\n"
            << "\n Quantidade: " << qtdeCoberturas
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorCoberturas
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissCoberturas
            << endl
            << "\n>>Casas<<\n"
            << "\n Quantidade: " << qtdeCasas
            << "\n Valor Total: R$ " <<  fixed << setprecision(2) << valorCasas
            << "\n Comissão Total: R$ " <<  fixed << setprecision(2) << comissCasas
            << endl;
}
