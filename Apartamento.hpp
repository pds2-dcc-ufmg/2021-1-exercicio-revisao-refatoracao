#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {
    public: 
        Apartamento();
        Apartamento(string _corretor, double _area, int _numero_quartos, int _numero_banheiros, int _vagas, 
                    double _valor, Cliente _vendedor, double perc_comissao);

        //imprime todas as informacoes de venda do apartamento
        void print();
};

#endif