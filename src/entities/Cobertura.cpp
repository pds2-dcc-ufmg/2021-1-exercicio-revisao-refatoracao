#include "Cobertura.hpp"

Cobertura::Cobertura(){}

Cobertura::Cobertura(string corretor, double area, int quartos, int banheiros, int vagasnagaragem, double valorm2,
                        Cliente vendedor, double taxadecomissao):
                        Imovel(corretor, area,quartos,banheiros,vagasnagaragem,valorm2,vendedor),TaxaDeComissao(taxadecomissao){
                            this->C = this->comissao();
                            this->Valor = this->valor() + this->comissao();
                        };


Cobertura::~Cobertura(){}

double Cobertura::valor() {

        double v = this->getArea() * this->getValorm2();

        return v;
}

double Cobertura::comissao() {

        double c = this->getArea() * this->getValorm2();

        return c * this->getTaxadecomissao();
        
}

 void Cobertura::print() {

        std::cout << "[Cobertura]" << endl;
        Imovel::print();
        std::cout << "Area: " << this->getArea() << endl
                << "  Quartos: " << this->getQuartos() << endl
                << "  Banheiros: " << this->getBanheiros() << endl
                << "  Vagas: " << this->getVagasnagaragem() << endl
                << "Taxa de Comissão: " << 10 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << this->getC() << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << this->getValor() << endl;
}

double Cobertura::getTaxadecomissao(){
    return this->TaxaDeComissao;
}