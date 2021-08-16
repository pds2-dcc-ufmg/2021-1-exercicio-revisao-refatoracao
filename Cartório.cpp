//Incluindo bibliotecas
#include <iostream>

//Incluindo .hpp
#include <Cartório.hpp>

//Implementação dos métodos
//Registra um apartamento: imprime, aumenta o valor total, 
//aumenta a comissão total e aumenta a quantidade de apartamentos
void Cartorio::RegistraApartamento(Apartamento apartamento){
    apartamento.print();
    quantidadeApartamentos++;
    valorTotalApartamentos += apartamento.calculaValorImovel();
    valorTotalCoberturas += apartamento.calculaComissao();
    cout << endl;
}

//Registra uma casa: imprime, aumenta o valor total, 
//aumenta a comissão total e aumenta a quantidade de casas
void Cartorio::RegistraCasa(Casa casa){
    casa.print();
    quantidadeCasas++;
    valorTotalCasas += casa.calculaValorImovel();
    valorTotalCoberturas += casa.calculaComissao();
    cout << endl;
}

//Registra uma cobertura: imprime, aumenta o valor total, 
//aumenta a comissão total e aumenta a quantidade de coberturas
void Cartorio::RegistraCobertura(Cobertura cobertura){
    cobertura.print();
    quantidadeCoberturas++;
    valorTotalCoberturas += cobertura.calculaValorImovel();
    valorTotalCoberturas += cobertura.calculaComissao();
    cout << endl;
}