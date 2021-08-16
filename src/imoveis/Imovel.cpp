#include"Imovel.hpp"

Imovel::Imovel(){
    corretor = "";
    area = 0.0;
    quantidade_quartos = 0; 
    quantidade_banheiros = 0;
    quantidade_vagas = 0;
    valor_metro2 = 0.0;
}
Imovel::Imovel(const int& qq, const int& qb, const int& qv, const double& a, const double& vm, const Cliente& v, const string& c) {
    vendedor = v;
    corretor = c;
    area = a;
    quantidade_quartos = qq; 
    quantidade_banheiros = qb;
    quantidade_vagas = qv;
    valor_metro2 = vm;
}

int Imovel::get_quartos() const { return quantidade_quartos; }
int Imovel::get_banheiros() const { return quantidade_banheiros; }
int Imovel::get_vagas() const { return quantidade_vagas; }
double Imovel::get_area() const { return area; }
double Imovel::get_valor_metro2() const { return valor_metro2; }

void Imovel::set_quartos(const int& q) { quantidade_quartos = q; }
void Imovel::set_banheiros(const int& b) { quantidade_banheiros = b; }
void Imovel::set_vagas(const int& v) { quantidade_vagas = v; }
void Imovel::set_area(const double& a) { area = a; }
void Imovel::set_valor_metro2(const double& vm) { valor_metro2 = vm; }
void Imovel::set_vendedor(const Cliente& v) { vendedor = v; }
void Imovel::set_corretor(const string& cor) { corretor = cor; }

void Imovel::print() {
    std::cout << "[Vendedor]" << endl;
    vendedor.print();
    std::cout << "[Corretor]" << endl;
    std::cout << "  " + corretor << endl;
}




