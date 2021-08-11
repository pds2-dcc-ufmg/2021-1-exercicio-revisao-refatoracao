#include <iostream>
#include <iomanip>
#include <string>
#include "Pessoa.hpp"
#include "Imovel.hpp"

using namespace std;

    Imovel::Imovel(string _tipo_imovel, double _area, int _num_quartos, int _num_banheiros, int _num_vagas, double _valor_metro_quadrado, Pessoa _vendedor, string _corretor, double _taxa_de_comissao)
    {
        this->tipo_imovel = _tipo_imovel;

        this->area = _area;
        this->num_quartos = _num_quartos;
        this->num_banheiros = _num_banheiros;
        this->num_vagas = _num_vagas;

        this->valor_metro_quadrado = _valor_metro_quadrado;
        this->vendedor = _vendedor;
        this->corretor = _corretor;

        this->taxa_de_comissao = _taxa_de_comissao;
    }


    double Imovel::valor_do_imovel() 
    {
        double valor_imovel = this->area * this->valor_metro_quadrado;

        return valor_imovel;
    }

    double Imovel::valor_da_comissao() 
    {
        return this->valor_do_imovel() * this->taxa_de_comissao;  
    }

    void Imovel::imprime_informacoes_venda() 
    {
        
        cout << "[" << tipo_imovel << "]" << endl;
        
        cout << "[Vendedor]" << endl;
        vendedor.imprime_dados();

        cout << "[Corretor]" << endl;
        cout << "  " + corretor << endl;

           cout << "Area: " << area << endl
                << "  Quartos: " << num_quartos << endl
                << "  Banheiros: " << num_banheiros << endl
                << "  Vagas: " << num_vagas << endl
                << "Taxa de Comissão: " << int(this->taxa_de_comissao * 100) << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << this->valor_da_comissao() << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << this->valor_do_imovel() + this->valor_da_comissao() << endl;
    }