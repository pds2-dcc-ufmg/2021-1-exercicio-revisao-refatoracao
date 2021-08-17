#include "Casa.hpp"

const double CASA_PERCERT_CONDICAO = 0.06;

int Casa::quantidadeCasas=0;
double Casa::somatorioValorCasas=0;
double Casa::somatorioComicaoCasas=0;

void Casa::print(){

    std::cout << "[Casa]" << std::endl;
    Imovel::print();
    std::cout << "Area: " << getArea() << std::endl
            << "  Quartos: " << getQuartos() << std::endl
            << "  Banheiros: " << getBanheiros() << std::endl
            << "  Vagas: " << getVagasGaragem() << std::endl
            << "Taxa de Comissão: " << (int)(CASA_PERCERT_CONDICAO*100) << "%" << std::endl
            << "Valor Comissão: R$ " << std::fixed << std::setprecision(2) << getValorComicao() << std::endl
            << "Valor de Venda: R$ " << std::fixed << std::setprecision(2) << getValorVenda() << std::endl;
}

int Casa::getQuantidadeCasas(){
    return quantidadeCasas;
}
double Casa::getSomatorioValorCasas(){
    return  somatorioValorCasas;
}
double Casa::getSomatorioComicaoCasas(){
    return somatorioComicaoCasas;

}

Casa::Casa() : Imovel(){
    quantidadeCasas++; 
};
Casa::Casa(std::string Corretor, double area, int quartos, int banheiros, int vagas, double valorM2, Cliente vendedor) : Imovel(Corretor, area, quartos, banheiros, vagas, valorM2, vendedor, CASA_PERCERT_CONDICAO){
    quantidadeCasas++;
    somatorioValorCasas += area*valorM2;
    somatorioComicaoCasas += getValorComicao();
};
