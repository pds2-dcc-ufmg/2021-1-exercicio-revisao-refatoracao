#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"
#include "Sistema.hpp"

#include <vector>

int main() {

    std::vector<Apartamento> aptos;
    std::vector<Cobertura>   cobs;
    std::vector<Casa>        casas;
    
    Cliente cliente1 = Cliente("Xayso Sovon Ziahaka", "Rua Xangrilá - Braúnas", "Belo Horizonte", "MG", "31365-570", "3196007958"); 
    Cliente cliente2 = Cliente("Minia Pasies Kituos", "Rua dos Jacobinos - Ouro Minas", "Belo Horizonte", "MG", "31870-290", "3197627067");    
    Cliente cliente3 = Cliente("Vuocue Leiur Baonauza", "Rua Orminda de Almeida - Tupi B", "Belo Horizonte", "MG", "31842-630", "3195949327");    
    Cliente cliente4 = Cliente("Zerer Huduy Fyogar", "Rua Taquaril - Jonas Veiga", "Belo Horizonte", "MG", "30285-422", "3198596327");    
    Cliente cliente5 = Cliente("Ceziel Mioti Pler", "Rua João Gualberto Costa - Serrano", "Belo Horizonte", "MG", "30882-747", "3196274465");    
    Cliente cliente6 = Cliente("Esxo Cilal Zyais", "Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)", "Belo Horizonte", "MG", "31650-560", "3195004414");    
    Cliente cliente7 = Cliente("Leova Wikyecil Neaca", "Rua João Arantes - Cidade Nova", "Belo Horizonte", "MG", "31170-240", "3198461192");    
    Cliente cliente8 = Cliente("Teas Heimeu Pipe", "Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)", "Belo Horizonte", "MG", "30668-430", "3197317802");

    Apartamento apto1 = Apartamento("Tuoruars", 55.4, 2, 1, 0, 987.0, cliente1); 
    Apartamento apto2 = Apartamento("Fyubyeis", 74.5, 2, 1, 2, 1540.0, cliente2); 
    Apartamento apto3 = Apartamento("Kelia", 87.2, 3, 2, 2, 2354.0, cliente3); 
    aptos.push_back(apto1);
    aptos.push_back(apto2);
    aptos.push_back(apto3);

    // Cobertura
    Cobertura cobertura1 = Cobertura("Koci", 120.1, 3, 3, 2, 3123.5, cliente4); 
    Cobertura cobertura2 = Cobertura("Wail", 134.8, 4, 3, 3, 3578.2, cliente5); 
    Cobertura cobertura3 = Cobertura("Fival", 180.0, 4, 4, 4, 4165.7, cliente6);
    cobs.push_back(cobertura1);
    cobs.push_back(cobertura2);
    cobs.push_back(cobertura3);

    // Casas
    Casa casa1 = Casa("Beydo", 145.6, 3, 3, 2, 4023.6, cliente7); 
    Casa casa2 = Casa("Riuzi", 245.0, 5, 4, 4, 4856.2, cliente8); 
    casas.push_back(casa1);
    casas.push_back(casa2);
    
    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    int qtdeAp = aptos.size();
    int qtdeCa = casas.size();
    int qtdeCb = cobs.size();

    double valorAp  = 0.0;
    double valorCb  = 0.0;
    double valorCa  = 0.0;
    double comissAp = 0.0;
    double comissCb = 0.0;
    double comissCa = 0.0;

    for(auto it = aptos.begin(); it != aptos.end(); it++){
		it->print();
		valorAp += it->valor();
        comissAp += it->comissao();
		std::cout << endl;
	}
    
    for(auto it = cobs.begin(); it != cobs.end(); it++){
		it->print();
		valorCb += it->valor();
        comissCb += it->comissao();
		std::cout << endl;
	}

    for(auto it = casas.begin(); it != casas.end(); it++){
		it->print();
		valorCa += it->valor();
        comissCa += it->comissao();
		std::cout << endl;
	}

    std::cout << "\n>> Resumo Geral <<" << endl;

    std::cout << "\n>>Apartamentos<<\n"
            << "\n Quantidade: " << qtdeAp
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
