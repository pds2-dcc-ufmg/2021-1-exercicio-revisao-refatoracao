#include <iostream>
#include <iomanip>
#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

using namespace std;

int main() 
{
    Cliente cliente1("Xayso Sovon Ziahaka", "Rua Xangrilá - Braúnas", "Belo Horizonte", "MG", "31365-570", "3196007958");
    Cliente cliente2("Minia Pasies Kituos", "Rua dos Jacobinos - Ouro Minas", "Belo Horizonte", "MG", "31870-290", "3197627067");
    Cliente cliente3("Vuocue Leiur Baonauza", "Rua Orminda de Almeida - Tupi B", "Belo Horizonte", "MG", "31842-630", "3195949327");
    Cliente cliente4("Zerer Huduy Fyogar", "Rua Taquaril - Jonas Veiga", "Belo Horizonte", "MG", "30285-422", "3198596327");
    Cliente cliente5("Ceziel Mioti Pler", "Rua João Gualberto Costa - Serrano", "Belo Horizonte", "MG", "30882-747", "3196274465");
    Cliente cliente6("Esxo Cilal Zyais", "Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)", "Belo Horizonte", "MG", "31650-560", "3195004414");
    Cliente cliente7("Leova Wikyecil Neaca", "Rua João Arantes - Cidade Nova", "Belo Horizonte", "MG", "31170-240", "3198461192");
    Cliente cliente8("Teas Heimeu Pipe", "Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)", "Belo Horizonte", "MG", "30668-430", "3197317802");

    int quantidade_de_apartamentos = 0;
    int quantidade_de_casas = 0;
    int quantidade_de_coberturas = 0;

    // Apartamentos

    Apartamento apartamento1(55.4, 2, 1, 0, 987.0, cliente1, "Tuoruars");
    quantidade_de_apartamentos++;

    Apartamento apartamento2(74.5, 2, 1, 2, 1540.0, cliente2, "Fyubyeis");
    quantidade_de_apartamentos++;

    Apartamento apartamento3(87.2, 3, 2, 2, 2354.0, cliente3, "Kelia");
    quantidade_de_apartamentos++;

    // Coberturas

    Cobertura cobertura1(120.1, 3, 3, 2, 3123.5, cliente4, "Koci");
    quantidade_de_coberturas++;
    
    Cobertura cobertura2(134.8, 4, 3, 3, 3578.2, cliente5, "Wail");
    quantidade_de_coberturas++;

    Cobertura cobertura3(180.0, 4, 4, 4, 4165.7, cliente6, "Fival");
    quantidade_de_coberturas++;

    // Casas

    Casa casa1(145.6, 3, 3, 2, 4023.6, cliente7, "Beydo");
    quantidade_de_casas++;

    Casa casa2(245.0, 5, 4, 4, 4856.2, cliente8, "Riuzi");
    quantidade_de_casas++;

    cout << "\n>> Relatório de Imóveis <<" << endl;

    double valor_apartamento = 0.0;
    double valor_cobertura = 0.0;
    double valor_casa = 0.0;
    double comissao_apartamento = 0.0;
    double comissao_cobertura = 0.0;
    double comissao_casa = 0.0;
    
    apartamento1.print();
    valor_apartamento += apartamento1.valor() - apartamento1.comissao();
    comissao_apartamento += apartamento1.comissao();
    cout << endl;

    apartamento2.print();
    valor_apartamento += apartamento2.valor() - apartamento2.comissao();
    comissao_apartamento += apartamento2.comissao();
    cout << endl;

    apartamento3.print();
    valor_apartamento += apartamento3.valor() - apartamento3.comissao();
    comissao_apartamento += apartamento3.comissao();
    cout << endl;

    cobertura1.print();
    valor_cobertura += cobertura1.valor() - cobertura1.comissao();
    comissao_cobertura += cobertura1.comissao();
    cout << endl;

    cobertura2.print();
    valor_cobertura += cobertura2.valor() - cobertura2.comissao();
    comissao_cobertura += cobertura2.comissao();
    cout << endl;

    cobertura3.print();
    valor_cobertura += cobertura3.valor() - cobertura3.comissao();
    comissao_cobertura += cobertura3.comissao();
    cout << endl;

    casa1.print();
    valor_casa += casa1.valor() - casa1.comissao();
    comissao_casa += casa1.comissao();
    cout << endl;

    casa2.print();
    valor_casa += casa2.valor() - casa2.comissao();
    comissao_casa += casa2.comissao();
    cout << endl;

    cout << "\n>> Resumo Geral <<" << endl;

    cout << "\n>>Apartamentos<<\n"
            << "\n Quantidade: " << quantidade_de_apartamentos
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valor_apartamento
            << "\n Comissão Total: R$" << comissao_apartamento
            << endl
            << "\n>>Coberturas<<\n"
            << "\n Quantidade: " << quantidade_de_coberturas
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valor_cobertura
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissao_cobertura
            << endl
            << "\n>>Casas<<\n"
            << "\n Quantidade: " << quantidade_de_casas
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valor_casa
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissao_casa
            << endl;
}