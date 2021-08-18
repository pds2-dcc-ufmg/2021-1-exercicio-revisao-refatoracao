#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

template <class T> 

int main() {
    
    Cliente cl1 ("Xayso Sovon Ziahaka", "Rua Xangrilá - Braúnas",
                 "Belo Horizonte", "MG", "31365-570", "3196007958");
  
    Cliente cl2 ("Minia Pasies Kituos", "Rua dos Jacobinos - Ouro Minas", 
                 "Belo Horizonte", "MG", "31870-290", "3197627067");
   
    Cliente cl3 ("Vuocue Leiur Baonauza", "Rua Orminda de Almeida - Tupi B", 
                 "Belo Horizonte", "MG", "31842-630", "3195949327");
   
    Cliente cl4 ("Zerer Huduy Fyogar", "Rua Taquaril - Jonas Veiga",
                 "Belo Horizonte", "MG", "30285-422", "3198596327");
  
    Cliente cl5 ("Ceziel Mioti Pler", "Rua João Gualberto Costa - Serrano",
                 "Belo Horizonte", "MG", "30882-747", "3196274465");
    
    Cliente cl6 ("Esxo Cilal Zyais", "Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)",
                 "Belo Horizonte", "MG", "31650-560", "3195004414");
    
    Cliente cl7 ("Leova Wikyecil Neaca", "Rua João Arantes - Cidade Nova",
                 "Belo Horizonte", "MG", "31170-240", "3198461192");
   
    Cliente cl8 ("Teas Heimeu Pipe", "Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)",
                 "Belo Horizonte", "MG", "30668-430", "3197317802");
  
    int qtdeA = 0;
    int qtdeCa = 0;
    int qtdeCb = 0;

    Apartamento ap1;
    ap1.corretor = "Tuoruars";
    ap1.area = 55.4;
    ap1.Q = 2;
    ap1.B = 1;
    ap1.V = 0;
    ap1.valor_m2 = 987.0;
    ap1.C = ap1.comissao();
    ap1.valor = ap1.valor() + ap1.comissao();
    ap1.vendedor = cl1;
    qtdeA++;

    Apartamento ap2;
    ap2.corretor = "Fyubyeis";
    ap2.area = 74.5;
    ap2.Q = 2;
    ap2.B = 1;
    ap2.V = 2;
    ap2.valor_m2 = 1540.0;
    ap2.C = ap2.comissao();
    ap2.valor = ap2.valor() + ap2.comissao();
    ap2.vendedor = cl2;
    qtdeA++;

    Apartamento ap3;
    ap3.corretor = "Kelia";
    ap3.area = 87.2;
    ap3.Q = 3;
    ap3.B = 2;
    ap3.V = 2;
    ap3.valor_m2 = 2354.0;
    ap3.C = ap3.comissao();
    ap3.valor = ap3.valor() + ap3.comissao();
    ap3.vendedor = cl3;
    qtdeA++;

    // Cobertura
    Cobertura cb1;
    cb1.corretor = "Koci";
    cb1.area = 120.1;
    cb1.Q = 3;
    cb1.B = 3;
    cb1.V = 2;
    cb1.valor_m2 = 3123.5;
    cb1.C = cb1.comissao();
    cb1.valor = cb1.valor() + cb1.comissao();
    cb1.vendedor = cl4;
    qtdeCb++;
    
    Cobertura cb2;
    cb2.corretor = "Wail";
    cb2.area = 134.8;
    cb2.Q = 4;
    cb2.B = 3;
    cb2.V = 3;
    cb2.valor_m2 = 3578.2;
    cb2.C = cb2.comissao();
    cb2.valor = cb2.valor() + cb2.comissao();
    cb2.vendedor = cl5;
    qtdeCb++;

    Cobertura cb3;
    cb3.corretor = "Fival";
    cb3.area = 180.0;
    cb3.Q = 4;
    cb3.B = 4;
    cb3.V = 4;
    cb3.valor_m2 = 4165.7;
    cb3.C = cb3.comissao();
    cb3.valor = cb3.valor() + cb3.comissao();
    cb3.vendedor = cl6;
    qtdeCb++;

    // Casas
    Casa ca1;
    ca1.corretor = "Beydo";
    ca1.area = 145.6;
    ca1.Q = 3;
    ca1.B = 3;
    ca1.V = 2;
    ca1.valor_m2 = 4023.6;
    ca1.C = ca1.comissao();
    ca1.valor = ca1.valor() + ca1.comissao();
    ca1.vendedor = cl7;
    qtdeCa++;

    Casa ca2;
    ca2.corretor = "Riuzi";
    ca2.area = 245.0;
    ca2.Q = 5;
    ca2.B = 4;
    ca2.V = 4;
    ca2.valor_m2 = 4856.2;
    ca2.C = ca2.comissao();
    ca2.valor = ca2.valor() + ca2.comissao();
    ca2.vendedor = cl8;
    qtdeCa++;

    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    double valorAp = 0.0;
    double valorCb = 0.0;
    double valorCa = 0.0;
    double comissAp = 0.0;
    double comissCb = 0.0;
    double comissCa = 0.0;
    
    ap1.procedure(&valorAp, &comissAp);
        
    ap2.procedure(&valorAp, &comissAp);
    
    ap3.procedure(&valorAp, &comissAp);
    
    cb1.procedure(&valorCb, &comissCb);
    
    cb2.procedure(&valorCb, &comissCb);
    
    cb3.procedure(&valorCb, &comissCb);
    
    ca1.procedure(&valorCa, &comissCa);
    
    ca2.procedure(&valorCa, &comissCa);
    
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
