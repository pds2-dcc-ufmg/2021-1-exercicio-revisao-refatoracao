#include <iostream>
#include <iomanip>
#include<vector>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"


template<typename T>
void  imovelVectorPrint(std::vector<T> Imoveis){
    for(T imovel : Imoveis){
        imovel.print();
        std::cout << std::endl;
    }
}

int main() {
    
    Cliente cl1("Xayso Sovon Ziahaka",
    "Rua Xangrilá - Braúnas",
    "Belo Horizonte",
    "MG",
    "31365-570",
    "3196007958");
    
    Cliente cl2(
    "Minia Pasies Kituos",
    "Rua dos Jacobinos - Ouro Minas",
    "Belo Horizonte",
    "MG",
    "31870-290",
    "3197627067");
    
    Cliente cl3(    
    "Vuocue Leiur Baonauza",
    "Rua Orminda de Almeida - Tupi B",
    "Belo Horizonte",
    "MG",
    "31842-630",
    "3195949327");

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

    std::vector<Cliente> Clientes;
    Clientes.push_back(cl1);
    Clientes.push_back(cl2);
    Clientes.push_back(cl3);
    Clientes.push_back(cl4);
    Clientes.push_back(cl5);
    Clientes.push_back(cl6);
    Clientes.push_back(cl7);
    Clientes.push_back(cl8);

    Apartamento ap1(
    "Tuoruars",
    55.4,
    2,
    1,
    0,
    987.0,
    cl1
    );

    Apartamento ap2(
    "Fyubyeis",
    74.5,
    2,
    1,
    2,
    1540.0,
    cl2
    );

    Apartamento ap3(
    "Kelia",
    87.2,
    3,
    2,
    2,
    2354.0,
    cl3
    );

    std::vector<Apartamento> Apartamentos;
    Apartamentos.push_back(ap1);
    Apartamentos.push_back(ap2);
    Apartamentos.push_back(ap3);

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


    
    Cobertura cb2(
    "Wail",
    134.8,
    4,
    3,
    3,
    3578.2,
    cl5
    );


    Cobertura cb3(
    "Fival",
    180.0,
    4,
    4,
    4,
    4165.7,
    cl6
    );

    std::vector<Cobertura> Coberturas;
    Coberturas.push_back(cb1);
    Coberturas.push_back(cb2);
    Coberturas.push_back(cb3);

   Casa ca1(
    "Beydo",
    145.6,
    3,
    3,
    2,
    4023.6,
    cl7
    );


    Casa ca2(
    "Riuzi",
    245.0,
    5,
    4,
    4,
    4856.2,
    cl8
    );

    std::vector<Casa> Casas;
    Casas.push_back(ca1);
    Casas.push_back(ca2);

    std::cout << "\n>> Relatório de Imóveis <<" << std::endl;

    imovelVectorPrint<Apartamento>(Apartamentos);
    imovelVectorPrint<Cobertura>(Coberturas);
    imovelVectorPrint<Casa>(Casas);

    std::cout << "\n>> Resumo Geral <<" << std::endl;

    std::cout << "\n>>Apartamentos<<\n"
            << "\n Quantidade: " << ap1.getQuantidadeApartamentos()
            << "\n Valor Total: R$ " << std::fixed << std::setprecision(2) << ap1.getSomatorioValorApartamentos()
            << "\n Comissão Total: R$" << ap1.getSomatorioComicaoApartamentos()
            << std::endl
            << "\n>>Coberturas<<\n"
            << "\n Quantidade: " << cb1.getQuantidadeCoberturas()
            << "\n Valor Total: R$ " << std::fixed << std::setprecision(2) << cb1.getSomatorioValorCoberturas()
            << "\n Comissão Total: R$ " << std::fixed << std::setprecision(2) << cb1.getSomatorioComicaoCoberturas()
            << std::endl
            << "\n>>Casas<<\n"
            << "\n Quantidade: " << ca1.getQuantidadeCasas()
            << "\n Valor Total: R$ " << std::fixed << std::setprecision(2) << ca1.getSomatorioValorCasas()
            << "\n Comissão Total: R$ " << std::fixed << std::setprecision(2) << ca1.getSomatorioComicaoCasas()
            << std::endl;
}
 