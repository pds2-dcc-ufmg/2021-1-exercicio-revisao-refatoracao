#include "Cobertura.hpp"

namespace Imovel {

    Cobertura::Cobertura(string corretor, double area, int quartos, int banheiros, int vagas, 
                        double  valor_por_metro_quadrado, Cliente vendedor) : 
                        Imovel(corretor, area, quartos, banheiros, vagas, valor_por_metro_quadrado, vendedor) {
        
        this->taxa_de_comissao_ = kTaxaComissao;
        this->valor_da_comissao_ = comissao();
        this->valor_de_venda_ = valor_da_comissao_ + valor();
        
    }

    void Cobertura::print() {

        std::cout << "[Cobertura]" << endl;
        Imovel::print();
    }

}