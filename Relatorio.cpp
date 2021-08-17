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