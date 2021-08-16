#include "Imovel.hpp"

Imovel::Imovel() {}

void Imovel::setCorretor(std::string Corretor) {
    this -> Corretor = Corretor;
}
std::string Imovel::getCorretor() {
	return Corretor;
}

void Imovel::setArea(double area) {
    this -> Area = area;
}
double Imovel::getArea() {
    return Area;
}

void Imovel::setQuartos(int quartos) {
    this -> Quartos = quartos;
}
int Imovel::getQuartos() {
    return Quartos;
}

void Imovel::setBanheiros(int Banheiro) {
    this -> Banheiros = Banheiro;
}
int Imovel::getBanheiros() {
	return Banheiros;
}

void Imovel::setVagas(int vaga) {
    this -> Vagas = vaga;
}
int Imovel::getVagas() {
    return Vagas;
}

void Imovel::setValorm2(double valorm2) {
    this -> Valorm2 = valorm2;

}
double Imovel::getValorm2() {
    return Valorm2;
}

void Imovel::setInfosCliente(Cliente InfosCliente) {
    this -> InfosCliente = InfosCliente;
} 
Cliente Imovel::getInfosCliente() {
    return InfosCliente;    
} 

double Imovel::getValorComissao() {
    return Comissao;
}

double Imovel::getValorVenda() {
    return PrecoVenda;
}

Imovel::~Imovel() {}