#include "Imovel.hpp"

Imovel::Imovel(){}

Imovel::Imovel(string corretor, double area, int quartos, int banheiros, int vagasnagaragem, double valorm2, Cliente vendedor):
            corretor(corretor),AREA(area),Quartos(quartos),Banheiros(banheiros), VagasNaGaragem(vagasnagaragem),VALORm2(valorm2), vendedor(vendedor){};
Imovel::~Imovel(){}

void Imovel::print() {
            std::cout << "[Vendedor]" << endl;
            vendedor.print();
            std::cout << "[Corretor]" << endl;
            std::cout << "  " + corretor << endl;
}

double Imovel::getArea(){
    return this->AREA;
}
int Imovel::getQuartos(){
    return this->Quartos;
}
int Imovel::getBanheiros(){
    return this->Banheiros;
}
int Imovel::getVagasnagaragem(){
    return this->VagasNaGaragem;
}
double Imovel::getValorm2(){
    return this->VALORm2;
}
double Imovel::getValor(){
    return this->Valor;
}
double Imovel::getC(){
    return this->C;
}
Cliente Imovel::getVendedor(){
    return this->vendedor;
}
string Imovel::getCorretor(){
    return this->corretor;
}