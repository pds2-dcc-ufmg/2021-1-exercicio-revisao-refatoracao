#include "Casa.hpp"

Casa::Casa(){}

Casa::Casa(string corretor, double area, int quartos, int banheiros, int vagasnagaragem, double valorm2,
                        Cliente vendedor, double taxadecomissao):
                        Imovel(corretor, area,quartos,banheiros,vagasnagaragem,valorm2,vendedor),TaxaDeComissao(taxadecomissao){
                            this->C = this->comissao();
                            this->Valor = this->valor() + this->comissao();
                        };

Casa::~Casa(){}

double Casa::valor(){
    double v = this->getArea() * this->getValorm2();
    return v;
}

double Casa::comissao() {
    double c = this->getArea() * this->getValorm2();
    return c * this->getTaxadecomissao();  
}

double Casa::getTaxadecomissao(){
    return this->TaxaDeComissao;
}

void Casa::print() {
    std::cout << "[Casa]" << endl;
    Imovel::print();
    std::cout << "Area: " << this->getArea() << endl
            << "  Quartos: " << this->getQuartos() << endl
            << "  Banheiros: " << this->getBanheiros() << endl
            << "  Vagas: " << this->getVagasnagaragem() << endl
            << "Taxa de Comissão: " << 6 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << this->getC() << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << this->getValor() << endl;
}