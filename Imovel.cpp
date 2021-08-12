#include "Imovel.hpp"

Imovel::Imovel(string corretor, double area, int quartos, int banheiros,
               int banheiros, int vagas, double valor_por_m2, Cliente vendedor)
      : corretor_(corretor), area_(area), quartos_(quartos),
        banheiros_(banheiros), vagas_(vagas), valor_por_m2_(valor_por_m2),
        vendedor_(vendedor) {}

double Imovel::ValorPreCorretagem() const {
  return area * valor_por_m2;
}

double Imovel::Comissao() const {
  return taxa_de_corretagem * ValorPreCorretagem();
}

double Imovel::ValorPosCorretagem() const {
  return ValorPreCorretagem() + Comissao();
}

void Imovel::Print() {
  cout << "[Vendedor]" << endl;
  vendedor.Print();
  cout << "[Corretor]" << endl;
  cout << "  " + corretor << endl;

  std::cout << "Area: " << area << endl
    << "  Quartos: " << quarto << endl
    << "  Banheiros: " << banheiros << endl
    << "  Vagas: " << vagas << endl
    << "Taxa de Comissão: " << int(100 * taxa_de_corretagem) << "%" << endl
    << "Valor Comissão: R$ " << fixed << setprecision(2) << Comissao() << endl
    << "Valor de Venda: R$ " << fixed << setprecision(2) << ValorPosCorretagem() << endl;

}

void Imovel::set_corretor(string corretor) { corretor_ = corretor; }
void Imovel::set_area(double area) { area_ = area; }
void Imovel::set_quartos(int quartos) { quartos_ = quartos; }
void Imovel::set_banheiros(int banheiros) { banheiros_ = banheiros; }
void Imovel::set_vagas(int vagas) { vagas_ = vagas; }
void Imovel::set_valor_por_m2(double valor_por_m2) {
  valor_por_m2_ = valor_por_m2;
}
void Imovel::set_vendedor(Cliente vendedor) { vendedor_ = vendedor; }
void Imovel::set_taxa_de_corretagem(double taxa_de_corretagem) {
  taxa_de_corretagem_ = taxa_de_corretagem;
}

string Imovel::get_corretor() const { return corretor_; }
double Imovel::get_area() const { return area_; }
int Imovel::get_quartos() const { return quartos_; }
int Imovel::get_banheiros() const { return banheiros_; }
int Imovel::get_vagas() const { return vagas_; }
double Imovel::get_valor_por_m2() const { return valor_por_m2_; }
Cliente Imovel::get_vendedor() const { return vendedor_; }
double Imovel::get_taxa_de_corretagem() const { return taxa_de_corretagem_; }
