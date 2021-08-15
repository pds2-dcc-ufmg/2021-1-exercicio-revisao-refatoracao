#include "ResumoGeral.hpp"

void ResumoGeral::QuantidadeImoveis(){
    Quantidade_Total_Imovel++;;
}

void ResumoGeral::ValorImovel(double valor_imovel){
    Valor_Total_Imoveis += valor_imovel;
}

void ResumoGeral::ComissaoImovel(double comissao){
    Comissao_Total_Imoveis += comissao;
}

void ResumoGeral::Print(){
    std::cout << "\n Quantidade: " << Quantidade_Total_Imovel
              << "\n Valor Total: R$ " << std::fixed << std::setprecision(2) << Valor_Total_Imoveis
              << "\n Comissão Total: R$ " << Comissao_Total_Imoveis << std::endl;
}
