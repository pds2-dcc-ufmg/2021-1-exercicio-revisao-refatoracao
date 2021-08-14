#include "Imovel.hpp"

namespace Imovel {

    Imovel::Imovel() {};

    Imovel::Imovel(string corretor, double area, int quartos, int banheiros, int vagas, 
                double  valor_por_metro_quadrado, Cliente vendedor) {

        corretor_ = corretor;
        area_ = area;
        quartos_ = quartos;
        banheiros_ = banheiros;
        vagas_ = vagas;
        valor_por_metro_quadrado_ = valor_por_metro_quadrado;
        vendedor_ = vendedor;

    }

    void Imovel::print() {
        cout << "[Vendedor]" << endl;
        vendedor_.print();
        cout << "[Corretor]" << endl;
        cout << "  " + corretor_ << endl;
        cout << "Area: " << area_ << endl
            << "  Quartos: " << quartos_ << endl
            << "  Banheiros: " << banheiros_ << endl
            << "  Vagas: " << vagas_ << endl
            << "Taxa de Comissão: " << fixed << setprecision(0) << taxa_de_comissao_*100 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << valor_da_comissao_ << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << valor_de_venda_ << endl;
    }

    double Imovel::valor() {

        double valor_do_imovel = area_ * valor_por_metro_quadrado_;

        return valor_do_imovel;

    }

    double Imovel::comissao() {

        double comissao = taxa_de_comissao_ * valor();

        return comissao;
        
    }

}