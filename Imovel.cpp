#include "Imovel.hpp"


void Imovel::print() {
	cout << "[Vendedor]" << endl;
	VENDEDOR.print();
	cout << "[Corretor]" << endl;
	cout << "  " + CORRETOR << endl;
}

Imovel::Imovel(string corret,double a, int q, int b, int v, double valorm2,Cliente vended){
	CORRETOR = corret;
	AREA = a;
	Q = q;
	B = b;
	V = v;
	VALOR_m2 = valorm2;
	VENDEDOR = vended;
}