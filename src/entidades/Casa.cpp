#include <iostream>
#include <iomanip>
#include "Cliente.hpp"
#include "Casa.hpp"
#include "Imovel.hpp"

double Casa::CalcularComissao() {
    
    return CalcularValor()*taxaComissao;
};

void Casa::Print() {

        std::cout << "[Casa]" << endl;
        std::cout << "[Vendedor]" << endl;
             std::cout << "  Nome: " << vendedor.NOME << endl
		 << "  Telefone: " << vendedor.telefone << endl
		 << "  Endereço: " << vendedor.endereco << endl
		 << "  Cidade: " << vendedor.CIDADE << endl
		 << "  Estado: " << vendedor.UF << endl
		 << "  CEP: " << vendedor.cep << endl;
            std::cout << "[Corretor]" << endl;
            std::cout << "  " + corretor << endl;
        std::cout 
                << "Taxa de Comissão: " << int(this->taxaComissao*100) << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << this->comissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << this->valorImovel << endl
                << "Area: " << this->area << endl
                << "  Quartos: " << this->quartos << endl
                << "  Banheiros: " << this->banheiros << endl
                << "  Vagas: " << this->vagas << endl;

};