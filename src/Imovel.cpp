#include "Imovel.hpp"

    double Imovel::calcularValorTotal() {
        return this->_area * this->_valorMetroQuadrado;
    }

    double Imovel::calcularComissao() {
        return this->_area * this->_valorMetroQuadrado * this->_percentualComissao;
    }

    double Imovel::calcularValorVenda() {
        return this->calcularValorTotal()+this->calcularComissao();
    }

    void Imovel::print() {
            cout << "[Vendedor]" << endl;
            this->_vendedor.print();
            cout << "[Corretor]" << endl;
            cout << "  " + this->_corretor << endl;
            std::cout << "[" << this->_nome << "]" << endl
                << "Area: " << this->_area << endl
                << "  Quartos: " << this->_numeroQuartos << endl
                << "  Banheiros: " << this->_numeroBanheiros << endl
                << "  Vagas: " << this->_numeroVagas << endl
                << "Taxa de Comissão: " << this->_percentualComissao*100 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << this->_comissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << this->_valorVenda << endl;
        }