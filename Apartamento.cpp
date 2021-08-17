#include "Apartamento.hpp"

double Apartamento::valor(){
	double v = AREA * VALOR_m2;
	return v;
}
double Apartamento::comissao(){
	double c = AREA * VALOR_m2;
	return (c*COMISSAO_APARTAMENTO_TAXA); 
}
void Apartamento::print() {
	std::cout << "[Apartamento]" << endl;
	Imovel::print();
	std::cout << "Area: " << AREA << endl
			<< "  Quartos: " << Q << endl
			<< "  Banheiros: " << B << endl
			<< "  Vagas: " << V << endl
			<< "Taxa de Comissão: " << (int)COMISSAO_APARTAMENTO_PERCENT << "%" << endl
			<< "Valor Comissão: R$ " << fixed << setprecision(2) << C << endl
			<< "Valor de Venda: R$ " << fixed << setprecision(2) << VALOR << endl;
}

Apartamento::Apartamento(string corret,double a, int q, int b, int v, double valorm2,Cliente vended) : Imovel(corret,a,q,b,v,valorm2,vended){
	C=this->comissao();
	VALOR = this->valor()+this->comissao();
}