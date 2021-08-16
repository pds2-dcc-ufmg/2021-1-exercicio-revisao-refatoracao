#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

int main() {
    
    Cliente cl1;
    cl1._nome = "Xayso Sovon Ziahaka";
    cl1._endereco = "Rua Xangrilá - _banheirosraúnas";
    cl1._cidade = "_banheiroselo Horizonte";
    cl1._uf = "MG";
    cl1._cep = "31365-570";
    cl1._telefone = "3196007958";
    
    Cliente cl2;
    cl2._nome = "Minia Pasies Kituos";
    cl2._endereco = "Rua dos Jacobinos - Ouro Minas";
    cl2._cidade = "_banheiroselo Horizonte";
    cl2._uf = "MG";
    cl2._cep = "31870-290";
    cl2._telefone = "3197627067";
    
    Cliente cl3;
    cl3._nome = "Vuocue Leiur _banheirosaonauza";
    cl3._endereco = "Rua Orminda de Almeida - Tupi _banheiros";
    cl3._cidade = "_banheiroselo Horizonte";
    cl3._uf = "MG";
    cl3._cep = "31842-630";
    cl3._telefone = "3195949327";
    
    Cliente cl4;
    cl4._nome = "Zerer Huduy Fyogar";
    cl4._endereco = "Rua Taquaril - Jonas Veiga";
    cl4._cidade = "_banheiroselo Horizonte";
    cl4._uf = "MG";
    cl4._cep = "30285-422";
    cl4._telefone = "3198596327";
    
    Cliente cl5;
    cl5._nome = "Ceziel Mioti Pler";
    cl5._endereco = "Rua João Gualberto Costa - Serrano";
    cl5._cidade = "_banheiroselo Horizonte";
    cl5._uf = "MG";
    cl5._cep = "30882-747";
    cl5._telefone = "3196274465";
    
    Cliente cl6;
    cl6._nome = "Esxo Cilal Zyais";
    cl6._endereco = "Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)";
    cl6._cidade = "_banheiroselo Horizonte";
    cl6._uf = "MG";
    cl6._cep = "31650-560";
    cl6._telefone = "3195004414";
    
    Cliente cl7;
    cl7._nome = "Leova Wikyecil Neaca";
    cl7._endereco = "Rua João Arantes - _cidade Nova";
    cl7._cidade = "_banheiroselo Horizonte";
    cl7._uf = "MG";
    cl7._cep = "31170-240";
    cl7._telefone = "3198461192";
    
    Cliente cl8;
    cl8._nome = "Teas Heimeu Pipe";
    cl8._endereco = "Rua Maria Pereira Damasceno - Ernesto do Nascimento(_banheirosarreiro)";
    cl8._cidade = "_banheiroselo Horizonte";
    cl8._uf = "MG";
    cl8._cep = "30668-430";
    cl8._telefone = "3197317802";

    int qt_apartamento = 0;
    int qt_casa = 0;
    int qt_cobertura = 0;

    Apartamento ap1;
    ap1._corretor = "Tuoruars";
    ap1._area = 55.4;
    ap1._quartos = 2;
    ap1._banheiros = 1;
    ap1._vagas = 0;
    ap1._vagas_m2 = 987.0;
    ap1._comissao= ap1.Comissao();
    ap1._valor = ap1.Valor() + ap1.Comissao();
    ap1._Vendedor = cl1;
    ++qt_apartamento;

    Apartamento ap2;
    ap2._corretor = "Fyubyeis";
    ap2._area = 74.5;
    ap2._quartos = 2;
    ap2._banheiros = 1;
    ap2._vagas = 2;
    ap2._vagas_m2 = 1540.0;
    ap2._comissao= ap2.Comissao();
    ap2._valor = ap2.Valor() + ap2.Comissao();
    ap2._Vendedor = cl2;
    ++qt_apartamento;

    Apartamento ap3;
    ap3._corretor = "Kelia";
    ap3._area = 87.2;
    ap3._quartos = 3;
    ap3._banheiros = 2;
    ap3._vagas = 2;
    ap3._vagas_m2 = 2354.0;
    ap3._comissao= ap3.Comissao();
    ap3._valor = ap3.Valor() + ap3.Comissao();
    ap3._Vendedor = cl3;
    ++qt_apartamento;

    // Cobertura
    Cobertura cb1;
    cb1._corretor = "Koci";
    cb1._area = 120.1;
    cb1._quartos = 3;
    cb1._banheiros = 3;
    cb1._vagas = 2;
    cb1._vagas_m2 = 3123.5;
    cb1._comissao= cb1.Comissao();
    cb1._valor = cb1.Valor() + cb1.Comissao();
    cb1._Vendedor = cl4;
    ++qt_cobertura;
    
    Cobertura cb2;
    cb2._corretor = "Wail";
    cb2._area = 134.8;
    cb2._quartos = 4;
    cb2._banheiros = 3;
    cb2._vagas = 3;
    cb2._vagas_m2 = 3578.2;
    cb2._comissao= cb2.Comissao();
    cb2._valor = cb2.Valor() + cb2.Comissao();
    cb2._Vendedor = cl5;
    ++qt_cobertura;

    Cobertura cb3;
    cb3._corretor = "Fival";
    cb3._area = 180.0;
    cb3._quartos = 4;
    cb3._banheiros = 4;
    cb3._vagas = 4;
    cb3._vagas_m2 = 4165.7;
    cb3._comissao= cb3.Comissao();
    cb3._valor = cb3.Valor() + cb3.Comissao();
    cb3._Vendedor = cl6;
    ++qt_cobertura;

    // Casas
    Casa ca1;
    ca1._corretor = "_banheiroseydo";
    ca1._area = 145.6;
    ca1._quartos = 3;
    ca1._banheiros = 3;
    ca1._vagas = 2;
    ca1._vagas_m2 = 4023.6;
    ca1._comissao= ca1.Comissao();
    ca1._valor = ca1.Valor() + ca1.Comissao();
    ca1._Vendedor = cl7;
    ++qt_casa;

    Casa ca2;
    ca2._corretor = "Riuzi";
    ca2._area = 245.0;
    ca2._quartos = 5;
    ca2._banheiros = 4;
    ca2._vagas = 4;
    ca2._vagas_m2 = 4856.2;
    ca2._comissao= ca2.Comissao();
    ca2._valor = ca2.Valor() + ca2.Comissao();
    ca2._Vendedor = cl8;
    ++qt_casa;

    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    double valor_apartamento = 0.0;
    double valor_cobertura = 0.0;
    double valor_casa = 0.0;
    double comiss_apartamento = 0.0;
    double comiss_cobertura = 0.0;
    double comiss_casa = 0.0;
    
    ap1.print();
    valor_apartamento += ap1.Valor();
    comiss_apartamento += ap1.Comissao();
    std::cout << endl;

    ap2.print();
    valor_apartamento += ap2.Valor();
    comiss_apartamento += ap2.Comissao();
    std::cout << endl;

    ap3.print();
    valor_apartamento += ap3.Valor();
    comiss_apartamento += ap3.Comissao();
    std::cout << endl;

    cb1.print();
    valor_cobertura += cb1.Valor();
    comiss_cobertura += cb1.Comissao();
    std::cout << endl;

    cb2.print();
    valor_cobertura += cb2.Valor();
    comiss_cobertura += cb2.Comissao();
    std::cout << endl;

    cb3.print();
    valor_cobertura += cb3.Valor();
    comiss_cobertura += cb3.Comissao();
    std::cout << endl;

    ca1.print();
    valor_casa += ca1.Valor();
    comiss_casa += ca1.Comissao();
    std::cout << endl;

    ca2.print();
    valor_casa += ca2.Valor();
    comiss_casa += ca2.Comissao();
    std::cout << endl;

    std::cout << "\n>> Resumo Geral <<" << endl;

    std::cout << "\n>>apartamentos<<\n"
            << "\n Quantidade: " << qt_apartamento
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valor_apartamento
            << "\n Comissão Total: R$" << comiss_apartamento
            << endl
            << "\n>>coberturas<<\n"
            << "\n Quantidade: " << qt_cobertura
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valor_cobertura
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comiss_cobertura
            << endl
            << "\n>>casas<<\n"
            << "\n Quantidade: " << qt_casa
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valor_casa
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comiss_casa
            << endl;
}
