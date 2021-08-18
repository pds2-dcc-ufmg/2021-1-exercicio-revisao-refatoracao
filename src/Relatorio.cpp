#include "Relatorio.hpp"
#include <iostream>

void Relatorio::addAp(Apartamento ap){
    apartamentos.push_back(ap);
};

void Relatorio::addCb(Cobertura cb){
    coberturas.push_back(cb);
}

void Relatorio::addCa(Casa ca){
    casas.push_back(ca);
}

/*Metodos que manipulam as listas e retornam informacoes do conjunto*/
/*APARTAMENTOS*/
double Relatorio::valorTotalAp(){
    double total = 0;

    for(list<Apartamento>::iterator it=apartamentos.begin(); it!=apartamentos.end(); ++it){
        total += it->valor();
    }

    return total;
}

double Relatorio::comissaoTotalAp(){
    double total = 0;

    for(list<Apartamento>::iterator it=apartamentos.begin(); it!=apartamentos.end(); ++it){
        total += it->comissao();
    }

    return total;
}

int Relatorio::qtAp(){
    return apartamentos.size();
}

/*COBERTURAS*/
double Relatorio::valorTotalCb(){
    double total = 0;

    for(list<Cobertura>::iterator it=coberturas.begin(); it!=coberturas.end(); ++it){
        total += it->valor();
    }

    return total;
}

double Relatorio::comissaoTotalCb(){
    double total = 0;

    for(list<Cobertura>::iterator it=coberturas.begin(); it!=coberturas.end(); ++it){
        total += it->comissao();
    }
    return total;
}

int Relatorio::qtCb(){
    return coberturas.size();
}

/*CASAS*/
double Relatorio::valorTotalCasa(){
    double total = 0;

    for(list<Casa>::iterator it=casas.begin(); it!=casas.end(); ++it){
        total += it->valor();
    }

    return total;
}

double Relatorio::comissaoTotalCasa(){
    double total = 0;

    for(list<Casa>::iterator it=casas.begin(); it!=casas.end(); ++it){
        total += it->comissao();
    }

    return total;
}

int Relatorio::qtCasa(){
    return casas.size();
}

/*Metodos para imprimir o relatorio*/
void Relatorio::printRelatorio(){

    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    //Imprime apartamentos
    for(list<Apartamento>::iterator it=apartamentos.begin(); it!=apartamentos.end(); ++it){
        it->print();
        std::cout << endl;
    }

    //Imprime coberturas
    for(list<Cobertura>::iterator it=coberturas.begin(); it!=coberturas.end(); ++it){
        it->print();
        std::cout << endl;
    }

    //Imprime casas
    for(list<Casa>::iterator it=casas.begin(); it!=casas.end(); ++it){
        it->print();
        std::cout << endl;
    }

    std::cout << "\n>> Resumo Geral <<" << endl;

    std::cout << "\n>>Apartamentos<<\n"
            << "\n Quantidade: " << qtAp()
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorTotalAp()
            << "\n Comissão Total: R$" <<  fixed << setprecision(2) << comissaoTotalAp()
            << endl
            << "\n>>Coberturas<<\n"
            << "\n Quantidade: " << qtCb()
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorTotalCb()
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissaoTotalCb()
            << endl
            << "\n>>Casas<<\n"
            << "\n Quantidade: " << qtCasa()
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorTotalCasa()
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissaoTotalCasa()
            << endl;
}