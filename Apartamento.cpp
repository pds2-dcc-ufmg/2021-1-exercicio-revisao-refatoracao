#include "Apartamento.hpp"

Apartamento::Apartamento(string corret, double a, int q, int b, int v, double valorm2, Cliente vended):Imovel(corret, a, q, b, v, valorm2, vended){
	valorComissao = comissao();
	Valor = valor() + comissao();
}

double Apartamento::valor(){
	return AREA * VALORm2;
}

double Apartamento::comissao(){
	return AREA * VALORm2 * txComissaoApartamento; 
}

void Apartamento::print() {
	std::cout << "[Apartamento]" << endl;
	Imovel::print();
	std::cout << "Area: " << AREA << endl
			<< "  Quartos: " << NUM_QUARTOS << endl
			<< "  Banheiros: " << NUM_BANHEIROS << endl
			<< "  Vagas: " << NUM_VAGAS << endl
			<< "Taxa de Comissão: " << 4 << "%" << endl
			<< "Valor Comissão: R$ " << fixed << setprecision(2) << valorComissao << endl
			<< "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
}