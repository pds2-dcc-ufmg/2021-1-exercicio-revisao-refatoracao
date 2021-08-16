#ifndef CARTORIO_HPP
#define CARTORIO_HPP

//Incluindo bibliotecas
#include <vector>

//Incluindo .hpp
#include "Apartamento.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"

//Namespace
using namespace std;

//Contrato .hpp
class Cartorio {
	protected:
        //Vetores que contém os imóveis registrados
        vector<Apartamento> apartamentos;
        vector<Casa> casas;
        vector<Cobertura> coberturas;

        //Atributos dos Apartamentos registrados
        int _quantidadeApartamentos = 0;
        double _valorTotalApartamentos = 0.0;
        double _comissaoTotalApartamentos = 0.0;

        //Atributos das Casas registradas
        int _quantidadeCasas = 0;
        double _valorTotalCasas = 0.0;
        double _comissaoTotalCasas = 0.0;

        //Atributos das Coberturas registradas
        int _quantidadeCoberturas = 0;
        double _valorTotalCoberturas = 0;
        double _comissaoTotalCoberturas = 0.0;


    public:
        //Construtor Padrão de Cartório
        Cartorio() = default;

        //Registrar um apartamento no cartório (coloca no vector específico e aumenta quantidade e valores)
        void registraApartamento(Apartamento apartamento);

        //Registrar uma casa no cartório (coloca no vector específico e aumenta quantidade e valores)
        void registraCasa(Casa casa);

        //Registrar uma cobertura no cartório (coloca no vector específico e aumenta quantidade e valores)
        void registraCobertura(Cobertura cobertura);

        //Imprime um relatório com as informações de cada imóvel
        void imprimeRelatorioDeImoveis();

        //Imprime um resumo geral com as informações do cartório acerca dos imóveis
        void imprimeResumoGeral();

};

#endif