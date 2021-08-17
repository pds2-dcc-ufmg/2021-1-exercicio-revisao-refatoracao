#include "Cobertura.hpp"




double Cobertura::valor(){

    double ValorCobertura = AREA * VALORm2;

        return ValorCobertura;
}




double Cobertura::get_taxa_cobertura(){

    return(this->taxa_cobertura);

}




double Cobertura::comissao(){

    double comissao_cobertura = AREA * VALORm2;
    return comissao_cobertura * this->get_taxa_cobertura();
}




void Cobertura::print(){

    std::cout << "[Cobertura]" << endl;
        Imovel::print();
        std::cout << "Area: " << AREA << endl
                << "  Quartos: " << num_quartos<< endl
                << "  Banheiros: " << num_banheiros<< endl
                << "  Vagas: " << num_vagas<< endl
                << "Taxa de Comissão: " << 10 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << C << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
}
