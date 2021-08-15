#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"


using namespace std;

class Casa : public Imovel {

    public:
        Casa();
        Casa(string _corretor, double _area, int _numero_quartos, int _numero_banheiros, int _vagas, 
                    double _valor, Cliente _vendedor, double _perc_comissao);

        //imprime todas as informacoes de venda da casa
        void print();

};

#endif