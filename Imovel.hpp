#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

class Imovel {
public:
    // Comissões definidas
    const double kTaxaComissaoCasa = 0.06;
    const double kTaxaComissaoCobertura = 0.10;
    const double kTaxaComissaoApartamento = 0.04;

    // Construtor
    explicit Imovel(double area, int num_quartos, int num_banheiros, int num_vagas,
        double valor_por_m2, Cliente vendedor, std::string corretor) :
        area_(area),
        num_quartos_(num_quartos),
        num_banheiros_(num_banheiros),
        num_vagas_(num_vagas),
        valor_por_m2_(valor_por_m2),
        vendedor_(vendedor),
        corretor_(corretor) {};

    // Destrutor virtual
    virtual ~Imovel() {};

    // Retorna o valor base do imovel, calculado
    // pela multiplicação entre a área e o valor p/ m2
    double valor() const {
        return area_ * valor_por_m2_;
    }
    // Retorna o valor do imovel com a comissao
    double valor_final() const {
        return valor() + comissao();
    }

    // Getters
    double area() const { return area_; };
    int num_quartos() const { return num_quartos_; };
    int num_banheiros() const { return num_banheiros_; };
    int num_vagas() const { return num_vagas_; };
    double valor_por_m2() const { return valor_por_m2_; };
    Cliente vendedor() const { return vendedor_; };
    std::string corretor() const { return corretor_; };

    // Retorna o valor da comissao para este imovel
    virtual double comissao() const = 0;

    // Printa os dados
    virtual void PrintarDados() const = 0;

    void PrintarDadosDaVenda() const {
        std::cout << "[Vendedor]" << endl;
        vendedor_.PrintarDados();
        std::cout << "[Corretor]" << endl;
        std::cout << "  " + corretor_ << endl;
    }

    void PrintarDadosDoImovel() const {
        std::cout << "Area: " << area() << endl
            << "  Quartos: " << num_quartos() << endl
            << "  Banheiros: " << num_banheiros() << endl
            << "  Vagas: " << num_vagas() << endl;
    }

private:
    double area_;
    int num_quartos_;
    int num_banheiros_;
    int num_vagas_;
    double valor_por_m2_;
    Cliente vendedor_;
    std::string corretor_;
};

#endif