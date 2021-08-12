#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
    public:
    // Retorna o valor total do imóvel sem a comissão.
        double valor_imovel() {
            double v = area * valor_m2;
            return v;
        }
    // Retorna o valor da comissão.
        double comissao() {
            double c = area * valor_m2;
            return c * 0.10;
        }
    // Retorna o valor da porcentagem de comissão
        int get_porcentagem() {
            return porcentagem;
        }
    // Retorna todas as informações do imóvel em questão.
        void print() {
            std::cout << "[Cobertura]" << endl;
            Imovel::print();
        }
    private:
        int porcentagem = 10;
};

#endif

