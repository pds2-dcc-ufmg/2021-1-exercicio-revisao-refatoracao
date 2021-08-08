#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

/*
Sub-classe que representa o tipo de imóvel: Cobertura
*/
class Cobertura : public Imovel {
    private:
        // Variáveis estáticas da classe: número de coberturas e % de comissão
        static int numCob;
        static double pctComissao;

    public:
        // Retorna número de coberturas existentes
        static int getNumCob();

        void print() override;

        // Além de construir a classe, incrementa a conta de coberturas
        Cobertura(double area, 
                  double vm2, 
                  int q, 
                  int b, 
                  int v, 
                  string corretor, 
                  Cliente* vendedor) : 
                  Imovel(area, vm2, q, b, v, corretor, vendedor, pctComissao) {
            numCob++;
        }
        
        ~Cobertura() {
            // Decresce o número de coberturas
            numCob--;
        }
};

#endif