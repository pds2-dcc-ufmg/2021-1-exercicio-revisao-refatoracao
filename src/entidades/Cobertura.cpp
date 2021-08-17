#include "Cobertura.hpp"

const double COBERTURA_PERCERT_COMICAO = 0.1;

int Cobertura::quantidadeCoberturas=0;
double Cobertura::somatorioValorCoberturas=0;
double Cobertura::somatorioComicaoCoberturas=0;

void Cobertura::print() {

    std::cout << "[Cobertura]" << std::endl;
    Imovel::print();
    std::cout << "Area: " << getArea() << std::endl
            << "  Quartos: " << getQuartos() << std::endl
            << "  Banheiros: " << getBanheiros() << std::endl
            << "  Vagas: " << getVagasGaragem() << std::endl
            << "Taxa de Comissão: " << (int)(COBERTURA_PERCERT_COMICAO*100) << "%" << std::endl
            << "Valor Comissão: R$ " << std::fixed << std::setprecision(2) << getValorComicao() << std::endl
            << "Valor de Venda: R$ " << std::fixed << std::setprecision(2) << getValorVenda() << std::endl;
}

int Cobertura::getQuantidadeCoberturas(){
    return quantidadeCoberturas;
 }
double Cobertura::getSomatorioValorCoberturas(){
    return  somatorioValorCoberturas;
}
double Cobertura::getSomatorioComicaoCoberturas(){
    return somatorioComicaoCoberturas;
}
Cobertura::Cobertura() : Imovel(){
    quantidadeCoberturas++;
};
Cobertura::Cobertura(std::string Corretor, double area, int quartos, int banheiros, int vagas, double valorM2, Cliente vendedor) : Imovel(Corretor, area, quartos, banheiros, vagas, valorM2, vendedor, COBERTURA_PERCERT_COMICAO){
    quantidadeCoberturas++;  
    somatorioValorCoberturas += area*valorM2; 
    somatorioComicaoCoberturas += getValorComicao();
};