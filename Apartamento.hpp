#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {
 public:
    // Retorna o valor total do imóvel sem a comissão.
        double valor_imovel() {
            double v = area * valor_m2;
            return v;
        }
    // Retorna o valor da comissão.
        double comissao() {
            double c = area * valor_m2;
            return c * 0.04;
        }
        int get_porcentagem() {
            return porcentagem;
        }
    // Retorna todas as informações do imóvel em questão.
        void print() {
            std::cout << "[Apartamento]" << endl;
            Imovel::print();
        }
    private:
        int porcentagem = 4;
};

#endif
