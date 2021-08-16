#ifndef IMOVEL_HPP
#define IMOVEL_HPP

//Incluindo bibliotecas
#include <iostream>
#include <iomanip>

//Incluindo .hpp
#include "Cliente.hpp"

//Namespace
using namespace std;

//Contrato .hpp
class Imovel {
    public:
        //Atributos do Imóvel
        double _area;
        int _quartos;
        int _banheiros;
        int _vagas;
        double _valorMetroQuadrado;
        Cliente _vendedor;
        string _corretor;

        //Construtor de Imóvel
        Imovel(double area, int quartos, int banheiros, 
                int vagas, double valorMetroQuadrado, 
                Cliente vendedor, string corretor);

        //Calcula o valor do Imóvel
        double calculaValorImovel();

        //Imprime as informações do Imóvel
        void print();
};

#endif