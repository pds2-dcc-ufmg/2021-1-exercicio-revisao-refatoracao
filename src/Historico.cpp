#include "Historico.hpp"


Historico::Historico() {}

void Historico::nova_casa(double _area, double _valor_m2, int _num_quartos, int _num_banheiros, int _num_vagas, 
Cliente _vendedor, std::string _corretor) {
    Casa casa = Casa(_area, _valor_m2, _num_quartos, _num_banheiros, _num_vagas, _vendedor, _corretor);
    this->casas.push_back(casa);
}

void Historico::nova_cobertura(double _area, double _valor_m2, int _num_quartos, int _num_banheiros, int _num_vagas, 
Cliente _vendedor, std::string _corretor) {
    Cobertura cobertura = Cobertura(_area, _valor_m2, _num_quartos, _num_banheiros, _num_vagas, _vendedor, _corretor);
    this->coberturas.push_back(cobertura);
}

void Historico::novo_apartamento(double _area, double _valor_m2, int _num_quartos, int _num_banheiros, int _num_vagas, 
Cliente _vendedor, std::string _corretor) {
    Apartamento apartamento = Apartamento(_area, _valor_m2, _num_quartos, _num_banheiros, _num_vagas, _vendedor, _corretor);
    this->apartamentos.push_back(apartamento);
}

double Historico::somar_valores_casa() {
    double soma = 0;
    for (auto i : this->get_casas())
        soma += i.valor();

    return soma;
}

double Historico::somar_valores_cobertura() {
    double soma = 0;
    for (auto i : this->get_coberturas())
        soma += i.valor(); 

    return soma;
}

double Historico::somar_valores_apartamento() {
    double soma = 0;
    for (auto i : this->get_apartamentos())
        soma += i.valor();

    return soma;
}

double Historico::somar_comissoes_casa() {
    double soma = 0;
    for (auto i : this->get_casas())
        soma += i.comissao();

    return soma;
}

double Historico::somar_comissoes_cobertura() {
    double soma = 0;
    for (auto i : this->get_coberturas())
        soma += i.comissao();

    return soma;
}

double Historico::somar_comissoes_apartamento() {
    double soma = 0;
    for (auto i : this->get_apartamentos())
        soma += i.comissao();

    return soma;
}

int Historico::num_casas() {
    return this->casas.size();
}

int Historico::num_coberturas() {
    return this->coberturas.size();
}

int Historico::num_apartamentos() {
    return this->apartamentos.size();
}

// getters
std::vector<Casa> Historico::get_casas() {
    return this->casas;
}

std::vector<Cobertura> Historico::get_coberturas() {
    return this->coberturas;
}

std::vector<Apartamento> Historico::get_apartamentos() {
    return this->apartamentos;
}
