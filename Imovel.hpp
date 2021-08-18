#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

class Imovel {
    protected:
        double area; // area total do imovel
        int n_quartos; // quantidade de quartos
        int n_banheiros; // quantidade de banheiros 
        int n_vagas; // numero de vagas
        double preco_por_m2; // quanto vale o m2
        double comissao_taxa; // comissao do corretor, percentual
        Cliente vendedor; 
        std::string corretor;

    public:
        Imovel() {};

        Imovel(std::string corretor, double area, int q, int b, int v, double valor_m2, Cliente vendedor)
            : Imovel(corretor, area, q, b, v, valor_m2, vendedor, 0) {}

        Imovel(std::string corretor, double area, int q, int b, int v, double valor_m2, Cliente vendedor, double comissao)
        : corretor(corretor),
        area(area),
        n_quartos(q),
        n_banheiros(b),
        n_vagas(v),
        preco_por_m2(valor_m2),
        vendedor(vendedor),
        comissao_taxa(comissao) 
        {
        }

        // Calcula o preco final do imovel
        virtual double preco() {
            return valor() + comissao();
        }

        void set_comissao_taxa(double comissao) {
            comissao_taxa = comissao;
        }

        // Calcula quanto vale o imovel, em relação a sua área
        virtual double valor() {
            return area * preco_por_m2;
        }
        
        // Calcula quanto será a comissao do corretor
        virtual double comissao() {
            return comissao_taxa * valor();
        }

        void corretor_e_vendedor_info() {
            std::cout << "[Vendedor]" << std::endl;
            vendedor.print();
            std::cout << "[Corretor]" << std::endl;
            std::cout << "  " + corretor << std::endl;
        }

        virtual void imovel_info() {
            std::cout << "Area: " << area << std::endl
                << "  Quartos: " << n_quartos << std::endl
                << "  Banheiros: " << n_banheiros << std::endl
                << "  Vagas: " << n_vagas << std::endl;
        }

        virtual void preco_info() {
            std::cout << "Taxa de Comissão: " << std::fixed << std::setprecision(0) << comissao_taxa * 100 << "%" << std::endl
                << "Valor Comissão: R$ " << std::fixed << std::setprecision(2) << comissao() << std::endl
                << "Valor de Venda: R$ " << std::fixed << std::setprecision(2) << preco() << std::endl;
        }

        virtual void informacoes() {};
};

#endif