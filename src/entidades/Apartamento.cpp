#include "Apartamento.hpp"


double Apartamento::valor(){

    double ValorImovel = AREA * VALORm2;
        return ValorImovel;
}



double Apartamento::get_taxa_apartamento(){

    return (this->taxa_apartamento);
}



double Apartamento::comissao(){

    double comissao_apartamento = AREA * VALORm2;

    return comissao_apartamento * this->get_taxa_apartamento();
}



void Apartamento::print(){
    std::cout << "[Apartamento]" << endl;
        Imovel::print();
        std::cout << "Area: " << AREA << endl
                << "  Quartos: " << num_quartos<< endl
                << "  Banheiros: " << num_banheiros<< endl
                << "  Vagas: " << num_vagas<< endl
                << "Taxa de Comissão: " << 4 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << C << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
}