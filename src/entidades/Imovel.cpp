#include "Imovel.hpp"

int Imovel::qtdImoveis=0;

void Imovel::print() {
    std::cout << "[Vendedor]" << std::endl;
    vendedor.print();
    std::cout << "[Corretor]" << std::endl;
    std::cout << "  " + corretor << std::endl;
}

Imovel::Imovel(std::string Corretor, double Area, int Quartos, int Banheiros, int Vagas, double ValorM2, Cliente Vendedor, double percentComicao){
    qtdImoveis++;
    area = Area;
    quartos = Quartos;
    banheiros = Banheiros;
    vagasGaragem = Vagas;
    valorM2 = ValorM2;
    valorVenda = Area*ValorM2*(1+percentComicao);
    valorComicao = Area*ValorM2*percentComicao;
    corretor = Corretor;
    vendedor = Vendedor;
    COMICAO_PERCENT=percentComicao;
}

Imovel::Imovel(){
    qtdImoveis++;
    area = 0;
    quartos =  0;
    banheiros = 0;
    vagasGaragem = 0;
    valorM2 = 0;
    valorVenda = 0;
    valorComicao = 0;
    vendedor = Cliente();
    corretor = " ";
    COMICAO_PERCENT=0.0;
}

int Imovel::getQuartos(){
    return quartos;
}
int Imovel::getBanheiros(){
    return banheiros;
}
int Imovel::getVagasGaragem(){
    return vagasGaragem;
}
double Imovel::getArea(){
    return area;
}
double Imovel::getValorM2(){
    return valorM2;
}
double Imovel::getValorVenda(){
    return valorVenda;
}
double Imovel::getValorComicao(){
    return valorComicao;
}
double  Imovel::getComicaoPercent(){
    return COMICAO_PERCENT;
}