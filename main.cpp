#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

int main() {
    
    Cliente cliente1("Xayso Sovon Ziahaka", "Rua Xangrilá - Braúnas", 
                    "Belo Horizonte", "MG", "31365-570", "3196007958");
    
    Cliente cliente2("Minia Pasies Kituos", "Rua dos Jacobinos - Ouro Minas",
                    "Belo Horizonte", "MG", "31870-290", "3197627067");
    
    Cliente cliente3("Vuocue Leiur Baonauza", "Rua Orminda de Almeida - Tupi B", 
                    "Belo Horizonte", "MG", "31842-630", "3195949327");

    Cliente cliente4("Zerer Huduy Fyogar", "Rua Taquaril - Jonas Veiga", 
                    "Belo Horizonte", "MG", "30285-422", "3198596327");

    Cliente cliente5("Ceziel Mioti Pler", "Rua João Gualberto Costa - Serrano", 
                    "Belo Horizonte", "MG", "30882-747", "3196274465");

    Cliente cliente6("Esxo Cilal Zyais", "Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)", 
                    "Belo Horizonte", "MG", "31650-560", "3195004414");
    
    Cliente cliente7("Leova Wikyecil Neaca", "Rua João Arantes - Cidade Nova", 
                    "Belo Horizonte", "MG", "31170-240", "3198461192");
    
    Cliente cliente8("Teas Heimeu Pipe", "Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)", 
                    "Belo Horizonte", "MG", "30668-430", "3197317802");

    int quantidadeApartamentos = 0;
    int quantidadeCasas = 0;
    int quantidadeCoberturas = 0;

    Apartamento apartamento1(55.4, 2, 1, 0, 987.0, 0.0, 0.0, cliente1, "Tuoruars");
    // apartamento1.corretor = "Tuoruars";
    // apartamento1.area = 55.4;
    // apartamento1.quartos = 2;
    // apartamento1.banheiros = 1;
    // apartamento1.vagas = 0;
    // apartamento1.valorMetroQuadrado = 987.0;
    // apartamento1.comissao = apartamento1.calculaComissao();
    // apartamento1.valorVenda = apartamento1.calculaValorApartamento() + apartamento1.calculaComissao();
    // apartamento1.vendedor = cliente1;
    // quantidadeApartamentos++;

    Apartamento apartamento2;
    apartamento2.corretor = "Fyubyeis";
    apartamento2.area = 74.5;
    apartamento2.quartos = 2;
    apartamento2.banheiros = 1;
    apartamento2.vagas = 2;
    apartamento2.valorMetroQuadrado = 1540.0;
    apartamento2.comissao = apartamento2.calculaComissao();
    apartamento2.valorVenda = apartamento2.calculaValorApartamento() + apartamento2.calculaComissao();
    apartamento2.vendedor = cliente2;
    quantidadeApartamentos++;

    Apartamento apartamento3;
    apartamento3.corretor = "Kelia";
    apartamento3.area = 87.2;
    apartamento3.quartos = 3;
    apartamento3.banheiros = 2;
    apartamento3.vagas = 2;
    apartamento3.valorMetroQuadrado = 2354.0;
    apartamento3.comissao = apartamento3.calculaComissao();
    apartamento3.valorVenda = apartamento3.calculaValorApartamento() + apartamento3.calculaComissao();
    apartamento3.vendedor = cliente3;
    quantidadeApartamentos++;

    // Cobertura
    Cobertura cobertura1;
    cobertura1.corretor = "Koci";
    cobertura1.area = 120.1;
    cobertura1.quartos = 3;
    cobertura1.banheiros = 3;
    cobertura1.vagas = 2;
    cobertura1.valorMetroQuadrado = 3123.5;
    cobertura1.comissao = cobertura1.calculaComissao();
    cobertura1.valorVenda = cobertura1.calculaValorCobertura() + cobertura1.calculaComissao();
    cobertura1.vendedor = cliente4;
    quantidadeCoberturas++;
    
    Cobertura cobertura2;
    cobertura2.corretor = "Wail";
    cobertura2.area = 134.8;
    cobertura2.quartos = 4;
    cobertura2.banheiros = 3;
    cobertura2.vagas = 3;
    cobertura2.valorMetroQuadrado = 3578.2;
    cobertura2.comissao = cobertura2.calculaComissao();
    cobertura2.valorVenda = cobertura2.calculaValorCobertura() + cobertura2.calculaComissao();
    cobertura2.vendedor = cliente5;
    quantidadeCoberturas++;

    Cobertura cobertura3;
    cobertura3.corretor = "Fival";
    cobertura3.area = 180.0;
    cobertura3.quartos = 4;
    cobertura3.banheiros = 4;
    cobertura3.vagas = 4;
    cobertura3.valorMetroQuadrado = 4165.7;
    cobertura3.comissao = cobertura3.calculaComissao();
    cobertura3.valorVenda = cobertura3.calculaValorCobertura() + cobertura3.calculaComissao();
    cobertura3.vendedor = cliente6;
    quantidadeCoberturas++;

    // Casas
    Casa casa1;
    casa1.corretor = "Beydo";
    casa1.area = 145.6;
    casa1.quartos = 3;
    casa1.banheiros = 3;
    casa1.vagas = 2;
    casa1.valorMetroQuadrado = 4023.6;
    casa1.comissao = casa1.calculaComissao();
    casa1.valorVenda = casa1.calculaValorCasa() + casa1.calculaComissao();
    casa1.vendedor = cliente7;
    quantidadeCasas++;

    Casa casa2;
    casa2.corretor = "Riuzi";
    casa2.area = 245.0;
    casa2.quartos = 5;
    casa2.banheiros = 4;
    casa2.vagas = 4;
    casa2.valorMetroQuadrado = 4856.2;
    casa2.comissao = casa2.calculaComissao();
    casa2.valorVenda = casa2.calculaValorCasa() + casa2.calculaComissao();
    casa2.vendedor = cliente8;
    quantidadeCasas++;

    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    double valorApartamento = 0.0;
    double valorCobertura = 0.0;
    double valorCasa = 0.0;

    double comissaoApartamento = 0.0;
    double comissaoCobertura = 0.0;
    double comissaoCasa = 0.0;
    
    apartamento1.print();
    valorApartamento += apartamento1.calculaValorApartamento();
    comissaoApartamento += apartamento1.calculaComissao();
    std::cout << endl;

    apartamento2.print();
    valorApartamento += apartamento2.calculaValorApartamento();
    comissaoApartamento += apartamento2.calculaComissao();
    std::cout << endl;

    apartamento3.print();
    valorApartamento += apartamento3.calculaValorApartamento();
    comissaoApartamento += apartamento3.calculaComissao();
    std::cout << endl;

    cobertura1.print();
    valorCobertura += cobertura1.calculaValorCobertura();
    comissaoCobertura += cobertura1.calculaComissao();
    std::cout << endl;

    cobertura2.print();
    valorCobertura += cobertura2.calculaValorCobertura();
    comissaoCobertura += cobertura2.calculaComissao();
    std::cout << endl;

    cobertura3.print();
    valorCobertura += cobertura3.calculaValorCobertura();
    comissaoCobertura += cobertura3.calculaComissao();
    std::cout << endl;

    casa1.print();
    valorCasa += casa1.calculaValorCasa();
    comissaoCasa += casa1.calculaComissao();
    std::cout << endl;

    casa2.print();
    valorCasa += casa2.calculaValorCasa();
    comissaoCasa += casa2.calculaComissao();
    std::cout << endl;

    std::cout << "\n>> Resumo Geral <<" << endl;

    std::cout << "\n>>Apartamentos<<\n"
            << "\n Quantidade: " << quantidadeApartamentos
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorApartamento
            << "\n Comissão Total: R$" << comissaoApartamento
            << endl
            << "\n>>Coberturas<<\n"
            << "\n Quantidade: " << quantidadeCoberturas
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorCobertura
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissaoCobertura
            << endl
            << "\n>>Casas<<\n"
            << "\n Quantidade: " << quantidadeCasas
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorCasa
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissaoCasa
            << endl;
}
