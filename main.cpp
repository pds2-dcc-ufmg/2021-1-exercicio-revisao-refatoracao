#include <iostream>
#include <iomanip>
#include <vector>
 
#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

int main() {

    std::vector<Apartamento> apartamentos;
    std::vector<Casa> casas;
    std::vector<Cobertura> coberturas;
    
    Cliente cl1 = Cliente("Xayso Sovon Ziahaka", "Rua Xangrilá - Braúnas", "Belo Horizonte", "MG", "31365-570", "3196007958"); 
    Cliente cl2 = Cliente("Minia Pasies Kituos", "Rua dos Jacobinos - Ouro Minas", "Belo Horizonte", "MG", "31870-290", "3197627067");    
    Cliente cl3 = Cliente("Vuocue Leiur Baonauza", "Rua Orminda de Almeida - Tupi B", "Belo Horizonte", "MG", "31842-630", "3195949327");    
    Cliente cl4 = Cliente("Zerer Huduy Fyogar", "Rua Taquaril - Jonas Veiga", "Belo Horizonte", "MG", "30285-422", "3198596327");    
    Cliente cl5 = Cliente("Ceziel Mioti Pler", "Rua João Gualberto Costa - Serrano", "Belo Horizonte", "MG", "30882-747", "3196274465");    
    Cliente cl6 = Cliente("Esxo Cilal Zyais", "Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)", "Belo Horizonte", "MG", "31650-560", "3195004414");    
    Cliente cl7 = Cliente("Leova Wikyecil Neaca", "Rua João Arantes - Cidade Nova", "Belo Horizonte", "MG", "31170-240", "3198461192");    
    Cliente cl8 = Cliente("Teas Heimeu Pipe", "Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)", "Belo Horizonte", "MG", "30668-430", "3197317802");
    
    Apartamento ap1 = Apartamento("Tuoruars", 55.4, 2, 1, 0, 987.0, cl1);
    Apartamento ap2 = Apartamento("Fyubyeis", 74.5, 2, 1, 2, 1540.0, cl2);
    Apartamento ap3 = Apartamento("Kelia", 87.2, 3, 2, 2, 2354.0, cl3);

    apartamentos.push_back(ap1);
    apartamentos.push_back(ap2);
    apartamentos.push_back(ap3);

    // Cobertura
    Cobertura cb1 = Cobertura("Koci", 120.1, 3, 3, 2, 3123.5, cl4); 
    Cobertura cb2 = Cobertura("Wail", 134.8, 4, 3, 3, 3578.2, cl5);
    Cobertura cb3 = Cobertura("Fival", 180.0, 4, 4, 4, 4165.7, cl6);

    coberturas.push_back(cb1);
    coberturas.push_back(cb2);
    coberturas.push_back(cb3);

    // Casas
    Casa ca1 = Casa("Beydo", 145.6, 3, 3, 2, 4023.6, cl7);
    Casa ca2 = Casa("Riuzi", 245.0, 5, 4, 4, 4856.2, cl8);

    casas.push_back(ca1);
    casas.push_back(ca2);

    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    double valorAp = 0.0;
    double valorCb = 0.0;
    double valorCa = 0.0;
    double comissAp = 0.0;
    double comissCb = 0.0;
    double comissCa = 0.0;

    for(int i = 0; i < apartamentos.size(); i++){
		apartamentos[i].print();
		valorAp += apartamentos[i].getValorVenda();
        comissAp += apartamentos[i].getValorComissao();
		std::cout << endl;
	}

    for(int i = 0; i < coberturas.size(); i++){
		coberturas[i].print();
		valorCb += coberturas[i].getValorVenda();
        comissCb += coberturas[i].getValorComissao();
		std::cout << endl;
	}

    for(int i = 0; i < casas.size(); i++){
		casas[i].print();
		valorCa += casas[i].getValorVenda();
        comissCa += casas[i].getValorComissao();
		std::cout << endl;
	}

    std::cout << "\n>> Resumo Geral <<" << endl;

    std::cout << "\n>>Apartamentos<<\n"
            << "\n Quantidade: " << apartamentos.size()
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorAp
            << "\n Comissão Total: R$" << comissAp
            << endl
            << "\n>>Coberturas<<\n"
            << "\n Quantidade: " << coberturas.size()
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorCb
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissCb
            << endl
            << "\n>>Casas<<\n"
            << "\n Quantidade: " << casas.size()
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorCa
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissCa
            << endl;
}
