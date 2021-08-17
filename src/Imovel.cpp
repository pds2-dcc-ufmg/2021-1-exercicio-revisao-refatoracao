#include "Imovel.hpp"

#include <iostream>
#include <iomanip>


void Imovel::print() {
    std::cout << "[Vendedor]" << std::endl;
    vendedor.print();
    std::cout << "[Corretor]" << std::endl;
    std::cout << "  " << this->get_corretor() << std::endl;
}

double Imovel::valor() {
    return get_area() * get_valor_m2();
}

// getters
double Imovel::get_area() {
    return this->area;
}

double Imovel::get_valor_m2() {
    return this->valor_m2;
}

int Imovel::get_num_quartos() {
    return this->num_quartos;
}

int Imovel::get_num_banheiros() {
    return this->num_banheiros;
}

int Imovel::get_num_vagas() {
    return this->num_vagas;
}

Cliente Imovel::get_vendedor() {
    return this->vendedor;
}

std::string Imovel::get_corretor() {
    return this->corretor;
}

// setters
void Imovel::set_area(double _area) {
    this->area = _area;
}

void Imovel::set_valor_m2(double _valor_m2) {
    this->valor_m2 = _valor_m2;
}

void Imovel::set_num_quartos(int _num_quartos) {
    this->num_quartos = _num_quartos;
}

void Imovel::set_num_banheiros(int _num_banheiros) {
    this->num_banheiros = _num_banheiros;
}

void Imovel::set_num_vagas(int _num_vagas) {
    this->num_vagas = _num_vagas;
}

void Imovel::set_vendedor(Cliente _vendedor) {
    this->vendedor = _vendedor;
}

void Imovel::set_corretor(std::string _corretor) {
    this->corretor = _corretor;
}
