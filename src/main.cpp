#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

int main() {
    Cliente cl1("Xayso Sovon Ziahaka", 
                "Rua Xangrilá - Braúnas",
                "Belo Horizonte",
                "MG",
                "31365-570",
                "3196007958");
    
    Cliente cl2("Minia Pasies Kituos", 
                "Rua dos Jacobinos - Ouro Minas",
                "Belo Horizonte",
                "MG",
                "31870-290",
                "3197627067");
    
    Cliente cl3("Vuocue Leiur Baonauza", 
                "Rua Orminda de Almeida - Tupi B",
                "Belo Horizonte",
                "MG",
                "31842-630",
                "3195949327");
    
    Cliente cl4("Zerer Huduy Fyogar", 
                "Rua Taquaril - Jonas Veiga",
                "Belo Horizonte",
                "MG",
                "30285-422",
                "3198596327");
    
    Cliente cl5("Ceziel Mioti Pler", 
                "Rua João Gualberto Costa - Serrano",
                "Belo Horizonte",
                "MG",
                "30882-747",
                "3196274465");
    
    Cliente cl6("Esxo Cilal Zyais", 
                "Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)",
                "Belo Horizonte",
                "MG",
                "31650-560",
                "3195004414");
    
    Cliente cl7("Leova Wikyecil Neaca", 
                "Rua João Arantes - Cidade Nova",
                "Belo Horizonte",
                "MG",
                "31170-240",
                "3198461192");
    
    Cliente cl8("Teas Heimeu Pipe", 
                "Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)",
                "Belo Horizonte",
                "MG",
                "30668-430",
                "3197317802");

    int numApartamentos = 0;
    int numCasas = 0;
    int numCoberturas = 0;

    //Apartamentos
    Apartamento ap1(55.4,
                    2,
                    1,
                    0,
                    987.0,
                    cl1,
                    "Tuoruars");
    numApartamentos++;
    
    Apartamento ap2(74.5,
                    2,
                    1,
                    2,
                    1540.0,
                    cl2,
                    "Fyubyeis");
    numApartamentos++;

    Apartamento ap3(87.2,
                    3,
                    2,
                    2,
                    2354.0,
                    cl3,
                    "Kelia");
    numApartamentos++;

    //Coberturas
    Cobertura cb1(120.1,
                  3,
                  3,
                  2,
                  3123.5,
                  cl4,
                  "Koci");
    numCoberturas++;
    
    Cobertura cb2(134.8,
                  4,
                  3,
                  3,
                  3578.2,
                  cl5,
                  "Wail");
    numCoberturas++;

    Cobertura cb3(180.0,
                  4,
                  4,
                  4,
                  4165.7,
                  cl6,
                  "Fival");
    numCoberturas++;

    //Casas
    Casa ca1(145.6,
             3,
             3,
             2,
             4023.6,
             cl7,
             "Beydo");
    numCasas++;

    Casa ca2(245.0,
             5,
             4,
             4,
             4856.2,
             cl8,
             "Riuzi");
    numCasas++;

    std::cout << "\n>> Relatório de Imóveis <<" << std::endl;

    double valorTotalApartamentos = 0.0;
    double valorTotalCoberturas = 0.0;
    double valorTotalCasas = 0.0;
    double comissaoTotalApartamentos = 0.0;
    double comissaoTotalCoberturas = 0.0;
    double comissaoTotalCasas = 0.0;
    
    ap1.imprimeInformacoes();
    valorTotalApartamentos += ap1.calculaValor();
    comissaoTotalApartamentos += ap1.calculaComissao();
    std::cout << std::endl;

    ap2.imprimeInformacoes();
    valorTotalApartamentos += ap2.calculaValor();
    comissaoTotalApartamentos += ap2.calculaComissao();
    std::cout << std::endl;

    ap3.imprimeInformacoes();
    valorTotalApartamentos += ap3.calculaValor();
    comissaoTotalApartamentos += ap3.calculaComissao();
    std::cout << std::endl;

    cb1.imprimeInformacoes();
    valorTotalCoberturas += cb1.calculaValor();
    comissaoTotalCoberturas += cb1.calculaComissao();
    std::cout << std::endl;

    cb2.imprimeInformacoes();
    valorTotalCoberturas += cb2.calculaValor();
    comissaoTotalCoberturas += cb2.calculaComissao();
    std::cout << std::endl;

    cb3.imprimeInformacoes();
    valorTotalCoberturas += cb3.calculaValor();
    comissaoTotalCoberturas += cb3.calculaComissao();
    std::cout << std::endl;

    ca1.imprimeInformacoes();
    valorTotalCasas += ca1.calculaValor();
    comissaoTotalCasas += ca1.calculaComissao();
    std::cout << std::endl;

    ca2.imprimeInformacoes();
    valorTotalCasas += ca2.calculaValor();
    comissaoTotalCasas += ca2.calculaComissao();
    std::cout << std::endl;

    std::cout << "\n>> Resumo Geral <<" << std::endl;

    imprimeResumo("Apartamentos", numApartamentos, valorTotalApartamentos, comissaoTotalApartamentos);
    imprimeResumo("Coberturas", numCoberturas, valorTotalCoberturas, comissaoTotalCoberturas);
    imprimeResumo("Casas", numCasas, valorTotalCasas, comissaoTotalCasas);
}
