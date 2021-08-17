#include "Imovel.hpp"

Imovel::Imovel(std::string corretor, double area, int quartos, int banheiros,
               int vagas, double valor_por_m2, Cliente vendedor,
               double taxa_de_comissao, std::string label)
        : corretor_(corretor), area_(area), quartos_(quartos),
          banheiros_(banheiros), vagas_(vagas), valor_por_m2_(valor_por_m2),
          vendedor_(vendedor), taxa_de_comissao_(taxa_de_comissao),
          label_(label) {}

double Imovel::valor_pre_corretagem() const {
    return area_ * valor_por_m2_;
}

double Imovel::comissao() const {
    return taxa_de_comissao_ * valor_pre_corretagem();
}

double Imovel::valor_pos_corretagem() const {
    return valor_pre_corretagem() + comissao();
}

void Imovel::print() const {
    cout << "[" << label_ << "]" << std::endl;

    cout << "[Vendedor]" << std::endl;
    vendedor_.print();

    cout << "[Corretor]" << std::endl;
    cout << "  " << corretor_ << std::endl;

    std::cout << "Area: " << area_ << std::endl;
    std::cout << "  Quartos: " << quartos_ << std::endl;
    std::cout << "  Banheiros: " << banheiros_ << std::endl;
    std::cout << "  Vagas: " << vagas_ << std::endl;
    std::cout << "Taxa de Comissão: " << int(100 * taxa_de_comissao_) 
              << "%" << std::endl;

    std::cout << fixed << setprecision(2);
    std::cout << "Valor Comissão: R$ " << comissao() << std::endl;
    std::cout << "Valor de Venda: R$ " << valor_pos_corretagem() << std::endl;
}

void Imovel::set_area(double area) { 
    subtract_from_valor_total();
    subtract_from_comissao_total();
    area_ = area; 
    add_to_valor_total();
    add_to_comissao_total();
}

void Imovel::set_valor_por_m2(double valor_por_m2) {
    subtract_from_valor_total();
    subtract_from_comissao_total();
    valor_por_m2_ = valor_por_m2;
    add_to_valor_total();
    add_to_comissao_total();
}

void Imovel::set_taxa_de_comissao(double taxa_de_comissao) {
    subtract_from_comissao_total();
    taxa_de_comissao_ = taxa_de_comissao;
    add_to_comissao_total();
}

void Imovel::set_corretor(std::string corretor) { corretor_ = corretor; }
void Imovel::set_quartos(int quartos) { quartos_ = quartos; }
void Imovel::set_banheiros(int banheiros) { banheiros_ = banheiros; }
void Imovel::set_vagas(int vagas) { vagas_ = vagas; }
void Imovel::set_vendedor(Cliente vendedor) { vendedor_ = vendedor; }

std::string Imovel::get_corretor() const { return corretor_; }
double Imovel::get_area() const { return area_; }
int Imovel::get_quartos() const { return quartos_; }
int Imovel::get_banheiros() const { return banheiros_; }
int Imovel::get_vagas() const { return vagas_; }
double Imovel::get_valor_por_m2() const { return valor_por_m2_; }
Cliente Imovel::get_vendedor() const { return vendedor_; }
double Imovel::get_taxa_de_comissao() const { return taxa_de_comissao_; }
