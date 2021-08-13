#include <iostream>
#include <string>
#include "Cobertura.hpp"

Cobertura::Cobertura (const char *corretor,
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


double Cobertura::valorImovel() {

        return AREA * VALORm2;

}

double Cobertura::comissaoImovel() {

        comissionRate = 0.10;

        return (AREA * VALORm2) * comissionRate;
        
}


void Cobertura::print() {

      std::cout << "[Cobertura]" << endl;
        Imovel::print();
        std::cout << "Area: " << AREA << endl
                << "  Quartos: " << Quartos << endl
                << "  Banheiros: " << banheiros << endl
                << "  Vagas: " << Vagas << endl
                << "Taxa de Comissão: " << 10 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << comission << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << immobileValue << endl;
}