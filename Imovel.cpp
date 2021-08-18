#include "Imovel.hpp"

// Implementação Construtor
Imovel::Imovel(){
    set_quartos(0);
    set_banheiros(0);
    set_vagas(0);
    set_area(0);
    set_valor_m2(0);
    set_total(0);
    set_comissao(0);
}

Imovel::Imovel(int& quartos, int& banheiros, int& vagas, double& area, double& valor_m2, double& total, double& comissao, std::string& corretor, Cliente& vendedor) {
    _quartos = quartos;
    _banheiros = banheiros;
    _vagas = vagas;
    _area = area;
    _valor_m2 = valor_m2;
    _total = total;
    _comissao = comissao;
    _corretor = corretor;
    _vendedor = vendedor;
}


// Implementação Getters e Setters
int    Imovel::get_quartos()       {return _quartos;}
int    Imovel::get_banheiros()     {return _banheiros;}
int    Imovel::get_vagas()         {return _vagas;}
double Imovel::get_area()          {return _area;}
double Imovel::get_valor_m2()      {return _valor_m2;}
double Imovel::get_total()         {return _total;}
double Imovel::get_comissao()      {return _comissao;}
std::string Imovel::get_corretor() {return _corretor;}
Cliente Imovel::get_vendedor()     {return _vendedor;}


void Imovel::set_area(double area)              {_area = area;}
void Imovel::set_quartos(int quartos)           {_quartos = quartos;}
void Imovel::set_banheiros(int banheiros)       {_banheiros = banheiros;}
void Imovel::set_vagas(int vagas)               {_vagas = vagas;}
void Imovel::set_valor_m2(double valor_m2)      {_valor_m2 = valor_m2;}
void Imovel::set_total(double total)            {_total = total;}
void Imovel::set_comissao(double comissao)      {_comissao = comissao;}
void Imovel::set_corretor(std::string corretor) {_corretor = corretor;}
void Imovel::set_vendedor(Cliente vendedor)     {_vendedor = vendedor;}

// Implementação print
void Imovel::print() {
    std::cout << "[Vendedor]" << std::endl;
    _vendedor.print();
    std::cout << "[Corretor]" << std::endl;
    std::cout << "  " + get_corretor() << std::endl;
}
