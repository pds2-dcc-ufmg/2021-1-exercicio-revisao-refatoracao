#include <iostream>
#include <iomanip>
#include <vector>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"


int main() {
    
    //Adição dos clientes
    Cliente c11("Xayso Sovon Ziahaka","Rua Xangrilá - Braúnas","Belo Horizonte","MG","31365-570","3196007958");

    Cliente c12("Minia Pasies Kituos","Rua dos Jacobinos - Ouro Minas","Belo Horizonte","MG","31870-290","3197627067");

    Cliente c13("Vuocue Leiur Baonauza","Rua Orminda de Almeida - Tupi B","Belo Horizonte","MG","31842-630","3195949327");

    Cliente c14("Zerer Huduy Fyogar","Rua Taquaril - Jonas Veiga","Belo Horizonte","MG","30285-422","3198596327");
    
    Cliente c15("Ceziel Mioti Pler","Rua João Gualberto Costa - Serrano","Belo Horizonte","MG","30882-747","3196274465");

    Cliente c16("Esxo Cilal Zyais","Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)","Belo Horizonte","MG","31650-560","3195004414");

    Cliente c17("Leova Wikyecil Neaca","Rua João Arantes - Cidade Nova","Belo Horizonte","MG","31170-240","3198461192");

    Cliente c18("Teas Heimeu Pipe","Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)","Belo Horizonte","MG","30668-430","3197317802");

    vector<Apartamento> totalApartamentos;
    vector<Casa> totalCasas;
    vector<Cobertura> totalCoberturas;

    //Criação dos imóveis e adição em seus respectivos vetores

    //Apartamento
    Apartamento ap1("Tuoruars",55.4,987.0,2,1,0,c11);
    totalApartamentos.push_back(ap1);

    Apartamento ap2("Fyubyeis",74.5,1540.0,2,1,2,c12);
    totalApartamentos.push_back(ap2);

    Apartamento ap3("Kelia",87.2,2354.0,3,2,2,c13);
    totalApartamentos.push_back(ap3);

    // Cobertura
    Cobertura cb1("Koci",120.1,3123.5,3,3,2,c14);
    totalCoberturas.push_back(cb1);
    
    Cobertura cb2("Wail",134.8,3578.2,4,3,3,c15);
    totalCoberturas.push_back(cb2);
    
    Cobertura cb3("Fival",180.0,4165.7,4,4,4,c16);
    totalCoberturas.push_back(cb3);

    //Casa
    Casa ca1("Beydo",145.6,4023.6,3,3,2,c17);
    totalCasas.push_back(ca1);
    
    Casa ca2("Riuzi",245.0,4856.2,5,4,4,c18);
    totalCasas.push_back(ca2);

    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    double valorTotalApartamentos = 0, valorTotalCoberturas = 0, valorTotalCasas = 0;
    double comissaoTotalApartamentos = 0, comissaoTotalCoberturas = 0, comissaoTotalCasas = 0;
    
    //Imprime as informações de todos os apartamentos e adiciona no total de valores e comissão
    for(auto it = totalApartamentos.begin();it != totalApartamentos.end();it++){
        it->print();
        valorTotalApartamentos += it->calcularValor();
        comissaoTotalApartamentos += it->calcularComissao();
        cout << endl;
    }
    //Imprime as informações de todas as coberturas e adiciona no total de valores e comissão
    for(auto it = totalCoberturas.begin();it != totalCoberturas.end();it++){
        it->print();
        valorTotalCoberturas += it->calcularValor();
        comissaoTotalCoberturas += it->calcularComissao();
    }
    //Imprime as informações de todos as casas e adiciona no total de valores e comissão
    for(auto it = totalCasas.begin(); it != totalCasas.end();it++){
        it->print();
        valorTotalCasas += it->calcularValor();
        comissaoTotalCasas += it->calcularComissao();
    }

    std::cout << "\n>> Resumo Geral <<" << endl;

    std::cout << "\n>>Apartamentos<<\n"
            << "\n Quantidade: " << totalApartamentos.size()
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorTotalApartamentos
            << "\n Comissão Total: R$" << comissaoTotalApartamentos
            << endl
            << "\n>>Coberturas<<\n"
            << "\n Quantidade: " << totalCoberturas.size()
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorTotalCoberturas
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissaoTotalCoberturas
            << endl
            << "\n>>Casas<<\n"
            << "\n Quantidade: " << totalCasas.size()
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorTotalCasas
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissaoTotalCasas
            << endl;
            
}
