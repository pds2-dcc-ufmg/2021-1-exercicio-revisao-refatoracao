#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

int main() {
    
    Cliente cl1(
        "Xayso Sovon Ziahaka",
        "Rua Xangrilá - Braúnas",
        "Belo Horizonte",
        "MG",
        "31365-570",
        "3196007958"
    );
    
    Cliente cl2(
        "Minia Pasies Kituos",
        "Rua dos Jacobinos - Ouro Minas",
        "Belo Horizonte",
        "MG",
        "31870-290",
        "3197627067"
    );
    
    Cliente cl3(
        "Vuocue Leiur Baonauza",
        "Rua Orminda de Almeida - Tupi B",
        "Belo Horizonte",
        "MG",
        "31842-630",
        "3195949327"
    );
    
    Cliente cl4(
        "Zerer Huduy Fyogar",
        "Rua Taquaril - Jonas Veiga",
        "Belo Horizonte",
        "MG",
        "30285-422",
        "3198596327"
    );
      
    Cliente cl5(
        "Ceziel Mioti Pler",
        "Rua João Gualberto Costa - Serrano",
        "Belo Horizonte",
        "MG",
        "30882-747",
        "3196274465"
    );  
    
    Cliente cl6(
        "Esxo Cilal Zyais",
        "Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)",
        "Belo Horizonte",
        "MG",
        "31650-560",
        "3195004414"
    );
    
    Cliente cl7(
        "Leova Wikyecil Neaca",
        "Rua João Arantes - Cidade Nova",
        "Belo Horizonte",
        "MG",
        "31170-240",
        "3198461192"
    );
    
    Cliente cl8(
        "Teas Heimeu Pipe",
        "Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)",
        "Belo Horizonte",
        "MG",
        "30668-430",
        "3197317802"
    );

    unsigned int qtdeApto = 0;
    unsigned int qtdeCasa = 0;
    unsigned int qtdeCob = 0;

    Apartamento ap1(
        "Tuoruars",
        55.4,
        2,
        1,
        0, 
        987.0,
        cl1
    );
    qtdeApto++;

    Apartamento ap2(
        "Fyubyeis",
        74.5,
        2,
        1,
        2,
        1540.0,
        cl2
    );
    qtdeApto++;

    Apartamento ap3(
        "Kelia",
        87.2,
        3,
        2,
        2,
        2354.0,
        cl3
    );
    qtdeApto++;

    // Cobertura
    Cobertura cb1(
        "Koci",
        120.1,
        3,
        3,
        2,
        3123.5,
        cl4
    );
    qtdeCob++;
    
    Cobertura cb2(
        "Wail",
        134.8,
        4,
        3,
        3,
        3578.2,
        cl5
    );
    qtdeCob++;

    Cobertura cb3(
        "Fival",
        180.0,
        4,
        4,
        4,
        4165.7,
        cl6
    );
    qtdeCob++;

    // Casas
    Casa ca1(
        "Beydo",
        145.6,
        3,
        3,
        2,
        4023.6,
        cl7
    );
    qtdeCasa++;

    Casa ca2(
        "Riuzi",
        245.0,
        5,
        4,
        4,
        4856.2,
        cl8
    );
    qtdeCasa++;

    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    double valorApto = ap1.getValorPorArea() + ap2.getValorPorArea() + ap3.getValorPorArea();
    double comissApto = ap1.getValorCom() + ap2.getValorCom() + ap3.getValorCom();

    double valorCob = cb1.getValorPorArea() + cb2.getValorPorArea() + cb3.getValorPorArea();
    double comissCob = cb1.getValorCom() + cb2.getValorCom() + cb3.getValorCom();
    
    double valorCasa = ca1.getValorPorArea() + ca2.getValorPorArea();    
    double comissCasa = ca1.getValorCom() + ca2.getValorCom();
    
    
    ap1.print();
    std::cout << endl;

    ap2.print();
    std::cout << endl;

    ap3.print();
    std::cout << endl;

    cb1.print();
    std::cout << endl;

    cb2.print();
    std::cout << endl;

    cb3.print();
    std::cout << endl;

    ca1.print();
    std::cout << endl;

    ca2.print();
    std::cout << endl;

    std::cout << "\n>> Resumo Geral <<" << endl;

    std::cout << "\n>>Apartamentos<<\n"
            << "\n Quantidade: " << qtdeApto
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorApto
            << "\n Comissão Total: R$" << comissApto
            << endl
            << "\n>>Coberturas<<\n"
            << "\n Quantidade: " << qtdeCob
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorCob
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissCob
            << endl
            << "\n>>Casas<<\n"
            << "\n Quantidade: " << qtdeCasa
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorCasa
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissCasa
            << endl;
}
