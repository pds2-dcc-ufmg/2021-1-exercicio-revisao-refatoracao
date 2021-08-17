#include <iostream>
#include <stdlib>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

int main() {
    std::vector<Cliente> Clientes;
    std::vector<Apartamento> Apartamentos;
    std::vector<Cobertura> Coberturas;
    std::vector<Casa> Casas;
    
    Cliente Cliente1=Cliente("Xayso Sovon Ziahaka","Rua Xangrilá - Braúnas","Belo Horizonte","MG","31365-570","3196007958");
    
    Cliente Cliente2=Cliente("Minia Pasies Kituos","Rua dos Jacobinos - Ouro Minas","Belo Horizonte","MG","31870-290","3197627067");
    
    Cliente Cliente3=Cliente("Vuocue Leiur Baonauza","Rua Orminda de Almeida - Tupi B","Belo Horizonte","MG","31842-630","3195949327");
    
    Cliente Cliente4=Cliente("Zerer Huduy Fyogar","Rua Taquaril - Jonas Veiga","Belo Horizonte","MG","30285-422","3198596327");

    Cliente Cliente5=Cliente("Ceziel Mioti Pler","Rua João Gualberto Costa - Serrano","Belo Horizonte","MG","30882-747","3196274465");
    
    Cliente Cliente6=Cliente("Esxo Cilal Zyais","Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)","Belo Horizonte","MG","31650-560","3195004414");
    
    Cliente Cliente7=Cliente("Leova Wikyecil Neaca","Rua João Arantes - Cidade Nova","Belo Horizonte","MG","31170-240","3198461192");
    
    Cliente Cliente8=Cliente("Teas Heimeu Pipe","Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)","Belo Horizonte","MG","30668-430","3197317802");

    Apartamento Apartamento1=Apartamento(55.4,2,1,0,987.0,"Tuoruars",Cliente1);
    Apartamentos.push_back(Apartamento1);

    Apartamento Apartamento2=Apartamento(74.5,2,1,2,1540.0,"Fyubyeis",Cliente2);
    Apartamentos.push_back(Apartamento2);

    Apartamento Apartamento3=Apartamento(87.2,3,2,2,2354.0,"Kelia",Cliente3);
    Apartamentos.push_back(Apartamento3);

    // Cobertura
    Cobertura Cobertura1=Cobertura(120.1,3,3,2,3123.5,"Koci",Cliente4);
    Coberturas.push_back(Cobertura1);
    
    Cobertura Cobertura2=Cobertura(134.8,4,3,3,3578.2,"Wail",Cliente5);
    Coberturas.push_back(Cobertura2);

    Cobertura Cobertura3=Cobertura(180.0,4,4,4,4165.7,"Fival",Cliente6);
    Coberturas.push_back(Cobertura3);

    // Casas
    Casa Casa1=Casa(145.6,3,3,2,4023.6,"Beydo",Cliente7);
    Casas.push_back(Casa1);

    Casa Casa2=Casa(245.0,5,4,4,4856.2,"Riuzi",Cliente8);
    Casas.push_back(Casa2);

    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    double ValorApartamentos = 0.0;
    double ValorCoberturas = 0.0;
    double ValorCasas = 0.0;
    double ComissaoApartamentos = 0.0;
    double ComissaoCoberturas = 0.0;
    double ComissaoCasas = 0.0;
    
    std::Vector<Apartamento>::iterator ItApartamentos=Apartamentos.begin();
    
    for(;ItApartamentos!=Apartamentos.end();ItApartamentos++){
        ItApartamentos->print();
        std::cout<<endl;
    }
    
    std::Vector<Cobertura>::iterator ItCoberturas=Coberturas.begin();
    
    for(;ItCobertura!=Coberturas.end();ItCobertura++){
        ItCobertura->print();
        std::cout<<endl;
    }
    
    std::Vector<Casa>::iterador ItCasas=Casas.begin();
    
    for(;ItCasas!=Casas.end();ItCasas++){
        ItCasas->print();
        std::cout<<endl;
    }

    std::cout << "\n>> Resumo Geral <<" << endl;

    std::cout << "\n>>Apartamentos<<\n"
            << "\n Quantidade: " << Apartamentos.size();
            << "\n Valor Total: R$ " << fixed << setprecision(2) << Apartamento::ValorTotal
            << "\n Comissão Total: R$" << Apartamento::ComissaoTotal;
            << endl
            << "\n>>Coberturas<<\n"
            << "\n Quantidade: " << Coberturas.size()
            << "\n Valor Total: R$ " << fixed << setprecision(2) << Cobertura::ValorTotal
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << Cobertura::ComissaoTotal
            << endl
            << "\n>>Casas<<\n"
            << "\n Quantidade: " << Casas.size()
            << "\n Valor Total: R$ " << fixed << setprecision(2) << Casas::ValorTotal
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << Casas::ComissaoTotal
            << endl;
}
    
