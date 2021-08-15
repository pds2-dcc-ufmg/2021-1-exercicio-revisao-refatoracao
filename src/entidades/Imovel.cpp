#include <iostream>
#include <iomanip>

#include "Imovel.hpp"

using namespace std;

Imovel::Imovel(double area_imovel, int qtd_quartos, int qtd_banheiros, int qtd_vagas, double valor_m2, Cliente vendedor, string nome_corretor, double taxa_comissao):
area_imovel(area_imovel), qtd_quartos(qtd_quartos), qtd_banheiros(qtd_banheiros), qtd_vagas(qtd_vagas), valor_m2(valor_m2), vendedor(vendedor), nome_corretor(nome_corretor), taxa_comissao(taxa_comissao){
	valor_total_imovel = calculoValor();
	valor_comissao = calculoComissao();
}

double Imovel::calculoValor() {
	return (area_imovel * valor_m2);
}

double Imovel::calculoComissao() {
	return (valor_total_imovel * taxa_comissao);
}

double Imovel::valor() {
	return valor_total_imovel;
}

double Imovel::comissao() {
	return valor_comissao;
}

void Imovel::print() {
	std::cout << "Area: " << area_imovel << endl
		<< "  Quartos: " << qtd_quartos << endl
		<< "  Banheiros: " << qtd_banheiros << endl
		<< "  Vagas: " << qtd_vagas << endl
		<< "Taxa de Comissão: " << (taxa_comissao * 100) << "%" << endl
		<< "Valor Comissão: R$ " << fixed << setprecision(2) << valor_comissao << endl
		<< "Valor de Venda: R$ " << fixed << setprecision(2) << valor_total_imovel << endl;

	cout << "[Vendedor]" << endl;
	vendedor.print();

	cout << "[Corretor]" << endl;
	cout << "  " + nome_corretor << endl;
}