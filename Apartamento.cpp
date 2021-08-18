#include "Apartamento.hpp"

Apartamento::Apartamento(string _corretor, double _AREA, int _Quartos, int _Banheiros, int _Vagas, double _VALORm2, Cliente _vendedor){

        corretor = _corretor; 
        AREA = _AREA; 
        Qnt_Quartos = _Quartos;
        Qnt_Banheiros = _Banheiros; 
        Qnt_Vagas = _Vagas;
        VALORm2 = _VALORm2;
        vendedor = _vendedor; 
        Valor_Comissao = comissao();
        Valor = valor() + comissao();
    }

double Apartamento::valor(){
	return AREA * VALORm2;
}

double Apartamento::comissao(){
	return valor() * Perc_Comissao_Ap; 
}

void Apartamento::print() {
	std::cout << "[Apartamento]" << endl;
	Imovel::print();
	std::cout << "Area: " << AREA << endl
			<< "  Quartos: " << Qnt_Quartos << endl
			<< "  Banheiros: " << Qnt_Banheiros << endl
			<< "  Vagas: " << Qnt_Vagas << endl
			<< "Taxa de Comissão: " << (Perc_Comissao_Ap*100) << "%" << endl
			<< "Valor Comissão: R$ " << fixed << setprecision(2) << Valor_Comissao << endl
			<< "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
} 


