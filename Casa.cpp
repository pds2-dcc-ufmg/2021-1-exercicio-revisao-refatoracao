#include <iostream>
#include <string>
#include "Casa.hpp"

Casa::Casa (const char *corretor,
 double AREA, 
 int Quartos, 
 int banheiros, 
 int Vagas, 
 double VALORm2, 
 Pessoa vendedor ) { 
        this->corretor = corretor;
        this->AREA = AREA;
        this->Quartos = Quartos;
	this->banheiros = banheiros;
        this->Vagas = Vagas;
        this->VALORm2 = VALORm2;
        this->comission = this->comissaoImovel();
        this->immobileValue = this->valorImovel() + comission;
        this->vendedor = vendedor;  
}

double Casa::valorImovel() {

        return AREA * VALORm2;

}

double Casa::comissaoImovel() {

        comissionRate = 0.06;

        return (AREA * VALORm2) * comissionRate;
        
}


void Casa::print() {

        std::cout << "[Casa]" << endl;
        Imovel::print();
        std::cout << "Area: " << AREA << endl
                << "  Quartos: " << Quartos << endl
                << "  Banheiros: " << banheiros << endl
                << "  Vagas: " << Vagas << endl
                << "Taxa de Comissão: " << 6 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << comission << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << immobileValue << endl;

}