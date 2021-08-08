#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

// Este módulo implementa uma casa.
// OBS: Os itens são armazenados na memória.
// Cada casa herda atributos e funções de imovel.
// É definido e implementado no mesmo arquivo.

class Casa : public Imovel {
    // Funções públicas da classe da casa
    public:
    // Função retorna valor do imovel a partir da área e do valor do m2
    double valor() {

        double v = AREA * VALORm2;

        return v;

    }
    // Função retorna valor da comissão da casa a partir da área e do valor do m2
    // alterado por sua constante de comissão
    double comissao() {

        double c = AREA * VALORm2;
        // 6% de comissão
        return c * 0.06;
        
    }

    void print() {
        // Imprime dados da casa
        std::cout << "[Casa]" << endl;
        Imovel::print();
        std::cout << "Area: " << AREA << endl
                << "  Quartos: " << Q << endl
                << "  Banheiros: " << B << endl
                << "  Vagas: " << V << endl
                << "Taxa de Comissão: " << 6 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << C << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;

    }

};

#endif