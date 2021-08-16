#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

int main() {
    
    //Clientes:
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

    //Apartamentos:

    Apartamento apartamento1(55.4, 2, 1, 0, 987.0, cliente1, "Tuoruars");
    quantidadeApartamentos++;

    Apartamento apartamento2(74.5, 2, 1, 2, 1540.0, cliente2, "Fyubyeis");
    quantidadeApartamentos++;

    Apartamento apartamento3(87.2, 3, 2, 2, 2354.0, cliente3, "Kelia");
    quantidadeApartamentos++;

    // Coberturas:
    Cobertura cobertura1(120.1, 3, 3, 2, 3123.5, cliente4, "Koci");
    quantidadeCoberturas++;
    
    Cobertura cobertura2(134.8, 4, 3, 3, 3578.2, cliente5, "Wail");
    quantidadeCoberturas++;

    Cobertura cobertura3(180.0, 4, 4, 4, 4165.7, cliente6, "Fival");
    quantidadeCoberturas++;

    // Casas
    Casa casa1(145.6, 3, 3, 2, 4023.6, cliente7, "Beydo");
    quantidadeCasas++;

    Casa casa2(245.0, 5, 4, 4, 4856.2, cliente8, "Riuzi");
    quantidadeCasas++;

    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    double valorApartamento = 0.0;
    double valorCobertura = 0.0;
    double valorCasa = 0.0;

    double comissaoApartamento = 0.0;
    double comissaoCobertura = 0.0;
    double comissaoCasa = 0.0;
    
    apartamento1.print();
    valorApartamento += apartamento1.calculaValorImovel();
    comissaoApartamento += apartamento1.calculaComissao();
    std::cout << endl;

    apartamento2.print();
    valorApartamento += apartamento2.calculaValorImovel();
    comissaoApartamento += apartamento2.calculaComissao();
    std::cout << endl;

    apartamento3.print();
    valorApartamento += apartamento3.calculaValorImovel();
    comissaoApartamento += apartamento3.calculaComissao();
    std::cout << endl;

    cobertura1.print();
    valorCobertura += cobertura1.calculaValorImovel();
    comissaoCobertura += cobertura1.calculaComissao();
    std::cout << endl;

    cobertura2.print();
    valorCobertura += cobertura2.calculaValorImovel();
    comissaoCobertura += cobertura2.calculaComissao();
    std::cout << endl;

    cobertura3.print();
    valorCobertura += cobertura3.calculaValorImovel();
    comissaoCobertura += cobertura3.calculaComissao();
    std::cout << endl;

    casa1.print();
    valorCasa += casa1.calculaValorImovel();
    comissaoCasa += casa1.calculaComissao();
    std::cout << endl;

    casa2.print();
    valorCasa += casa2.calculaValorImovel();
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
