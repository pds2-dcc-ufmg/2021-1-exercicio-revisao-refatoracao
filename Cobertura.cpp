#include "Cobertura.hpp"

Cobertura::Cobertura(string _corretor, double a, int q, int b, int v, double _valorm2, Cliente _vendedor):Imovel(_corretor, a, q, b, v, _valorm2, _vendedor){
	valorComissao = comissao();
	Valor = valor() + comissao();
}

double Cobertura::valor(){
	return AREA * VALORm2;
}

double Cobertura::comissao(){
	return AREA * VALORm2 * txComissaoCobertura;
}

void Cobertura::print() {
	std::cout << "[Cobertura]" << endl;
	Imovel::print();
	std::cout << "Area: " << AREA << endl
			<< "  Quartos: " << NUM_QUARTOS << endl
			<< "  Banheiros: " << NUM_BANHEIROS << endl
			<< "  Vagas: " << NUM_VAGAS << endl
			<< "Taxa de Comissão: " << 10 << "%" << endl
			<< "Valor Comissão: R$ " << fixed << setprecision(2) << valorComissao << endl
			<< "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
}