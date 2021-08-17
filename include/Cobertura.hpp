#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

class Cobertura : public Imovel {
    
    public:
        void print();
        static int getQuantidadeCoberturas();
        static double getSomatorioValorCoberturas();
        static double getSomatorioComicaoCoberturas();
        Cobertura();
        Cobertura(std::string Corretor, double area, int quartos, int banheiros, int vagas, double valorM2, Cliente vendedor);
    private:
        static int quantidadeCoberturas;
        static double somatorioValorCoberturas;
        static double somatorioComicaoCoberturas;
    
};

#endif