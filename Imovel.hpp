#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Pessoa.hpp"

using namespace std;

class Imovel {
    
    private:

        string tipo_imovel;
        double area;
        int num_quartos;
        int num_banheiros;
        int num_vagas;

        double taxa_de_comissao;
        double valor_metro_quadrado;

        Pessoa vendedor;
        string corretor;
        

    public:

        Imovel(string _tipo_imovel, double _area, int _num_quartos, int _num_banheiros, int _num_vagas, double _valor_metro_quadrado, Pessoa _vendedor, string _corretor, double _taxa_de_comissao);

        double valor_do_imovel(); 
        
        double valor_da_comissao(); 

        void imprime_informacoes_venda(); 
};

#endif