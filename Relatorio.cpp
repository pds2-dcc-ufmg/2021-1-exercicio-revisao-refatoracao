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