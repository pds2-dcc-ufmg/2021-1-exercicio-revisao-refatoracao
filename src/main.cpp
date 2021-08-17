//Incluindo bibliotecas
#include <iostream>
#include <iomanip>

//Incluindo .hpp
#include "Apartamento.hpp"
#include "Casa.hpp"
#include "Cartorio.hpp"
#include "Cliente.hpp"
#include "Cobertura.hpp"


int main() {
    //Construtor do Cartório:
    Cartorio cartorio;
    
    //Construtores dos Clientes:
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

    //Construtores dos Apartamentos:
    Apartamento apartamento1(55.4, 2, 1, 0, 987.0, cliente1, "Tuoruars");

    Apartamento apartamento2(74.5, 2, 1, 2, 1540.0, cliente2, "Fyubyeis");

    Apartamento apartamento3(87.2, 3, 2, 2, 2354.0, cliente3, "Kelia");

    //Construtores das Coberturas:
    Cobertura cobertura1(120.1, 3, 3, 2, 3123.5, cliente4, "Koci");
    
    Cobertura cobertura2(134.8, 4, 3, 3, 3578.2, cliente5, "Wail");

    Cobertura cobertura3(180.0, 4, 4, 4, 4165.7, cliente6, "Fival");

    //Construtores das Casas:
    Casa casa1(145.6, 3, 3, 2, 4023.6, cliente7, "Beydo");

    Casa casa2(245.0, 5, 4, 4, 4856.2, cliente8, "Riuzi");

    //Registrando Apartamentos:
    cartorio.registraApartamento(apartamento1);
    cartorio.registraApartamento(apartamento2);
    cartorio.registraApartamento(apartamento3);

    //Registrando Coberturas:
    cartorio.registraCobertura(cobertura1);
    cartorio.registraCobertura(cobertura2);
    cartorio.registraCobertura(cobertura3);

    //Registrando Casas:
    cartorio.registraCasa(casa1);
    cartorio.registraCasa(casa2);

    //Relatório de Imóveis
    cartorio.imprimeRelatorioDeImoveis();

    //Resumo Geral
    cartorio.imprimeResumoGeral();
}
