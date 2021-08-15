#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {
public:
    // Construtor da classe Casa, recebe os dados relacionados a casa em especifico
    Casa(double area_imovel, int qtd_quartos, int qtd_banheiros, int qtd_vagas, double valor_m2, Cliente vendedor, string nome_corretor);

    // Imprime os dados relacionados a casa
    void print();
};

#endif