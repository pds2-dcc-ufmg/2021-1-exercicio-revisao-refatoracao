#ifndef CARTORIO_HPP
#define CARTORIO_HPP

//Incluindo bibliotecas
#include <iostream>

//Incluindo .hpp
#include "Apartamento.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"

//Namespace
using namespace std;

//Contrato .hpp
class Cartorio {
	protected:
        //Atributos dos Apartamentos registrados
        int quantidadeApartamentos = 0;
        double valorTotalApartamentos = 0.0;
        double comissaoApartamentos = 0.0;

        //Atributos das Casas registradas
        int quantidadeCasas = 0;
        double valorTotalCasas = 0.0;
        double comissaoCasas = 0.0;

        //Atributos das Coberturas registradas
        int quantidadeCoberturas = 0;
        double valorTotalCoberturas = 0;
        double comissaoCoberturas = 0.0;


    public:
        //Construtor Cartório
        Cartorio();

        //Registrar um apartamento no cartório (aumenta quantidade e valores)
        void RegistraApartamento(Apartamento apartamento);

        //Registrar uma casa no cartório (aumenta quantidade e valores)
        void RegistraCasa(Casa casa);

        //Registrar uma cobertura no cartório (aumenta quantidade e valores)
        void RegistraCobertura(Cobertura cobertura);

};

#endif