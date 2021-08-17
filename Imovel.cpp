#include "Imovel.hpp"
#define PERCENTUAL 100

//Construtor do Imovel
Imovel::Imovel(double _area, int _n_quartos, int _n_banheiros, int _n_vagas, double _valor_m2, double _valor_total, double _comissao, Cliente _vendedor, string _corretor){
    this->area = _area;
    this->n_quartos = _n_quartos;
    this->n_banheiros = _n_banheiros;
    this->n_vagas = _n_vagas;
    this->valor_m2 = _valor_m2;
    this->valor_total = _valor_total;
    this->comissao = _comissao;
    this->vendedor = _vendedor;
    this->corretor = _corretor;
}

double Imovel::getValor(){
    return this->area * this->valor_m2;
}

double Imovel::getComissao(){
    return (this->getValor() * this->comissao)
}

void Imovel::print(){
    std::cout << "[Vendedor]" << endl;
    vendedor.print();
    std::cout << "[Corretor]" << endl
              << "  " + this->corretor << endl
              << "Area: " << this->area << endl
              << "  Quartos: " << this->n_quartos << endl
              << "  Banheiros: " << this->n_banheiros << endl
              << "  Vagas: " << this->n_vagas << std::endl
              << "Taxa de Comissão: " << this->comissao * PERCENTUAL << "%" << endl
              << "Valor Comissão: R$ " << fixed << setprecision(2) << this->getComissao() << endl
              << "Valor de Venda: R$ " << fixed << setprecision(2) << this->getValor() + this->getComissao() << endl;
}
