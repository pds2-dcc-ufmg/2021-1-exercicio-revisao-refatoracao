#include <iostream>
#include <string>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"
#include "Utilitarios.hpp"


int main() {

    cliente::Cliente cl1("Xayso Sovon Ziahaka",
                        "Rua Xangrilá - Braúnas",
                        "Belo Horizonte",
                        "MG",
                        "31365-570",
                        "3196007958"
                        );
    
    cliente::Cliente cl2("Minia Pasies Kituos",
                         "Rua dos Jacobinos - Ouro Minas",
                         "Belo Horizonte",
                         "MG",
                         "31870-290",
                         "3197627067"
                         );
                         
    cliente::Cliente cl3("Vuocue Leiur Baonauza",
                         "Rua Orminda de Almeida - Tupi B",
                         "Belo Horizonte",
                         "MG",
                         "31842-630",
                         "3195949327"
                         );
                         
    cliente::Cliente cl4("Zerer Huduy Fyogar",
                         "Rua Taquaril - Jonas Veiga",
                         "Belo Horizonte",
                         "MG",
                         "30285-422",
                         "3198596327"
                         );
                         
    cliente::Cliente cl5("Ceziel Mioti Pler",
                         "Rua João Gualberto Costa - Serrano",
                         "Belo Horizonte",
                         "MG",
                         "30882-747",
                         "3196274465"
                         );
                         
    cliente::Cliente cl6("Esxo Cilal Zyais",
                         "Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)",
                         "Belo Horizonte",
                         "MG",
                         "31650-560",
                         "3195004414"
                         );
                         
    cliente::Cliente cl7("Leova Wikyecil Neaca",
                         "Rua João Arantes - cidade() Nova",
                         "Belo Horizonte",
                         "MG",
                         "31170-240",
                         "3198461192"
                        );
    
    cliente::Cliente cl8("Teas Heimeu Pipe",
                         "Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)",
                         "Belo Horizonte",
                         "MG",
                         "30668-430",
                         "3197317802"
                        );

    int qtdeA = 0;
    int qtdeCa = 0;
    int qtdeCb = 0;

    // Apartamentos

    Imoveis::Apartamento ap1("Tuoruars", 
                            55.4, 2, 1, 0, 987.0,  
                            cl1);
    qtdeA++;

    Imoveis::Apartamento ap2("Fyubyeis", 74.5, 2, 1, 2, 
                            1540.0,  
                            cl2);
    qtdeA++;

    Imoveis::Apartamento ap3("Kelia", 
                            87.2, 3, 2, 2, 2354.0, 
                            cl3);
    qtdeA++;

    // Coberturas
    Imoveis::Cobertura cb1("Koci", 
                            120.1, 3, 3, 2, 3123.5,
                            cl4);
    qtdeCb++;
    
    Imoveis::Cobertura cb2("Wail", 
                            134.8, 4, 3, 3, 3578.2,        
                            cl5);
    qtdeCb++;

    Imoveis::Cobertura cb3("Fival", 
                            180.0, 4, 4, 4, 4165.7,                           
                            cl6);
    qtdeCb++;

    // Casas
    Imoveis::Casa ca1("Beydo", 
                      145.6, 3, 3, 2, 4023.6,                       
                      cl7);
    qtdeCa++;

    Imoveis::Casa ca2("Riuzi", 
                      245.0, 5, 4, 4, 4856.2,                       
                      cl8);
    qtdeCa++;

    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    double valorAp = 0.0;
    double valorCb = 0.0;
    double valorCa = 0.0;
    double comissAp = 0.0;
    double comissCb = 0.0;
    double comissCa = 0.0;
    
    std::cout << ap1;
    valorAp += ap1.calcula_valor();
    comissAp += ap1.calcula_comissao();
    std::cout << endl;

    std::cout << ap2;
    valorAp += ap2.calcula_valor();
    comissAp += ap2.calcula_comissao();
    std::cout << endl;

    std::cout << ap3;
    valorAp += ap3.calcula_valor();
    comissAp += ap3.calcula_comissao();
    std::cout << endl;

    std::cout << cb1;
    valorCb += cb1.calcula_valor();
    comissCb += cb1.calcula_comissao();
    std::cout << endl;

    std::cout << cb2;
    valorCb += cb2.calcula_valor();
    comissCb += cb2.calcula_comissao();
    std::cout << endl;

    std::cout << cb3;
    valorCb += cb3.calcula_valor();
    comissCb += cb3.calcula_comissao();
    std::cout << endl;

    std::cout << ca1;
    valorCa += ca1.calcula_valor();
    comissCa += ca1.calcula_comissao();
    std::cout << endl;

    std::cout << ca2;
    valorCa += ca2.calcula_valor();
    comissCa += ca2.calcula_comissao();
    std::cout << endl;

    std::cout << "\n>> Resumo Geral <<" << endl;

    std::cout << "\n>>Apartamentos<<\n"
            << "\n quantidade: " << qtdeA
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorAp
            << "\n Comissão Total: R$" << comissAp
            << endl
            << "\n>>Coberturas<<\n"
            << "\n quantidade: " << qtdeCb
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorCb
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissCb
            << endl
            << "\n>>Casas<<\n"
            << "\n quantidade: " << qtdeCa
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorCa
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissCa
            << endl;
}
