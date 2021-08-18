#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

int main() {
    
    // Clientes
 
    Cliente cl1("Xayso Sovon Ziahaka", "Rua Xangrilá - Braúnas", 
                                "Belo Horizonte", "MG", "31365-570", "3196007958");
    Cliente cl2("Minia Pasies Kituos", "Rua dos Jacobinos - Ouro Minas", 
                                "Belo Horizonte", "MG", "31870-290", "3197627067");
    Cliente cl3("Vuocue Leiur Baonauza", "Rua Orminda de Almeida - Tupi B",
                                "Belo Horizonte", "MG", "31842-630", "3195949327");
    Cliente cl4("Zerer Huduy Fyogar", "Rua Taquaril - Jonas Veiga", 
                                "Belo Horizonte","MG", "30285-422", "3198596327");
    Cliente cl5("Ceziel Mioti Pler", "Rua João Gualberto Costa - Serrano", 
                                "Belo Horizonte", "MG", "30882-747", "3196274465");
    Cliente cl6("Esxo Cilal Zyais", "Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)",
                                "Belo Horizonte", "MG", "31650-560", "3195004414");
    Cliente cl7("Leova Wikyecil Neaca", "Rua João Arantes - Cidade Nova",
                                "Belo Horizonte", "MG", "31170-240", "3198461192");
    Cliente cl8("Teas Heimeu Pipe", "Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)",
                                "Belo Horizonte", "MG", "30668-430", "3197317802");
    
    int Qnt_Apartamentos = 0;
    int Qnt_Casas = 0;
    int Qnt_Coberturas = 0;

    // Apartamentos 
    
    Apartamento ap1("Tuoruars", 55.4, 2, 1, 0, 987.0, cl1);
    Qnt_Apartamentos++;
    Apartamento ap2("Fyubyeis", 74.5, 2, 1, 2, 1540.0, cl2);
    Qnt_Apartamentos++;
    Apartamento ap3("Kelia", 87.2, 3, 2, 2, 2354.0, cl3);
    Qnt_Apartamentos++;

    // Cobertura
    Cobertura cb1("Koci", 120.1, 3, 3, 2, 3123.5, cl4);
    Qnt_Coberturas++;
    Cobertura cb2("Wail", 134.8, 4, 3, 3, 3578.2, cl5);
    Qnt_Coberturas++;
    Cobertura cb3("Fival", 180.0, 4, 4, 4, 4165.7, cl6);
    Qnt_Coberturas++;

    // Casas
    Casa ca1("Beydo", 145.6, 3, 3, 2, 4023.6, cl7);
    Qnt_Casas++;
    Casa ca2("Riuzi", 245.0, 5, 4, 4, 4856.2, cl8);
    Qnt_Casas++;

   
    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    double Valor_Apartamento = 0.0;
    double Valor_Cobertura = 0.0;
    double Valor_Casa = 0.0;
    double Comissao_Apartamento = 0.0;
    double Comissao_Cobertura = 0.0;
    double Comissao_Casa = 0.0;
    
    // Calculo do valor do apartamento e de comissão.
    
    ap1.print();
    Valor_Apartamento += ap1.valor();
    Comissao_Apartamento += ap1.comissao();
    std::cout << endl;

    ap2.print();
    Valor_Apartamento += ap2.valor();
    Comissao_Apartamento += ap2.comissao();
    std::cout << endl;

    ap3.print();
    Valor_Apartamento += ap3.valor();
    Comissao_Apartamento += ap3.comissao();
    std::cout << endl;

    // Calculo do valor da cobertura e de comissão.
    
    cb1.print();
    Valor_Cobertura += cb1.valor();
    Comissao_Cobertura += cb1.comissao();
    std::cout << endl;

    cb2.print();
    Valor_Cobertura += cb2.valor();
    Comissao_Cobertura += cb2.comissao();
    std::cout << endl;

    cb3.print();
    Valor_Cobertura += cb3.valor();
    Comissao_Cobertura += cb3.comissao();
    std::cout << endl;

    // Calculo do valor da casa e de comissão.
    
    ca1.print();
    Valor_Casa += ca1.valor();
    Comissao_Casa += ca1.comissao();
    std::cout << endl;

    ca2.print();
    Valor_Casa += ca2.valor();
    Comissao_Casa += ca2.comissao();
    std::cout << endl;

    std::cout << "\n>> Resumo Geral <<" << endl;

    std::cout << "\n>>Apartamentos<<\n"
            << "\n Quantidade: " << Qnt_Apartamentos
            << "\n Valor Total: R$ " << fixed << setprecision(2) << Valor_Apartamento
            << "\n Comissão Total: R$" << Comissao_Apartamento
            << endl
            << "\n>>Coberturas<<\n"
            << "\n Quantidade: " << Qnt_Coberturas
            << "\n Valor Total: R$ " << fixed << setprecision(2) << Valor_Cobertura
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << Comissao_Cobertura
            << endl
            << "\n>>Casas<<\n"
            << "\n Quantidade: " << Qnt_Casas
            << "\n Valor Total: R$ " << fixed << setprecision(2) << Valor_Casa
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << Comissao_Casa
            << endl;
    
    
   
}

