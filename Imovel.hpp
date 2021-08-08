#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

// Este módulo implementa um imovel.
// OBS: Os itens são armazenados na memória.
// Cada imovel possui area, quartos, banheiros, vagas, valor m2,...
// valor da venda e valor da comissão, além de vendedor e corretor
// Os dados do imóvel utilizam dos tipos double, int, Cliente e string.
// É definido e implementado no mesmo arquivo.
// Permitindo opcionalmente que classes que herdarem imovel,
// criem suas funções de cálculo de valor de venda e de comissão e alterem as variaveis.

class Imovel {
    public:
        double AREA;
        int Q;
        int B;
        int V;
        double VALORm2;
        double Valor;
        double C;
        Cliente vendedor;
        string corretor;
        // Imprime dados do Cliente que faz papel de vendedor, e do corretor
        void print() {
            cout << "[Vendedor]" << endl;
            vendedor.print();
            cout << "[Corretor]" << endl;
            cout << "  " + corretor << endl;
        }
};

#endif