#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

class Casa : public Imovel {

    public:
        void print();
        static int getQuantidadeCasas();
        static double getSomatorioValorCasas();
        static double getSomatorioComicaoCasas();
        Casa();
        Casa(std::string Corretor, double area, int quartos, int banheiros, int vagas, double valorM2, Cliente vendedor);
    private:
        static int quantidadeCasas;
        static double somatorioValorCasas;
        static double somatorioComicaoCasas;
};

#endif