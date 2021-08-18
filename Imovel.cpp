#include "Imovel.hpp"

Imovel::Imovel(double area, int quartos, int banheiros, int vagas, double valorm2, Cliente *vendedor, string corretor){
	this->area = area;
	this->quartos = quartos;
	this->banheiros = banheiros;
	this->vagas = vagas;
	this->valorm2 = valorm2;
	this->vendedor = vendedor;
	this->corretor = std::move(corretor);
	this->valorTotal = valorm2 * area;
}

void Imovel::print() const {
	cout << "[Vendedor]" << endl;
	vendedor->print();
	cout << "[Corretor]" << endl;
	cout << "  " + corretor << endl
	<< "Area: " << area << endl
	<< "  Quartos: " << quartos << endl
	<< "  Banheiros: " << banheiros << endl
	<< "  Vagas: " << vagas << endl
	<< "Taxa de Comissão: " << 6 << "%" << endl
	<< "valorVenda Comissão: R$ " << fixed << setprecision(2) << valorComissao << endl
	<< "valorVenda de Venda: R$ " << fixed << setprecision(2) << valorVenda << endl;
}
