#include "Imovel.hpp"

void Imovel::Contrato(std::string corretor, Cliente vendedor){
    Vendedor = vendedor;
    Corretor = corretor;
}

void Imovel::imovel(double AreaImovel, int quarto, int banheiro, int vagas_disponiveis, double MetroQuadrado){
    AreaDoImovel = AreaImovel;
    ValorMetroQuadrado = MetroQuadrado;
    Quarto = quarto;
    Banheiro = banheiro;
    VagasDisponiveis = vagas_disponiveis;
}

void Imovel::print(){
    std::cout << "[Vendedor]" << std::endl;
    Vendedor.print();
    std::cout << "[Corretor]" << "\n"
              << "  " + Corretor << "\n"
              << "Area: " << AreaDoImovel << "\n"
              << "  Quartos: " << Quarto << "\n"
              << "  Banheiros: " << Banheiro << "\n"
              << "  Vagas: " << VagasDisponiveis << std::endl;
}

double Imovel::ValorDoImovel(){
    return AreaDoImovel * ValorMetroQuadrado;
}
