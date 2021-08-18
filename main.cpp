#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

int main() {
    
    Cliente* cl1 = new Cliente("Xayso Sovon Ziahaka","Rua Xangrilá - Braúnas","Belo Horizonte",
    "MG","31365-570","3196007958");
    Cliente* cl2 = new Cliente("Minia Pasies Kituos","Rua dos Jacobinos - Ouro Minas","Belo Horizonte",
    "MG","31870-290","3197627067");
    Cliente* cl3 = new Cliente("Vuocue Leiur Baonauza","Rua Orminda de Almeida - Tupi B","Belo Hotizonte",
    "MG","31842-630","3195949327");
    Cliente* cl4 = new Cliente("Zerer Huduy Fyogar","Rua Taquaril - Jonas Veiga", "Belo Horizonte",
    "MG","30285-422","3198596327");
    Cliente* cl5 = new Cliente("Ceziel Mioti Pler","Rua João Gualberto Costa - Serrano","Belo Horizonte",
    "MG","30882-747","3196274465");
    Cliente* cl6 = new Cliente("Esxo Cilal Zyais","Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)",
    "Belo Horizonte","MG","31650-560","3195004414");
    Cliente* cl7 = new Cliente("Leova Wikyecil Neaca","Rua João Arantes - Cidade Nova","Belo Horizonte",
    "MG","31170-240","3198461192");   
    Cliente* cl8 = new Cliente("Teas Heimeu Pipe","Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)","Belo Horizonte",
    "MG","30668-430","3197317802");

    int quantApart = 0; 
    int taxaAp = 4;
    int quantCasas = 0; 
    int taxaCasa = 6;
    int quantCober = 0; 
    int taxaCober = 10;
    
    Apartamento* ap1 = new Apartamento(55.4,987.0,0.0,0,2,1,0,cl1,"Tuoruars",taxaAp);
    ap1->_valorVenda = ap1->valor() + ap1->comissao();
    ap1->_valorComissao = ap1->comissao();
    quantApart++;
    Apartamento* ap2 = new Apartamento(74.5,1540.0,0,0,2,1,2,cl2,"Fyubyeis",taxaAp);
    ap2->_valorVenda = ap2->valor() + ap2->comissao();
    ap2->_valorComissao = ap2->comissao();
    quantApart++;
    Apartamento* ap3 = new Apartamento(87.2,2354.0,0,0,3,2,2,cl3,"Kelia",taxaAp);
    ap3->_valorVenda = ap3->valor() + ap3->comissao();
    ap3->_valorComissao = ap3->comissao();
    quantApart++;

    Cobertura* cb1 = new Cobertura(120.1,3123.5,0,0,3,3,2,cl4,"Koci",taxaCober);
    cb1->_valorVenda = cb1->valor() + cb1->comissao();
    cb1->_valorComissao = cb1->comissao();
    quantCober++;
    Cobertura* cb2 = new Cobertura(134.8,3578.2,0,0,4,3,3,cl5,"Wail",taxaCober);
    cb2->_valorVenda = cb2->valor() + cb2->comissao();
    cb2->_valorComissao = cb2->comissao();
    quantCober++;
    Cobertura* cb3 = new Cobertura(180.0,4165.7,0,0,4,4,4,cl6,"Fival",taxaCober);
    cb3->_valorVenda = cb3->valor() + cb3->comissao();
    cb3->_valorComissao = cb3->comissao();
    quantCober++;

    
    Casa* ca1 = new Casa(145.6,4023.6,0,0,3,3,2,cl7,"Beydo",taxaCasa);
    ca1->_valorVenda = ca1->valor() + ca1->comissao();
    ca1->_valorComissao = ca1->comissao();
    quantCasas++;
    Casa* ca2 = new Casa(245.0,4856.2,0,0,5,4,4,cl8,"Riuzi",taxaCasa);
    ca2->_valorVenda = ca2->valor() + ca2->comissao();
    ca2->_valorComissao = ca2->comissao();
    quantCasas++;

    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    double valorTotalAp = 0.0;
    double valorTotalCober = 0.0;
    double valorTotalCasa = 0.0;
    double comissTotalAp = 0.0;
    double comissTotalCober = 0.0;
    double comissTotalCasa = 0.0;
    
    ap1->print();
    std::cout << endl;
    ap2->print();
    std::cout << endl;
    ap3->print();
    std::cout << endl;
    valorTotalAp = ap1->valor() + ap2->valor() +  ap3->valor();
    comissTotalAp = ap1->comissao() + ap2->comissao() + ap3->comissao();

    cb1->print();
    std::cout << endl;
    cb2->print();
    std::cout << endl;
    cb3->print();
    std::cout << endl;
    valorTotalCober = cb1->valor() + cb2->valor() +  cb3->valor();
    comissTotalCober = cb1->comissao() + cb2->comissao() + cb3->comissao();

    ca1->print();
    std::cout << endl;
    ca2->print();
    std::cout << endl;
    valorTotalCasa = ca1->valor() + ca2->valor();
    comissTotalCasa = ca1->comissao() + ca2->comissao();

    std::cout << "\n>> Resumo Geral <<" << endl;

    std::cout << "\n>>Apartamentos<<\n"
            << "\n Quantidade: " << quantApart
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorTotalAp
            << "\n Comissão Total: R$" << comissTotalAp
            << endl
            << "\n>>Coberturas<<\n"
            << "\n Quantidade: " << quantCober
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorTotalCober
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissTotalCober
            << endl
            << "\n>>Casas<<\n"
            << "\n Quantidade: " << quantCasas
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorTotalCasa
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissTotalCasa
            << endl;

    delete cl1; 
    delete cl2;
    delete cl3;
    delete cl4;
    delete cl5;
    delete cl6;
    delete cl7;
    delete cl8;

    delete ap1;
    delete ap2;
    delete ap3;

    delete cb1;
    delete cb2;
    delete cb3;

    delete ca1;
    delete ca2;
    
}
