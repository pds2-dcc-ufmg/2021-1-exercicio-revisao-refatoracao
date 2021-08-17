#include "Casa.hpp"

Casa::Casa(string _corretor, double a, int q, int b, int v, double _valorm2, Cliente _vendedor):Imovel(_corretor, a, q, b, v, _valorm2, _vendedor){
	valorComissao = comissao();
	Valor = valor() + comissao();
}

double Casa::valor(){
	return AREA * VALORm2;
}

double Casa::comissao(){
    return AREA * VALORm2 * txComissaoCasa;
}

void Casa::print() {
  std::cout << "[Casa]" << endl;
  Imovel::print();
  std::cout << "Area: " << AREA << endl
          << "  Quartos: " << NUM_QUARTOS << endl
          << "  Banheiros: " << NUM_BANHEIROS << endl
          << "  Vagas: " << NUM_VAGAS << endl
          << "Taxa de Comissão: " << 6 << "%" << endl
          << "Valor Comissão: R$ " << fixed << setprecision(2) << valorComissao << endl
          << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
}