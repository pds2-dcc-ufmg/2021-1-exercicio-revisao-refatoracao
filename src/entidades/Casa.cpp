#include "Casa.hpp"



double Casa::valor(){

    double ValorCasa = AREA * VALORm2;

        return ValorCasa;
}



double Casa::get_taxa_casa(){

    return(this->taxa_casa);

}


double Casa::comissao(){

    double comissao_casa = AREA * VALORm2;
    return comissao_casa * this->get_taxa_casa();
}


void Casa::print(){
    
    std::cout << "[Casa]" << endl;
        Imovel::print();
        std::cout << "Area: " << AREA << endl
                << "  Quartos: " << num_quartos<< endl
                << "  Banheiros: " << num_banheiros<< endl
                << "  Vagas: " << num_vagas<< endl
                << "Taxa de Comissão: " << 6 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << C << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
                
}
