#include "Imovel.hpp"


void Imovel::setArea(double input){
    area = input;
}
void Imovel::setNumeroDeQuartos(int input){
    numeroDeQuartos = input;
}
void Imovel::setNumeroDeBanheiros(int input){
    numeroDeBanheiros = input;
}
void Imovel::setNumeroDeVagas(int input){
    numeroDeVagas = input;
}
void Imovel::setValorMetro(double input){
    valorMetro = input;
}


double Imovel::getArea(){
    return area;
}
int Imovel::getNumeroDeQuartos(){
    return numeroDeQuartos;
}
int Imovel::getNumeroDeBanheiros(){
    return numeroDeBanheiros;
}
int Imovel::getNumeroDeVagas(){
    return numeroDeVagas;
}
double Imovel::getValorMetro(){
    return valorMetro;
}
double Imovel::getComissao(){
    return comissao;
}
double Imovel::calculaComissao(){
    return (area * valorMetro) * getComissao();
}
double Imovel::getValorDeVenda(){
    return (area * valorMetro) * (1 + getComissao());
}


void Imovel::print() {
    cout << "[Vendedor]" << endl;
    vendedor.print();
    cout << "[Corretor]" << endl;
    cout << "  " + corretor << endl;
}


void Cobertura::print() {
    std::cout << "[Cobertura]" << endl;
    Imovel::print();
    std::cout << "area: " << area << endl
            << "  Quartos: " << numeroDeQuartos << endl
            << "  Banheiros: " << numeroDeBanheiros << endl
            << "  Vagas: " << numeroDeVagas << endl
            << "Taxa de Comissão: " << 10 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << getComissao() << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << getValorDeVenda() << endl;
}

void Casa::print() {
    std::cout << "[Casa]" << endl;
    Imovel::print();
    std::cout << "Area: " << area << endl
            << "  Quartos: " << numeroDeQuartos << endl
            << "  Banheiros: " << numeroDeBanheiros << endl
            << "  Vagas: " << numeroDeVagas << endl
            << "Taxa de Comissão: " << 6 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << getComissao() << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << getValorDeVenda() << endl;

}

void Apartamento::print() {
    std::cout << "[Apartamento]" << endl;
    Imovel::print();
    std::cout << "Area: " << area << endl
            << "  Quartos: " << numeroDeQuartos << endl
            << "  Banheiros: " << numeroDeBanheiros << endl
            << "  Vagas: " << numeroDeVagas << endl
            << "Taxa de Comissão: " << 4 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << getComissao() << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << getValorDeVenda() << endl;
}