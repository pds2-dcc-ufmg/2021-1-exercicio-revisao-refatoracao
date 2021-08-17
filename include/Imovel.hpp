#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    private:
        double area;
        int numQuartos;
        int numBanheiros;
        int numVagas;
        double valorMetroQuadrado;
        Cliente vendedor;
        string corretor;
    
    protected:
        int taxaComissao;
    
    public:
        Imovel(double _area,
               int _numQuartos,
               int _numBanheiros,
               int _numVagas,
               double _valorMetroQuadrado,
               Cliente _vendedor,
               string _corretor);
        double calculaValor();
        double calculaComissao();
        void imprimeInformacoes();
};

void imprimeResumo(string imovel, int quantidade, double valorTotal, double comissaoTotal);

#endif