#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"
#include <string>

int main() {

    // Clientes
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
        "Rua João Arantes - cidade Nova",
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

    // Apartamentos
    Apartamento ap1(
        55.4,
        2,
        1,
        0,
        987.0,
        cl1,
        "Tuoruars"
    );

    Apartamento ap2(
        74.5,
        2,
        1,
        2,
        1540.0,
        cl2,
        "Fyubyeis"
    );

    Apartamento ap3(
        87.2,
        3,
        2,
        2,
        2354.0,
        cl3,
        "Kelia"
    );
    const int qtde_aptos = 3;

    // Coberturas
    Cobertura cb1(
        120.1,
        3,
        3,
        2,
        3123.5,
        cl4,
        "Koci"
    );
    
    Cobertura cb2(
        134.8,
        4,
        3,
        3,
        3578.2,
        cl5,
        "Wail"
    );

    Cobertura cb3(
        180.0,
        4,
        4,
        4,
        4165.7,
        cl6,
        "Fival"
    );
    const int qtde_coberturas = 3;

    // Casas
    Casa ca1(
        145.6,
        3,
        3,
        2,
        4023.6,
        cl7,
        "Beydo"
    );

    Casa ca2(
        245.0,
        5,
        4,
        4,
        4856.2,
        cl8,
        "Riuzi"
    );
    const int qtde_casas = 2;

    const double valor_aptos = ap1.valor()+ap2.valor()+ap3.valor();
    const double comiss_aptos = ap1.comissao()+ap2.comissao()+ap3.comissao();
    const double valor_cobs = cb1.valor()+cb2.valor()+cb3.valor();
    const double comiss_cobs = cb1.comissao()+cb2.comissao()+cb3.comissao();
    const double valor_casas = ca1.valor()+ca2.valor();
    const double comiss_casas = ca1.comissao()+ca2.comissao();


    std::cout << "\n>> Relatório de Imóveis <<" << endl;
    
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
        << "\n Quantidade: " << qtde_aptos
        << "\n Valor Total: R$ " << fixed << setprecision(2) << valor_aptos
        << "\n Comissão Total: R$" << comiss_aptos
        << endl
        << "\n>>Coberturas<<\n"
        << "\n Quantidade: " << qtde_coberturas
        << "\n Valor Total: R$ " << fixed << setprecision(2) << valor_cobs
        << "\n Comissão Total: R$ " << fixed << setprecision(2) << comiss_cobs
        << endl
        << "\n>>Casas<<\n"
        << "\n Quantidade: " << qtde_casas
        << "\n Valor Total: R$ " << fixed << setprecision(2) << valor_casas
        << "\n Comissão Total: R$ " << fixed << setprecision(2) << comiss_casas
        << endl;
}
