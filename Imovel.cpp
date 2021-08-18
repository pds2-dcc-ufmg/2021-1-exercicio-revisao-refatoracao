#include <iostream>
#include <string>
#include "Imovel.hpp"


double Imovel::valor() {
    double Valor_Venda = Area * Valor_m2;
    return Valor_Venda;
}

double Imovel::comissao() {
    double Valor_Comissao = Area * Valor_m2;
    return Valor_Comissao * (Taxa_Comissao / double(100));
}

void Imovel::Impressao_Imovel() {
            cout << "[Vendedor]" << endl;
            vendedor.Impressao_Cliente();
            cout << "[Corretor]" << endl;
            cout << "  " + corretor << endl;
            cout << "Area: " << Area << endl
                 << "  Quartos: " << Quartos << endl
                 << "  Banheiros: " << Banheiros << endl
                 << "  Vagas: " << Vagas << endl
                 << "Taxa de Comissão: " << Taxa_Comissao << "%" << endl
                 << "Valor Comissão: R$ " << fixed << setprecision(2) << Valor_Comissao << endl
                 << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor_Venda << endl;
        }

void Imovel::Inicializar_Nomes(string corretor, Cliente vendedor){
    this->corretor = corretor;
    this->vendedor = vendedor;
}

void Imovel::Inicializar_Inteiros(int Quartos, int Banheiros, int Vagas, int Taxa_Comissao){
    this->Quartos = Quartos;
    this->Banheiros = Banheiros;
    this->Vagas = Vagas;
    this->Taxa_Comissao = Taxa_Comissao;
}

void Imovel::Inicializar_Double(double Area, double Valor_m2, double Valor_Comissao, double Valor_Venda){
    this->Area = Area;
    this->Valor_m2 = Valor_m2;
    this->Valor_Comissao = this->comissao();
    this->Valor_Venda = this->valor() + this->comissao();
}


