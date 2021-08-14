#if !defined(RELATORIO_HPP)
#define RELATORIO_HPP

#include <iostream>
#include <vector>

#include "Apartamento.hpp"
#include "Cobertura.hpp"
#include "Casa.hpp"

class Relatorio {
    private:
        std::vector<Apartamento> _apartamentos;
        std::vector<Cobertura> _coberturas;
        std::vector<Casa> _casas;

        double _valor_total_apartamentos = 0;
        double _comissao_total_apartamentos = 0;

        double _valor_total_coberturas = 0;
        double _comissao_total_coberturas = 0;

        double _valor_total_casas = 0;
        double _comissao_total_casas = 0;

    public:
        Relatorio() {}

        void add_venda_apartamento(Apartamento apt);

        void add_venda_cobertura(Cobertura cob);

        void add_venda_casa(Casa casa);

        void mostra_apartamentos_vendidos();

        void mostra_coberturas_vendidas();

        void mostra_casas_vendidas();

        void mostra_cabecalho();
        
        void resumo_geral();
};

#endif // RELATORIO_HPP
