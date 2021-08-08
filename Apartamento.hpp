#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

// Este módulo implementa um apartamento.
// OBS: Os itens são armazenados na memória.
// Cada casa herda atributos e funções de imovel.
// É definido e implementado no mesmo arquivo.

class Apartamento : public Imovel {
    // Funções públicas da classe do apartamento
    public: 
    // Função retorna valor do apartamento a partir da área e do valor do m2
    double valor() {

        double v = AREA * VALORm2;

        return v;

    }
    // Função retorna valor da comissão do apartamento a partir da área e do valor do m2
    // alterado por sua constante de comissão
    double comissao() {

        double c = AREA * VALORm2;
        // 4% de comissão
        return c * 0.04;
        
    }

    void print() {
        // Imprime dados do apartamento
        std::cout << "[Apartamento]" << endl;
        Imovel::print();
        std::cout << "Area: " << AREA << endl
                << "  Quartos: " << Q << endl
                << "  Banheiros: " << B << endl
                << "  Vagas: " << V << endl
                << "Taxa de Comissão: " << 4 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << C << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
    }
};

#endif