#include "Apartamento.hpp"

const double APARTAMENTO_PERCERT_CONDICAO = 0.04;

int Apartamento::quantidadeApartamentos=0;
double Apartamento::somatorioValorApartamentos=0;
double Apartamento::somatorioComicaoApartamentos=0;

void Apartamento::print() {

    std::cout << "[Apartamento]" << std::endl;
    Imovel::print();
    std::cout << "Area: " << getArea() << std::endl
            << "  Quartos: " << getQuartos() << std::endl
            << "  Banheiros: " << getBanheiros() << std::endl
            << "  Vagas: " << getVagasGaragem() << std::endl
            << "Taxa de Comissão: " << (int)(APARTAMENTO_PERCERT_CONDICAO*100)<< "%" << std::endl
            << "Valor Comissão: R$ " << std::fixed << std::setprecision(2) << getValorComicao() << std::endl
            << "Valor de Venda: R$ " << std::fixed << std::setprecision(2) << getValorVenda() << std::endl;
}
int Apartamento::getQuantidadeApartamentos(){
    return quantidadeApartamentos;
}
double Apartamento::getSomatorioValorApartamentos(){
    return  somatorioValorApartamentos;
}
double Apartamento::getSomatorioComicaoApartamentos(){
    return somatorioComicaoApartamentos;
}
Apartamento::Apartamento():Imovel(){
    quantidadeApartamentos++;
};
Apartamento::Apartamento(std::string Corretor, double area, int quartos, int banheiros, int vagas, double valorM2, Cliente vendedor) : Imovel(Corretor, area, quartos, banheiros, vagas, valorM2, vendedor, APARTAMENTO_PERCERT_CONDICAO){
    quantidadeApartamentos++;
    somatorioValorApartamentos += area*valorM2;
    somatorioComicaoApartamentos += getValorComicao();
};
