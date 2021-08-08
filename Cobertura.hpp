#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

// Este módulo implementa uma cobertura.
// OBS: Os itens são armazenados na memória.
// Cada casa herda atributos e funções de imovel.
// É definido e implementado no mesmo arquivo.

class Cobertura : public Imovel {
    // Funções públicas da classe da cobertura
    public:
    // Função retorna valor da cobertura a partir da área e do valor do m2
    double valor() {

        double v = AREA * VALORm2;

        return v;

    }
    // Função retorna valor da comissão da cobertura a partir da área e do valor do m2
    // alterado por sua constante de comissão
    double comissao() {

        double c = AREA * VALORm2;
        // 10% de comissão
        return c * 0.10;
        
    }

    void print() {
        // Imprime dados da cobertura
        std::cout << "[Cobertura]" << endl;
        Imovel::print();
        std::cout << "Area: " << AREA << endl
                << "  Quartos: " << Q << endl
                << "  Banheiros: " << B << endl
                << "  Vagas: " << V << endl
                << "Taxa de Comissão: " << 10 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << C << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
    }
};

#endif