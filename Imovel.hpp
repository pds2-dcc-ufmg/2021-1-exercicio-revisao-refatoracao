#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <string>
using namespace std;

class Imovel {
    public:
        Imovel();

        void printDadosImovel();

        double getArea();
        int getQuantidadeQuartos();
        int getQuantidadeBanheiros();
        int getQuantidadeVagas();
        double getValorM2();
        double getValorImovel();
        double getComissao();
        Cliente getVendedor();
        string getCorretor();

        void setArea(double novaArea);
        void setQuantidadeQuartos(int novaQauantidade);
        void setQuantidadeBanheiros(int novaQauantidade);
        void setQuantidadeVagas(int novaQauantidade);
        void setValorM2(double novoValor);
        void setValorImovel(double novoValor);
        void setComissao(double novoValor);
        void setVendedor(double novoVendedor);
        void setCorretor(string novoCorretor);


    private:
        double area;
        int quantidadeQuartos,quantidadeBanheiros, quantidadeVagas;
        double valorM2, valorImovel, comissao;
        Cliente vendedor;
        string corretor;
};

 

#endif