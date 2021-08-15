#include "Relatorio.hpp"

void Relatorio::add_venda_apartamento(Apartamento apt) {
    this->_apartamentos.push_back(apt);

    this->_valor_total_apartamentos += apt.get_valor_bruto();
    this->_comissao_total_apartamentos += apt.get_valor_comissao();
}

void Relatorio::add_venda_cobertura(Cobertura cob) {
    this->_coberturas.push_back(cob);

    this->_valor_total_coberturas += cob.get_valor_bruto();
    this->_comissao_total_coberturas += cob.get_valor_comissao();
}

void Relatorio::add_venda_casa(Casa casa) {
    this->_casas.push_back(casa);

    this->_valor_total_casas += casa.get_valor_bruto();
    this->_comissao_total_casas += casa.get_valor_comissao();
}

void Relatorio::mostra_apartamentos_vendidos() {
    for(Apartamento &apt: this->_apartamentos) {
        apt.print();
        std::cout << std::endl;
    }
}

void Relatorio::mostra_coberturas_vendidas() {
    for(Cobertura &cob: this->_coberturas) {
        cob.print();
        std::cout << std::endl;
    }
}

void Relatorio::mostra_casas_vendidas() {
    for(Casa &casa: this->_casas) {
        casa.print();
        std::cout << std::endl;
    }
}

void Relatorio::mostra_cabecalho() {
    std::cout << "\n>> Relatório de Imóveis <<" << std::endl;
}

void Relatorio::resumo_geral() {
    std::cout << "\n>> Resumo Geral <<" << std::endl;

    std::cout << "\n>>Apartamentos<<\n"
              << "\n Quantidade: " << this->_apartamentos.size()
              << "\n Valor Total: R$ " << std::fixed << std::setprecision(2) << this->_valor_total_apartamentos
              << "\n Comissão Total: R$" << this->_comissao_total_apartamentos
              << std::endl

              << "\n>>Coberturas<<\n"
              << "\n Quantidade: " << this->_coberturas.size()
              << "\n Valor Total: R$ " << std::fixed << std::setprecision(2) << this->_valor_total_coberturas
              << "\n Comissão Total: R$ " << std::fixed << std::setprecision(2) << this->_comissao_total_coberturas
              << std::endl
              
              << "\n>>Casas<<\n"
              << "\n Quantidade: " << this->_casas.size()
              << "\n Valor Total: R$ " << std::fixed << std::setprecision(2) << this->_valor_total_casas
              << "\n Comissão Total: R$ " << std::fixed << std::setprecision(2) << this->_comissao_total_casas
              << std::endl;
}