#ifndef RELATORIO_HPP
#define RELATORIO_HPP

#include "Apartamento.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include <list>

class Relatorio{

    private:

    /*Listas para juntar os imoveis de cada tipo*/
    std::list<Apartamento> apartamentos;
    std::list<Cobertura> coberturas;
    std::list<Casa> casas;

    public:

    /*Metodos para adicionar nas listas*/
    void addAp(Apartamento ap);
    void addCb(Cobertura cb);
    void addCa(Casa ca);

    /*Metodos que manipulam as listas e retornam informacoes do conjunto*/
    double valorTotalAp();
    double comissaoTotalAp();
    int qtAp();

    double valorTotalCb();
    double comissaoTotalCb();
    int qtCb();

    double valorTotalCasa();
    double comissaoTotalCasa();
    int qtCasa();

    /*Metodos para imprimir o relatorio*/
    void printRelatorio();
};


#endif