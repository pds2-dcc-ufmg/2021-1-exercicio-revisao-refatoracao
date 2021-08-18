#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

class Apartamento : public Imovel {

    public: 
    
    double valor(){
        return Imovel::valor();
    }

    double comissao() {
        return Imovel::comissao();
        
    }

    void Impressao_Imovel() {
        std::cout << "[Apartamento]" << endl;
        Imovel::Impressao_Imovel();
    }

    void Inicializar_Nomes(string corretor, Cliente vendedor){
        Imovel::Inicializar_Nomes(corretor, vendedor);
    }

    void Inicializar_Inteiros(int Quartos, int Banheiros, int Vagas, int Taxa_Comissao){
        Imovel::Inicializar_Inteiros(Quartos, Banheiros, Vagas, Taxa_Comissao);
    }

    void Inicializar_Double(double Area, double Valor_m2, double Valor_Comissao, double Valor_Venda){
        Imovel::Inicializar_Double(Area, Valor_m2, Valor_Comissao, Valor_Venda);
    }

};

#endif