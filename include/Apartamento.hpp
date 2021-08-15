#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {
public:
    // Construtor da classe Apartamento, recebe os dados relacionados ao apartamento em especifico
    Apartamento(double area_imovel, int qtd_quartos, int qtd_banheiros, int qtd_vagas, double valor_m2, Cliente vendedor, string nome_corretor);

    // Imprime os dados relacionados ao apartamento
    void print();
};

#endif