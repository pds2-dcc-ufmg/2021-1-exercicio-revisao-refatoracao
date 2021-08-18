#include <iostream>
#include <iomanip>
#include "Cliente.hpp"
#include "Imovel.hpp"

using namespace std;

    Imovel:: Imovel () {};

    void Imovel:: construtora (string corretor_, double area_, int quartos_, int banheiros_, int vagas_, double valor_por_m2_, Cliente cl){
        this->corretor = corretor_;
        this->area = area_;
        this->quartos = quartos_;
        this->banheiros = banheiros_;
        this->vagas = vagas_;
        this->valor_por_m2 = valor_por_m2_;
        this->vendedor = cl;
        
    }
    double Imovel:: valor () {

        double valor = area * valor_por_m2;
        return valor;
        }

    double Imovel:: comissao(double taxa_de_comissao) {
        
        double comissao = valor();
        return comissao * taxa_de_comissao;
        }

    void Imovel:: print(string tipo_de_imovel, double taxa_de_comissao) {
            std::cout << tipo_de_imovel << endl;
            cout << "[Vendedor]" << endl;
            vendedor.print();
            cout << "[Corretor]" << endl;
            cout << "  " + corretor << endl;
            std::cout << "Area: " << area << endl
            << "  Quartos: " << quartos << endl
            << "  Banheiros: " << banheiros << endl
            << "  Vagas: " << vagas << endl
            << "Taxa de Comissão: " <<  fixed << setprecision(0) <<taxa_de_comissao*100 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << valor_da_comissao << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << valor_de_venda << endl;
        }

 
