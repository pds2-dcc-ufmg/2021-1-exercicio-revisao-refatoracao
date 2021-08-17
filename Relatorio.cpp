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
