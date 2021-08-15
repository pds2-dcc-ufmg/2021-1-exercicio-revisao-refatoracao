#include "Utilitarios.hpp"

std::ostream& operator << (std::ostream &out, Imoveis::Imovel imovel) { 
    int porcentagem_comissao = imovel.taxa_comissao * 100;
    out << "[vendedor]" << std::endl
        << imovel._vendedor.print() << std::endl
        << "[Corretor]" << std::endl
        << "  " + imovel.get_corretor() << std::endl  
        << imovel.tipo_imovel << std::endl
        << "area: " << imovel.get_area() << std::endl
        << "quartos: " << imovel.get_quartos() << std::endl
        << "banheiros: " << imovel.get_banheiros() << std::endl
        << "vagas: " << imovel.get_vagas() << std::endl
        << "Taxa de Comissão: " << porcentagem_comissao << "%" << std::endl
        << "valor Comissão: R$ " << fixed << setprecision(2) << imovel.calcula_comissao() << std::endl
        << "valor de venda: R$ " << fixed << setprecision(2) << imovel.calcula_valor() << std::endl;

    return out;
}
