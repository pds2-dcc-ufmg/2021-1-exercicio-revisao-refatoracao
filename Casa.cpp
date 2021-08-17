#include "Casa.hpp"

double Casa::valor(){
	double v = AREA * VALOR_m2;
	return v;
}

double Casa::comissao(){
    double c = AREA * VALOR_m2;
    return c * COMISSAO_CASA_TAXA;
}

void Casa::print() {
    std::cout << "[Casa]" << endl;
    Imovel::print();
    std::cout << "Area: " << AREA << endl
            << "  Quartos: " << Q << endl
            << "  Banheiros: " << B << endl
            << "  Vagas: " << V << endl
            << "Taxa de Comissão: " << (int)COMISSAO_CASA_PERCENT << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << C << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << VALOR << endl;
}

Casa::Casa(string corret,double a, int q, int b, int v, double valorm2,Cliente vended) : Imovel(corret,a,q,b,v,valorm2,vended){
	C=this->comissao();
	VALOR = this->valor()+this->comissao();
}