#include "Casa.hpp"

using namespace std;

Casa::Casa(double area_imovel, int qtd_quartos, int qtd_banheiros, int qtd_vagas, double valor_m2, Cliente vendedor, string nome_corretor)
	:Imovel(area_imovel, qtd_quartos, qtd_banheiros, qtd_vagas, valor_m2, vendedor, nome_corretor, 0.06) {

}

void Casa::print() {
	std::cout << "[Casa]" << endl;
	Imovel::print();
}