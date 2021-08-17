#include "Imovel.hpp"

void Imovel::print() {
	cout << "[Vendedor]" << endl;
	vendedor.print();
	cout << "[Corretor]" << endl;
	cout << "  " + corretor << endl;
}

Imovel::Imovel(string _corretor, double a, int q, int b, int v, double _valorm2, Cliente _vendedor){
	corretor = _corretor;
	AREA = a;
	NUM_QUARTOS = q;
	NUM_BANHEIROS = b;
	NUM_VAGAS = v;
	VALORm2 = _valorm2;
	vendedor = _vendedor;
}