#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

std::ostream& operator << (std::ostream &out, Imoveis::Imovel imovel);

int main() {
    
    Cliente::Cliente cliente_1;
    cliente_1._nome = "Xayso Sovon Ziahaka";
    cliente_1._endereco = "Rua Xangrilá - Braúnas";
    cliente_1._cidade = "Belo Horizonte";
    cliente_1._uf = "MG";
    cliente_1._cep = "31365-570";
    cliente_1._telefone = "3196007958";
    
    Cliente cliente_2;
    cliente_2._nome = "Minia Pasies Kituos";
    cliente_2._endereco = "Rua dos Jacobinos - Ouro Minas";
    cliente_2._cidade = "Belo Horizonte";
    cliente_2._uf = "MG";
    cliente_2._cep = "31870-290";
    cliente_2._telefone = "3197627067";
    
    Cliente cliente_3;
    cliente_3._nome = "Vuocue Leiur Baonauza";
    cliente_3._endereco = "Rua Orminda de Almeida - Tupi B";
    cliente_3._cidade = "Belo Horizonte";
    cliente_3._uf = "MG";
    cliente_3._cep = "31842-630";
    cliente_3._telefone = "3195949327";
    
    Cliente cliente_4;
    cliente_4._nome = "Zerer Huduy Fyogar";
    cliente_4._endereco = "Rua Taquaril - Jonas Veiga";
    cliente_4._cidade = "Belo Horizonte";
    cliente_4._uf = "MG";
    cliente_4._cep = "30285-422";
    cliente_4._telefone = "3198596327";
    
    Cliente cliente_5;
    cliente_5._nome = "Ceziel Mioti Pler";
    cliente_5._endereco = "Rua João Gualberto Costa - Serrano";
    cliente_5._cidade = "Belo Horizonte";
    cliente_5._uf = "MG";
    cliente_5._cep = "30882-747";
    cliente_5._telefone = "3196274465";
    
    Cliente cliente_6;
    cliente_6._nome = "Esxo Cilal Zyais";
    cliente_6._endereco = "Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)";
    cliente_6._cidade = "Belo Horizonte";
    cliente_6._uf = "MG";
    cliente_6._cep = "31650-560";
    cliente_6._telefone = "3195004414";
    
    Cliente cliente_7;
    cliente_7._nome = "Leova Wikyecil Neaca";
    cliente_7._endereco = "Rua João Arantes - _cidade Nova";
    cliente_7._cidade = "Belo Horizonte";
    cliente_7._uf = "MG";
    cliente_7._cep = "31170-240";
    cliente_7._telefone = "3198461192";
    
    Cliente cliente_8;
    cliente_8._nome = "Teas Heimeu Pipe";
    cliente_8._endereco = "Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)";
    cliente_8._cidade = "Belo Horizonte";
    cliente_8._uf = "MG";
    cliente_8._cep = "30668-430";
    cliente_8._telefone = "3197317802";

    int quant_apartamento = 0;
    int quant_casa = 0;
    int quant_cobertura = 0;

    Imoveis::Apartamento ap_1("Tuoruars", 55.4, 2, 1, 0, 987.0, cliente_1);
    quant_apartamento++;

    Imoveis::Apartamento ap_2("Tuoruars", 55.4, 2, 1, 0, 987.0, cliente_1);
    quant_apartamento++;

    Imoveis::Apartamento ap_3("Tuoruars", 55.4, 2, 1, 0, 987.0, cliente_1);
    quant_apartamento++;

    Imoveis::Cobertura cobertura_1("Koci", 120.1, 3, 3, 2, 3123.5, cliente_4);
    quant_cobertura++;
    
    Imoveis::Cobertura cobertura_2("Wail", 134.8, 4, 3, 3, 3578.2, cliente_5);
    quant_cobertura++;

    Imoveis::Cobertura cobertura_3("Fival", 180.0, 4, 4, 4, 4165.7, cliente_6);
    quant_cobertura++;
 
    // Casas
    Imoveis::Casa casa_1("Beydo", 145.6, 3, 3, 2, 4023.6, cliente_7);
    quant_casa++;

    Imoveis::Casa casa_2("Riuzi", 245.0, 5, 4, 4, 4856.2, cliente_8);
    quant_casa++;

    std::cout << "\n>> Relatório de Imóveis <<" << std::endl;

    double valor_apartamento = 0.0;
    double valor_cobertura = 0.0;
    double valor_casa = 0.0;
    double comissa_apartamento = 0.0;
    double comissao_cobertura = 0.0;
    double comissao_casa = 0.0;
    
    std::cout << ap_1;
    valor_apartamento += ap_1.calcula_valor();
    comissa_apartamento += ap_1.calcula_comissao();
    std::cout << std::endl;

    std::cout << ap_2;
    valor_apartamento += ap_2.calcula_valor();
    comissa_apartamento += ap_2.calcula_comissao();
    std::cout << std::endl;

    std::cout << ap_3;
    valor_apartamento += ap_3.calcula_valor();
    comissa_apartamento += ap_3.calcula_comissao();
    std::cout << std::endl;

    std::cout << cobertura_1;
    valor_cobertura += cobertura_1.calcula_valor();
    comissao_cobertura += cobertura_1.calcula_comissao();
    std::cout << std::endl;

    std::cout << cobertura_2;
    valor_cobertura += cobertura_2.calcula_valor();
    comissao_cobertura += cobertura_2.calcula_comissao();
    std::cout << std::endl;

    std::cout << cobertura_3;
    valor_cobertura += cobertura_3.calcula_valor();
    comissao_cobertura += cobertura_3.calcula_comissao();
    std::cout << std::endl;

    std::cout << casa_1;
    valor_casa += casa_1.calcula_valor();
    comissao_casa += casa_1.calcula_comissao();
    std::cout << std::endl;

    std::cout << casa_2;
    valor_casa += casa_2.calcula_valor();
    comissao_casa += casa_2.calcula_comissao();
    std::cout << std::endl;

    std::cout << "\n>> Resumo Geral <<" << std::endl;

    std::cout << "\n>>Apartamentos<<\n"
            << "\n Quantidade: " << quant_apartamento
            << "\n Valor Total: R$ " << std::fixed << std::setprecision(2) << valor_apartamento
            << "\n Comissão Total: R$" << comissa_apartamento
            << std::endl
            << "\n>>Coberturas<<\n"
            << "\n Quantidade: " << quant_cobertura
            << "\n Valor Total: R$ " << std::fixed << std::setprecision(2) << valor_cobertura
            << "\n Comissão Total: R$ " << std::fixed << std::setprecision(2) << comissao_cobertura
            << std::endl
            << "\n>>Casas<<\n"
            << "\n Quantidade: " << quant_casa
            << "\n Valor Total: R$ " << std::fixed << std::setprecision(2) << valor_casa
            << "\n Comissão Total: R$ " << std::fixed << std::setprecision(2) << comissao_casa
            << std::endl;
}
