#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>

#include "Cliente.hpp"

using namespace std;

class Imovel {
private:
	// Area do imovel em m2
	double area_imovel;

	// Quantidade de quartos do imovel
	int qtd_quartos;
	// Quantidade de banheiros do imovel
	int qtd_banheiros;
	// Quantidade de vagas na garagem do imovel
	int qtd_vagas;

	// Valor do m2 do imovel
	double valor_m2;
	// Valor da comissao
	double valor_comissao;
	// Valor total do imovel
	double valor_total_imovel;

	// Taxa de comissao para este imovel
	double taxa_comissao;

	// Cliente/Vendedor do imovel
	Cliente vendedor;
	// Nome do corretor responsavel
	string nome_corretor;

	// Calcula o valor total do imovel a partir da sua area e o valor do m2
	double calculoValor();
	// Calcula o valor da comissão do corretor a partir do valor total do imovel e a taxa de comissao do imovel
	double calculoComissao();

public:
	// Construtor da classe Imovel, recebe os dados relacionados ao imovel em especifico
	// Usado nas classes: Apartamento, Cobertura e Casa
	Imovel(double area_imovel, int qtd_quartos, int qtd_banheiros, int qtd_vagas, double valor_m2, Cliente vendedor, string nome_corretor, double taxa_comissao);

	// Retorna o valor total do imovel
	double valor();

	// Retorna o valor da comissao
	double comissao();

	// Imprime os dados relacionados ao imovel
	void print();
};

#endif