//Incluindo bibliotecas
#include <iostream>
#include <iomanip>

//Incluindo .hpp
#include "Cartorio.hpp"

//Implementação dos métodos
//Registra um apartamento: coloca no vector, aumenta o valor total, 
//aumenta a comissão total e aumenta a quantidade de apartamentos
void Cartorio::registraApartamento(Apartamento apartamento){
    apartamentos.push_back(apartamento);
    _quantidadeApartamentos++;
    _valorTotalApartamentos += apartamento.calculaValorImovel();
    _comissaoTotalApartamentos += apartamento.calculaComissao();
}

//Registra uma casa: coloca no vector, aumenta o valor total, 
//aumenta a comissão total e aumenta a quantidade de casas
void Cartorio::registraCasa(Casa casa){
    casas.push_back(casa);
    _quantidadeCasas++;
    _valorTotalCasas += casa.calculaValorImovel();
    _comissaoTotalCasas += casa.calculaComissao();
}

//Registra uma cobertura: imprime, aumenta o valor total, 
//aumenta a comissão total e aumenta a quantidade de coberturas
void Cartorio::registraCobertura(Cobertura cobertura){
    coberturas.push_back(cobertura);
    _quantidadeCoberturas++;
    _valorTotalCoberturas += cobertura.calculaValorImovel();
    _comissaoTotalCoberturas += cobertura.calculaComissao();
}

//Faz um loop no vector de cada tipo de imóvel, imprimindo os imóveis
void Cartorio::imprimeRelatorioDeImoveis(){
    cout << "\n>> Relatório de Imóveis <<" << endl;
    for (int i = 0; i < apartamentos.size(); i++){
        apartamentos[i].print();
        cout << endl;     
    }
    for (int i = 0; i < coberturas.size(); i++){
        coberturas[i].print();
        cout << endl;     
    }
    for (int i = 0; i < casas.size(); i++){
        casas[i].print();
        cout << endl;     
    }
}

//Imprime um resumo geral dos imóveis do cartório, com 
//Quantidade, Valor Total e Comissão Total de cada tipo de imóvel.
void Cartorio::imprimeResumoGeral(){
    std::cout << "\n>> Resumo Geral <<" << endl;
    std::cout << "\n>>Apartamentos<<\n"
            << "\n Quantidade: " << _quantidadeApartamentos
            << "\n Valor Total: R$ " << fixed << setprecision(2) << _valorTotalApartamentos
            << "\n Comissão Total: R$" << _comissaoTotalApartamentos
            << endl
            << "\n>>Coberturas<<\n"
            << "\n Quantidade: " << _quantidadeCoberturas
            << "\n Valor Total: R$ " << fixed << setprecision(2) << _valorTotalCoberturas
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << _comissaoTotalCoberturas
            << endl
            << "\n>>Casas<<\n"
            << "\n Quantidade: " << _quantidadeCasas
            << "\n Valor Total: R$ " << fixed << setprecision(2) << _valorTotalCasas
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << _comissaoTotalCasas
            << endl;

}
