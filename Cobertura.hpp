#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
    public:
        Cobertura();
        Cobertura(string _corretor, double _area, int _numero_quartos, int _numero_banheiros, int _vagas, 
                  double _valor, Cliente _vendedor, double _perc_comissao);

        //imprime todas as informacoes de venda da cobertura
        void print();
};

#endif