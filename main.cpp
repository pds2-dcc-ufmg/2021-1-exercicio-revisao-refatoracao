#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

int main() {
    
    Cliente cl1;
    cl1.setNOME("Xayso Sovon Ziahaka");
    cl1.setENDERECO("Rua Xangrilá - Braúnas");
    cl1.setCIDADE("Belo Horizonte");
    cl1.setUF("MG");
    cl1.setCEP("31365-570");
    cl1.setTELEFONE("3196007958");
    
    Cliente cl2;
    cl2.setNOME("Minia Pasies Kituos");
    cl2.setENDERECO("Rua dos Jacobinos - Ouro Minas");
    cl2.setCIDADE("Belo Horizonte");
    cl2.setUF("MG");
    cl2.setCEP("31870-290");
    cl2.setTELEFONE("3197627067");
    
    Cliente cl3;
    cl3.setNOME("Vuocue Leiur Baonauza");
    cl3.setENDERECO("Rua Orminda de Almeida - Tupi B");
    cl3.setCIDADE("Belo Horizonte");
    cl3.setUF("MG");
    cl3.setCEP("31842-630");
    cl3.setTELEFONE("3195949327");
    
    Cliente cl4;
    cl4.setNOME("Zerer Huduy Fyogar");
    cl4.setENDERECO("Rua Taquaril - Jonas Veiga");
    cl4.setCIDADE("Belo Horizonte");
    cl4.setUF("MG");
    cl4.setCEP("30285-422");
    cl4.setTELEFONE("3198596327");
    
    Cliente cl5;
    cl5.setNOME("Ceziel Mioti Pler");
    cl5.setENDERECO("Rua João Gualberto Costa - Serrano");
    cl5.setCIDADE("Belo Horizonte");
    cl5.setUF("MG");
    cl5.setCEP("30882-747");
    cl5.setTELEFONE("3196274465");
    
    Cliente cl6;
    cl6.setNOME("Esxo Cilal Zyais");
    cl6.setENDERECO("Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)");
    cl6.setCIDADE("Belo Horizonte");
    cl6.setUF("MG");
    cl6.setCEP("31650-560");
    cl6.setTELEFONE("3195004414");
    
    Cliente cl7;
    cl7.setNOME("Leova Wikyecil Neaca");
    cl7.setENDERECO("Rua João Arantes - Cidade Nova");
    cl7.setCIDADE("Belo Horizonte");
    cl7.setUF("MG");
    cl7.setCEP("31170-240");
    cl7.setTELEFONE("3198461192");
    
    Cliente cl8;
    cl8.setNOME("Teas Heimeu Pipe");
    cl8.setENDERECO("Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)");
    cl8.setCIDADE("Belo Horizonte");
    cl8.setUF("MG");
    cl8.setCEP("30668-430");
    cl8.setTELEFONE("3197317802");

    int qtdeA = 0;
    int qtdeCa = 0;
    int qtdeCb = 0;

    //Apartamentos
    Apartamento ap1;
    ap1.setCORRETOR("Tuoruars");
    ap1.setAREA(55.4);
    ap1.setQUARTOS(2);
    ap1.setBANHEIROS(1);
    ap1.setVAGAS(0);
    ap1.setVALORm2(987.0);
    ap1.setVENDEDOR(cl1);
    qtdeA++;

    Apartamento ap2;
    ap2.setCORRETOR("Fyubyeis");
    ap2.setAREA(74.5);
    ap2.setQUARTOS(2);
    ap2.setBANHEIROS(1);
    ap2.setVAGAS(2);
    ap2.setVALORm2(1540.0);
    ap2.setVENDEDOR(cl2);
    qtdeA++;

    Apartamento ap3;
    ap3.setCORRETOR("Kelia");
    ap3.setAREA(87.2);
    ap3.setQUARTOS(3);
    ap3.setBANHEIROS(2);
    ap3.setVAGAS(2);
    ap3.setVALORm2(2354.0);
    ap3.setVENDEDOR(cl3);
    qtdeA++;

    // Cobertura
    Cobertura cb1;
    cb1.setCORRETOR("Koci");
    cb1.setAREA(120.1);
    cb1.setQUARTOS(3);
    cb1.setBANHEIROS(3);
    cb1.setVAGAS(2);
    cb1.setVALORm2(3123.5);
    cb1.setVENDEDOR(cl4);
    qtdeCb++;
    
    Cobertura cb2;
    cb2.setCORRETOR("Wail");
    cb2.setAREA(134.8);
    cb2.setQUARTOS(4);
    cb2.setBANHEIROS(3);
    cb2.setVAGAS(3);
    cb2.setVALORm2(3578.2);
    cb2.setVENDEDOR(cl5);
    qtdeCb++;

    Cobertura cb3;
    cb3.setCORRETOR("Fival");
    cb3.setAREA(180.0);
    cb3.setQUARTOS(4);
    cb3.setBANHEIROS(4);
    cb3.setVAGAS(4);
    cb3.setVALORm2(4165.7);
    cb3.setVENDEDOR(cl6);
    qtdeCb++;

    // Casas
    Casa ca1;
    ca1.setCORRETOR("Beydo");
    ca1.setAREA(145.6);
    ca1.setQUARTOS(3);
    ca1.setBANHEIROS(3);
    ca1.setVAGAS(2);
    ca1.setVALORm2(4023.6);
    ca1.setVENDEDOR(cl7);
    qtdeCa++;

    Casa ca2;
    ca2.setCORRETOR("Riuzi");
    ca2.setAREA(245.0);
    ca2.setQUARTOS(5);
    ca2.setBANHEIROS(4);
    ca2.setVAGAS(4);
    ca2.setVALORm2(4856.2);
    ca2.setVENDEDOR(cl8);
    qtdeCa++;

    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    double valorAp = 0.0;
    double valorCb = 0.0;
    double valorCa = 0.0;
    double comissAp = 0.0;
    double comissCb = 0.0;
    double comissCa = 0.0;
    
    ap1.print();
    valorAp += ap1.calcularValorImovel();
    comissAp += ap1.calcularValorComissao();
    std::cout << endl;

    ap2.print();
    valorAp += ap2.calcularValorImovel();
    comissAp += ap2.calcularValorComissao();
    std::cout << endl;

    ap3.print();
    valorAp += ap3.calcularValorImovel();
    comissAp += ap3.calcularValorComissao();
    std::cout << endl;

    cb1.print();
    valorCb += cb1.calcularValorImovel();
    comissCb += cb1.calcularValorComissao();
    std::cout << endl;

    cb2.print();
    valorCb += cb2.calcularValorImovel();
    comissCb += cb2.calcularValorComissao();
    std::cout << endl;

    cb3.print();
    valorCb += cb3.calcularValorImovel();
    comissCb += cb3.calcularValorComissao();
    std::cout << endl;

    ca1.print();
    valorCa += ca1.calcularValorImovel();
    comissCa += ca1.calcularValorComissao();
    std::cout << endl;

    ca2.print();
    valorCa += ca2.calcularValorImovel();
    comissCa += ca2.calcularValorComissao();
    std::cout << endl;

    std::cout << "\n>> Resumo Geral <<" << endl;

    std::cout << "\n>>Apartamentos<<\n"
            << "\n Quantidade: " << qtdeA
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
